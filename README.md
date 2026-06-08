# WPTaskScheduler-PoC

[English Version](README_EN.md)

通过 Windows 未文档化的 WP TaskScheduler RPC 接口创建**隐蔽计划任务**的 PoC。

## 背景

Windows 10 引入了一个内部调度子系统 **WP TaskScheduler**（`WPTaskScheduler.dll`），运行在 Task Scheduler 服务内部，暴露了一个未文档化的 RPC 接口：

```
Interface: {33D84484-3626-47EE-8C6F-E7E98B113BE1} v2.0
Transport: ncalrpc (本地 RPC)
```

通过该接口创建的计划任务对以下工具**完全不可见**：
- `schtasks /query`
- `Get-ScheduledTask`
- 任务计划程序 MMC 管理单元
- `TaskCache\Tree` / `TaskCache\Tasks` 注册表
- `C:\Windows\System32\Tasks\` 文件系统


常规排查方法排查情况：
| 排查方法 | 结果 | 原因 |
|----------|------|------|
| `schtasks /query` | 未找到 | 依赖 TaskCache\Tree 注册表枚举 |
| `Get-ScheduledTask` | 未找到 | 底层同样走 ITaskService COM 接口 |
| Task Scheduler MMC | 不可见 | 同上 |
| `C:\Windows\System32\Tasks\` 目录 | 无对应 XML | 任务未写入文件系统 |
| TaskCache\Tree 注册表 | 无条目 | NdrClientCall3 绕过了 Tree 注册 |
| TaskCache\Tasks GUID 枚举 | 无 `{e0bff96f...}` | 任务未写入 Tasks 子键 |
| TaskCache\Plain/Logon/Boot 分类 | 无匹配 GUID | 不存在分类注册 |
| Run/RunOnce 注册表 | 干净 | 未使用此机制 |
| Startup 文件夹 | 干净 | 未使用此机制 |
| WMI 事件订阅 | 仅系统默认 | 未使用此机制 |
| Windows 服务 | 无恶意服务 | 未使用此机制 |
| IFEO 调试器劫持 | 干净 | 未使用此机制 |
| Winlogon Shell/Userinit | 正常值 | 未使用此机制 |
| COM 劫持 (HKCU CLSID) | 仅 OneDrive | 未使用此机制 |
| AppInit_DLLs | 空/禁用 | 未使用此机制 |
| LSA/Print/Network Provider | 干净 | 未使用此机制 |
| autoruns | 干净 | 以上机制全部绕过，aoturuns致盲 |



持久化数据仅存储在：
```
HKLM\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Schedule\WP\TaskScheduler\Schedules\
```

## 项目结构

```
WPTaskScheduler-PoC/
│
├── README.md
├── README_EN.md
│
├── raw_ndr64/                  # 独立版本，无外部依赖，可作为 shellcode 基础
│   ├── poc_wp_task.c
│   └── poc_wp_task.exe
│
└── midl_poc/                   # MIDL 生成的存根版本
    ├── WPTaskScheduler.idl
    ├── WPTaskScheduler.h
    ├── WPTaskScheduler_c.c     # MIDL 自动生成
    ├── poc_midl.c
    └── poc_midl.exe
```
## 两种实现

### raw_ndr64 - 可作 Shellcode

手动逆向还原的 NDR64 过程/类型格式字符串，通过 `NdrClientCall3` 调用 `WptsCreateSchedule`。

- 除 ntdll/rpcrt4 外**无任何外部依赖**（任何 Windows 进程中均已加载）
- 自包含 RPC 绑定和序列化逻辑
- 适合作为 shellcode 基础或位置无关载荷
- 直接从恶意样本逆向还原

### midl_poc - MIDL 存根版本

使用 IDL 经 MIDL 编译器生成的标准客户端存根。代码更清晰，易于修改，但依赖生成的存根文件。

## 编译

需要 MSVC（Visual Studio Build Tools x64）：

```batch
:: raw_ndr64 版本
cd raw_ndr64
cl /W3 /nologo /O2 poc_wp_task.c /link rpcrt4.lib ole32.lib

:: midl_poc 版本
cd midl_poc
midl /protocol all /client stub /server none /env x64 /app_config WPTaskScheduler.idl
cl /W3 /nologo /O2 poc_midl.c WPTaskScheduler_c.c /link rpcrt4.lib ole32.lib
```

## 用法

```
raw_ndr64\poc_wp_task.exe <可执行文件路径> [参数]
midl_poc\poc_midl.exe <可执行文件路径> [参数]
```

创建一个登录触发的隐蔽任务 `ShadowScheduler_<GUID>`，在用户登录时执行指定程序。

## 免责声明

本代码仅供**安全研究和教育目的**使用。它展示了在真实恶意软件中观察到的技术，旨在帮助防御者理解和检测此类持久化机制。禁止用于未授权访问。