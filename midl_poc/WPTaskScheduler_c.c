

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for WPTaskScheduler.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, app_config, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>

#include "WPTaskScheduler.h"

#define TYPE_FORMAT_STRING_SIZE   619                               
#define PROC_FORMAT_STRING_SIZE   597                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _WPTaskScheduler_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } WPTaskScheduler_MIDL_TYPE_FORMAT_STRING;

typedef struct _WPTaskScheduler_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } WPTaskScheduler_MIDL_PROC_FORMAT_STRING;

typedef struct _WPTaskScheduler_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } WPTaskScheduler_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax_1_0 = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif



extern const WPTaskScheduler_MIDL_TYPE_FORMAT_STRING WPTaskScheduler__MIDL_TypeFormatString;
extern const WPTaskScheduler_MIDL_PROC_FORMAT_STRING WPTaskScheduler__MIDL_ProcFormatString;
extern const WPTaskScheduler_MIDL_EXPR_FORMAT_STRING WPTaskScheduler__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: DefaultIfName, ver. 2.0,
   GUID={0x33d84484,0x3626,0x47ee,{0x8c,0x6f,0xe7,0xe9,0x8b,0x11,0x3b,0xe1}} */

 extern const MIDL_STUBLESS_PROXY_INFO DefaultIfName_ProxyInfo;
handle_t hWPTS;


static const RPC_CLIENT_INTERFACE DefaultIfName___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x33d84484,0x3626,0x47ee,{0x8c,0x6f,0xe7,0xe9,0x8b,0x11,0x3b,0xe1}},{2,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    &DefaultIfName_ProxyInfo,
    0x02000000
    };
RPC_IF_HANDLE DefaultIfName_v2_0_c_ifspec = (RPC_IF_HANDLE)& DefaultIfName___RpcClientInterface;
#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC DefaultIfName_StubDesc;
#ifdef __cplusplus
}
#endif

static RPC_BINDING_HANDLE DefaultIfName__MIDL_AutoBindHandle;


long Proc0( 
    /* [in] */ struct Struct_498_t *arg_1,
    /* [in] */ long arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  0,
                  0,
                  arg_1,
                  arg_2);
    return ( long  )_RetVal.Simple;
    
}


long Proc1( 
    /* [in] */ struct Struct_22_t *arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  1,
                  0,
                  arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc2( 
    /* [context_handle][out] */ void **arg_1,
    /* [full][out][in] */ struct Struct_22_t *arg_2,
    /* [full][out][in] */ struct Struct_498_t **arg_3,
    /* [full][out][in] */ struct Struct_542_t **arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  2,
                  0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4);
    return ( long  )_RetVal.Simple;
    
}


long Proc3( 
    /* [context_handle][in] */ void *arg_1,
    /* [full][out][in] */ struct Struct_22_t *arg_2,
    /* [full][out][in] */ struct Struct_498_t **arg_3,
    /* [full][out][in] */ struct Struct_542_t **arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  3,
                  0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4);
    return ( long  )_RetVal.Simple;
    
}


long Proc4( 
    /* [context_handle][out][in] */ void **arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  4,
                  0,
                  arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc5( 
    /* [in] */ struct Struct_22_t *arg_1,
    /* [full][out][in] */ struct Struct_498_t **arg_2,
    /* [full][out][in] */ struct Struct_542_t **arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  5,
                  0,
                  arg_1,
                  arg_2,
                  arg_3);
    return ( long  )_RetVal.Simple;
    
}


long Proc6( 
    /* [in] */ struct Struct_22_t *arg_1,
    /* [in] */ long arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  6,
                  0,
                  arg_1,
                  arg_2);
    return ( long  )_RetVal.Simple;
    
}


long Proc7( 
    /* [in] */ struct Struct_22_t *arg_1,
    /* [in] */ long arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  7,
                  0,
                  arg_1,
                  arg_2);
    return ( long  )_RetVal.Simple;
    
}


long Proc8( 
    /* [in] */ struct Struct_22_t *arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  8,
                  0,
                  arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc9( 
    /* [in] */ struct Struct_22_t *arg_1,
    /* [in] */ long arg_2,
    /* [in] */ long arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  9,
                  0,
                  arg_1,
                  arg_2,
                  arg_3);
    return ( long  )_RetVal.Simple;
    
}


long Proc10( 
    /* [in] */ struct Struct_22_t *arg_1,
    /* [in] */ long arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  10,
                  0,
                  arg_1,
                  arg_2);
    return ( long  )_RetVal.Simple;
    
}


long Proc11( 
    /* [in] */ struct Struct_22_t *arg_1,
    /* [full][out][in] */ struct Struct_110_t *arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  11,
                  0,
                  arg_1,
                  arg_2);
    return ( long  )_RetVal.Simple;
    
}


long Proc12( 
    /* [in] */ long arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  12,
                  0,
                  arg_1);
    return ( long  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const WPTaskScheduler_MIDL_PROC_FORMAT_STRING WPTaskScheduler__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Proc0 */

			0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 26 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 28 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 30 */	NdrFcShort( 0x1fe ),	/* Type Offset=510 */

	/* Parameter arg_2 */

/* 32 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 34 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 38 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 40 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 42 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc1 */

/* 44 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 46 */	NdrFcLong( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x1 ),	/* 1 */
/* 52 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 54 */	NdrFcShort( 0x44 ),	/* 68 */
/* 56 */	NdrFcShort( 0x8 ),	/* 8 */
/* 58 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 60 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 70 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 72 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 74 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */

/* 76 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 78 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 80 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc2 */

/* 82 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x49,		/* Old Flags:  full ptr, */
/* 84 */	NdrFcLong( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x2 ),	/* 2 */
/* 90 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 92 */	NdrFcShort( 0xc4 ),	/* 196 */
/* 94 */	NdrFcShort( 0x104 ),	/* 260 */
/* 96 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 98 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 100 */	NdrFcShort( 0x1 ),	/* 1 */
/* 102 */	NdrFcShort( 0x1 ),	/* 1 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 108 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 110 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 112 */	NdrFcShort( 0x232 ),	/* Type Offset=562 */

	/* Parameter arg_2 */

/* 114 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 116 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 118 */	NdrFcShort( 0x236 ),	/* Type Offset=566 */

	/* Parameter arg_3 */

/* 120 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 122 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 124 */	NdrFcShort( 0x23a ),	/* Type Offset=570 */

	/* Parameter arg_4 */

/* 126 */	NdrFcShort( 0x201a ),	/* Flags:  must free, in, out, srv alloc size=8 */
/* 128 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 130 */	NdrFcShort( 0x242 ),	/* Type Offset=578 */

	/* Return value */

/* 132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 134 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc3 */

/* 138 */	0x0,		/* 0 */
			0x49,		/* Old Flags:  full ptr, */
/* 140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x3 ),	/* 3 */
/* 146 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 148 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 150 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 152 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 154 */	NdrFcShort( 0xe8 ),	/* 232 */
/* 156 */	NdrFcShort( 0xcc ),	/* 204 */
/* 158 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 160 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 162 */	NdrFcShort( 0x1 ),	/* 1 */
/* 164 */	NdrFcShort( 0x1 ),	/* 1 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 170 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 172 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 174 */	NdrFcShort( 0x25a ),	/* Type Offset=602 */

	/* Parameter arg_2 */

/* 176 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 178 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 180 */	NdrFcShort( 0x236 ),	/* Type Offset=566 */

	/* Parameter arg_3 */

/* 182 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 184 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 186 */	NdrFcShort( 0x23a ),	/* Type Offset=570 */

	/* Parameter arg_4 */

/* 188 */	NdrFcShort( 0x201a ),	/* Flags:  must free, in, out, srv alloc size=8 */
/* 190 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 192 */	NdrFcShort( 0x242 ),	/* Type Offset=578 */

	/* Return value */

/* 194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 196 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc4 */

/* 200 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x4 ),	/* 4 */
/* 208 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 210 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 212 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 214 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 216 */	NdrFcShort( 0x38 ),	/* 56 */
/* 218 */	NdrFcShort( 0x40 ),	/* 64 */
/* 220 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 222 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 232 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 234 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 236 */	NdrFcShort( 0x262 ),	/* Type Offset=610 */

	/* Return value */

/* 238 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 240 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc5 */

/* 244 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x49,		/* Old Flags:  full ptr, */
/* 246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x5 ),	/* 5 */
/* 252 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 254 */	NdrFcShort( 0xc4 ),	/* 196 */
/* 256 */	NdrFcShort( 0x88 ),	/* 136 */
/* 258 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 260 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 262 */	NdrFcShort( 0x1 ),	/* 1 */
/* 264 */	NdrFcShort( 0x1 ),	/* 1 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 270 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 272 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 274 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter arg_2 */

/* 276 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 278 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 280 */	NdrFcShort( 0x23a ),	/* Type Offset=570 */

	/* Parameter arg_3 */

/* 282 */	NdrFcShort( 0x201a ),	/* Flags:  must free, in, out, srv alloc size=8 */
/* 284 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 286 */	NdrFcShort( 0x242 ),	/* Type Offset=578 */

	/* Return value */

/* 288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 290 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc6 */

/* 294 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0x6 ),	/* 6 */
/* 302 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 304 */	NdrFcShort( 0x4c ),	/* 76 */
/* 306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 308 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 310 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 320 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 322 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 324 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter arg_2 */

/* 326 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 328 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 334 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc7 */

/* 338 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x7 ),	/* 7 */
/* 346 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 348 */	NdrFcShort( 0x4c ),	/* 76 */
/* 350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 352 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 354 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 364 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 366 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 368 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter arg_2 */

/* 370 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 372 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 378 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc8 */

/* 382 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 390 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 392 */	NdrFcShort( 0x44 ),	/* 68 */
/* 394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 396 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 398 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 408 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 410 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 412 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */

/* 414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 416 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc9 */

/* 420 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0x9 ),	/* 9 */
/* 428 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 430 */	NdrFcShort( 0x54 ),	/* 84 */
/* 432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 434 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 436 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 446 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 448 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 450 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter arg_2 */

/* 452 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 454 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 458 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 460 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 464 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 466 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc10 */

/* 470 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0xa ),	/* 10 */
/* 478 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 480 */	NdrFcShort( 0x4c ),	/* 76 */
/* 482 */	NdrFcShort( 0x8 ),	/* 8 */
/* 484 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 486 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 496 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 498 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 500 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter arg_2 */

/* 502 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 504 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 508 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 510 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc11 */

/* 514 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x49,		/* Old Flags:  full ptr, */
/* 516 */	NdrFcLong( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0xb ),	/* 11 */
/* 522 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 524 */	NdrFcShort( 0x80 ),	/* 128 */
/* 526 */	NdrFcShort( 0x44 ),	/* 68 */
/* 528 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 530 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 540 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 542 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 544 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter arg_2 */

/* 546 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 548 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 550 */	NdrFcShort( 0x266 ),	/* Type Offset=614 */

	/* Return value */

/* 552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 554 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc12 */

/* 558 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0xc ),	/* 12 */
/* 566 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 572 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 574 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 586 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 592 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const WPTaskScheduler_MIDL_TYPE_FORMAT_STRING WPTaskScheduler__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x0,	/* FC_RP */
/*  4 */	NdrFcShort( 0x1fa ),	/* Offset= 506 (510) */
/*  6 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 12 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 14 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 16 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 18 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 20 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 22 */	NdrFcShort( 0x8 ),	/* 8 */
/* 24 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 26 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 28 */	NdrFcShort( 0x10 ),	/* 16 */
/* 30 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 32 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 34 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (20) */
			0x5b,		/* FC_END */
/* 38 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 40 */	0x40,		/* Corr desc:  constant, val=257 */
			0x0,		/* 0 */
/* 42 */	NdrFcShort( 0x101 ),	/* 257 */
/* 44 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 46 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x6,		/* FC_SHORT */
/* 48 */	0x6,		/* Corr desc: FC_SHORT */
			0x0,		/*  */
/* 50 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 52 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 54 */	NdrFcShort( 0x2 ),	/* Offset= 2 (56) */
/* 56 */	NdrFcShort( 0x8 ),	/* 8 */
/* 58 */	NdrFcShort( 0x7 ),	/* 7 */
/* 60 */	NdrFcLong( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x28 ),	/* Offset= 40 (104) */
/* 66 */	NdrFcLong( 0x6 ),	/* 6 */
/* 70 */	NdrFcShort( 0x6e ),	/* Offset= 110 (180) */
/* 72 */	NdrFcLong( 0x1 ),	/* 1 */
/* 76 */	NdrFcShort( 0xa8 ),	/* Offset= 168 (244) */
/* 78 */	NdrFcLong( 0x2 ),	/* 2 */
/* 82 */	NdrFcShort( 0xa6 ),	/* Offset= 166 (248) */
/* 84 */	NdrFcLong( 0x3 ),	/* 3 */
/* 88 */	NdrFcShort( 0xa4 ),	/* Offset= 164 (252) */
/* 90 */	NdrFcLong( 0x4 ),	/* 4 */
/* 94 */	NdrFcShort( 0xaa ),	/* Offset= 170 (264) */
/* 96 */	NdrFcLong( 0x5 ),	/* 5 */
/* 100 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (312) */
/* 102 */	NdrFcShort( 0xffff ),	/* Offset= -1 (101) */
/* 104 */	
			0x12, 0x0,	/* FC_UP */
/* 106 */	NdrFcShort( 0x36 ),	/* Offset= 54 (160) */
/* 108 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 112 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 114 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 118 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 120 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (108) */
/* 122 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 124 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 126 */	NdrFcShort( 0x1 ),	/* 1 */
/* 128 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 130 */	NdrFcShort( 0xc ),	/* 12 */
/* 132 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 134 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 136 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 138 */	NdrFcShort( 0x20 ),	/* 32 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0xe ),	/* Offset= 14 (156) */
/* 144 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 146 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (114) */
/* 148 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 150 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 152 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 154 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 156 */	
			0x12, 0x0,	/* FC_UP */
/* 158 */	NdrFcShort( 0xffde ),	/* Offset= -34 (124) */
/* 160 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 162 */	NdrFcShort( 0x18 ),	/* 24 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0xa ),	/* Offset= 10 (176) */
/* 168 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 170 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 172 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 174 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 176 */	
			0x12, 0x0,	/* FC_UP */
/* 178 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (136) */
/* 180 */	
			0x12, 0x0,	/* FC_UP */
/* 182 */	NdrFcShort( 0x2a ),	/* Offset= 42 (224) */
/* 184 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 188 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 190 */	NdrFcShort( 0x4 ),	/* 4 */
/* 192 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 194 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 198 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 200 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 202 */	NdrFcShort( 0x7c ),	/* Offset= 124 (326) */
/* 204 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 206 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 208 */	NdrFcShort( 0x10 ),	/* 16 */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x8 ),	/* Offset= 8 (220) */
/* 214 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 216 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 218 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 220 */	
			0x12, 0x0,	/* FC_UP */
/* 222 */	NdrFcShort( 0xffda ),	/* Offset= -38 (184) */
/* 224 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 226 */	NdrFcShort( 0x18 ),	/* 24 */
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0xa ),	/* Offset= 10 (240) */
/* 232 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 234 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 236 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 238 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 240 */	
			0x12, 0x0,	/* FC_UP */
/* 242 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (206) */
/* 244 */	
			0x12, 0x0,	/* FC_UP */
/* 246 */	NdrFcShort( 0xff92 ),	/* Offset= -110 (136) */
/* 248 */	
			0x12, 0x0,	/* FC_UP */
/* 250 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (206) */
/* 252 */	
			0x12, 0x0,	/* FC_UP */
/* 254 */	NdrFcShort( 0x2 ),	/* Offset= 2 (256) */
/* 256 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 260 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 262 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 264 */	
			0x12, 0x0,	/* FC_UP */
/* 266 */	NdrFcShort( 0x18 ),	/* Offset= 24 (290) */
/* 268 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 272 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 274 */	NdrFcShort( 0xc ),	/* 12 */
/* 276 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 278 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 282 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 284 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 286 */	NdrFcShort( 0x28 ),	/* Offset= 40 (326) */
/* 288 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 290 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 292 */	NdrFcShort( 0x18 ),	/* 24 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x8 ),	/* Offset= 8 (304) */
/* 298 */	0x36,		/* FC_POINTER */
			0x6,		/* FC_SHORT */
/* 300 */	0x3e,		/* FC_STRUCTPAD2 */
			0x8,		/* FC_LONG */
/* 302 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 304 */	
			0x12, 0x0,	/* FC_UP */
/* 306 */	NdrFcShort( 0x14 ),	/* Offset= 20 (326) */
/* 308 */	
			0x12, 0x0,	/* FC_UP */
/* 310 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (268) */
/* 312 */	
			0x12, 0x0,	/* FC_UP */
/* 314 */	NdrFcShort( 0x2 ),	/* Offset= 2 (316) */
/* 316 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/* 318 */	NdrFcShort( 0x10 ),	/* 16 */
/* 320 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 322 */	NdrFcShort( 0xfec4 ),	/* Offset= -316 (6) */
/* 324 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 326 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 328 */	NdrFcShort( 0x10 ),	/* 16 */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x0 ),	/* Offset= 0 (332) */
/* 334 */	0x6,		/* FC_SHORT */
			0x42,		/* FC_STRUCTPAD6 */
/* 336 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 338 */	NdrFcShort( 0xfedc ),	/* Offset= -292 (46) */
/* 340 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 342 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x6,		/* FC_SHORT */
/* 344 */	0x6,		/* Corr desc: FC_SHORT */
			0x0,		/*  */
/* 346 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 348 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 350 */	NdrFcShort( 0x2 ),	/* Offset= 2 (352) */
/* 352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 354 */	NdrFcShort( 0x5 ),	/* 5 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x1c ),	/* Offset= 28 (388) */
/* 362 */	NdrFcLong( 0x1 ),	/* 1 */
/* 366 */	NdrFcShort( 0x2e ),	/* Offset= 46 (412) */
/* 368 */	NdrFcLong( 0x2 ),	/* 2 */
/* 372 */	NdrFcShort( 0x4e ),	/* Offset= 78 (450) */
/* 374 */	NdrFcLong( 0x3 ),	/* 3 */
/* 378 */	NdrFcShort( 0x5c ),	/* Offset= 92 (470) */
/* 380 */	NdrFcLong( 0x4 ),	/* 4 */
/* 384 */	NdrFcShort( 0x56 ),	/* Offset= 86 (470) */
/* 386 */	NdrFcShort( 0xffff ),	/* Offset= -1 (385) */
/* 388 */	
			0x12, 0x0,	/* FC_UP */
/* 390 */	NdrFcShort( 0x2 ),	/* Offset= 2 (392) */
/* 392 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 394 */	NdrFcShort( 0x10 ),	/* 16 */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x6 ),	/* Offset= 6 (404) */
/* 400 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 402 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 404 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 406 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 408 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 410 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 412 */	
			0x12, 0x0,	/* FC_UP */
/* 414 */	NdrFcShort( 0xe ),	/* Offset= 14 (428) */
/* 416 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 418 */	NdrFcShort( 0x1 ),	/* 1 */
/* 420 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 422 */	NdrFcShort( 0x8 ),	/* 8 */
/* 424 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 426 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 428 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 430 */	NdrFcShort( 0x18 ),	/* 24 */
/* 432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 434 */	NdrFcShort( 0x8 ),	/* Offset= 8 (442) */
/* 436 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 438 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 440 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 442 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 444 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 446 */	
			0x12, 0x0,	/* FC_UP */
/* 448 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (416) */
/* 450 */	
			0x12, 0x0,	/* FC_UP */
/* 452 */	NdrFcShort( 0x2 ),	/* Offset= 2 (454) */
/* 454 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 456 */	NdrFcShort( 0x10 ),	/* 16 */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0x6 ),	/* Offset= 6 (466) */
/* 462 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 464 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 466 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 468 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 470 */	
			0x12, 0x0,	/* FC_UP */
/* 472 */	NdrFcShort( 0x2 ),	/* Offset= 2 (474) */
/* 474 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 476 */	NdrFcShort( 0x18 ),	/* 24 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0xa ),	/* Offset= 10 (490) */
/* 482 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 484 */	NdrFcShort( 0xfe8e ),	/* Offset= -370 (114) */
/* 486 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 488 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 490 */	
			0x12, 0x0,	/* FC_UP */
/* 492 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (416) */
/* 494 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 496 */	NdrFcShort( 0x10 ),	/* 16 */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	NdrFcShort( 0x0 ),	/* Offset= 0 (500) */
/* 502 */	0x6,		/* FC_SHORT */
			0x42,		/* FC_STRUCTPAD6 */
/* 504 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 506 */	NdrFcShort( 0xff5c ),	/* Offset= -164 (342) */
/* 508 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 510 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 512 */	NdrFcShort( 0x58 ),	/* 88 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x16 ),	/* Offset= 22 (538) */
/* 518 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 520 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 522 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 524 */	NdrFcShort( 0xfdfa ),	/* Offset= -518 (6) */
/* 526 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 528 */	NdrFcShort( 0xfdf6 ),	/* Offset= -522 (6) */
/* 530 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 532 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 534 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 536 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 538 */	
			0x11, 0x0,	/* FC_RP */
/* 540 */	NdrFcShort( 0xfdfe ),	/* Offset= -514 (26) */
/* 542 */	
			0x12, 0x0,	/* FC_UP */
/* 544 */	NdrFcShort( 0xfe06 ),	/* Offset= -506 (38) */
/* 546 */	
			0x12, 0x0,	/* FC_UP */
/* 548 */	NdrFcShort( 0xff22 ),	/* Offset= -222 (326) */
/* 550 */	
			0x12, 0x0,	/* FC_UP */
/* 552 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (494) */
/* 554 */	
			0x11, 0x0,	/* FC_RP */
/* 556 */	NdrFcShort( 0xfdee ),	/* Offset= -530 (26) */
/* 558 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 560 */	NdrFcShort( 0x2 ),	/* Offset= 2 (562) */
/* 562 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 564 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 566 */	
			0x14, 0x0,	/* FC_FP */
/* 568 */	NdrFcShort( 0xfde2 ),	/* Offset= -542 (26) */
/* 570 */	
			0x14, 0x14,	/* FC_FP [alloced_on_stack] [pointer_deref] */
/* 572 */	NdrFcShort( 0x2 ),	/* Offset= 2 (574) */
/* 574 */	
			0x12, 0x0,	/* FC_UP */
/* 576 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (510) */
/* 578 */	
			0x14, 0x14,	/* FC_FP [alloced_on_stack] [pointer_deref] */
/* 580 */	NdrFcShort( 0x2 ),	/* Offset= 2 (582) */
/* 582 */	
			0x12, 0x0,	/* FC_UP */
/* 584 */	NdrFcShort( 0x2 ),	/* Offset= 2 (586) */
/* 586 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 588 */	NdrFcShort( 0x28 ),	/* 40 */
/* 590 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 592 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 594 */	NdrFcShort( 0xfdb4 ),	/* Offset= -588 (6) */
/* 596 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 598 */	NdrFcShort( 0xfdb0 ),	/* Offset= -592 (6) */
/* 600 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 602 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 604 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 606 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 608 */	NdrFcShort( 0x2 ),	/* Offset= 2 (610) */
/* 610 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 612 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 614 */	
			0x14, 0x0,	/* FC_FP */
/* 616 */	NdrFcShort( 0xfe0a ),	/* Offset= -502 (114) */

			0x0
        }
    };

static const unsigned short DefaultIfName_FormatStringOffsetTable[] =
    {
    0,
    44,
    82,
    138,
    200,
    244,
    294,
    338,
    382,
    420,
    470,
    514,
    558
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for WPTaskScheduler.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, app_config, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"
#ifdef __cplusplus
namespace {
#endif


typedef 
NDR64_FORMAT_CHAR
__midl_frag115_t;
extern const __midl_frag115_t __midl_frag115;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag113_t;
extern const __midl_frag113_t __midl_frag113;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag111_t;
extern const __midl_frag111_t __midl_frag111;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag110_t;
extern const __midl_frag110_t __midl_frag110;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag109_t;
extern const __midl_frag109_t __midl_frag109;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag108_t;
extern const __midl_frag108_t __midl_frag108;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag104_t;
extern const __midl_frag104_t __midl_frag104;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag99_t;
extern const __midl_frag99_t __midl_frag99;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag96_t;
extern const __midl_frag96_t __midl_frag96;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag86_t;
extern const __midl_frag86_t __midl_frag86;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag85_t;
extern const __midl_frag85_t __midl_frag85;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag84_t;
extern const __midl_frag84_t __midl_frag84;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag83_t;
extern const __midl_frag83_t __midl_frag83;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag81_t;
extern const __midl_frag81_t __midl_frag81;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag79_t;
extern const __midl_frag79_t __midl_frag79;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag78_t;
extern const __midl_frag78_t __midl_frag78;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag77_t;
extern const __midl_frag77_t __midl_frag77;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag71_t;
extern const __midl_frag71_t __midl_frag71;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag70_t;
extern const __midl_frag70_t __midl_frag70;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag69_t;
extern const __midl_frag69_t __midl_frag69;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag67_t;
extern const __midl_frag67_t __midl_frag67;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag61_t;
extern const __midl_frag61_t __midl_frag61;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag60_t;
extern const __midl_frag60_t __midl_frag60;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag59_t;
extern const __midl_frag59_t __midl_frag59;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag53_t;
extern const __midl_frag53_t __midl_frag53;

typedef 
NDR64_FORMAT_CHAR
__midl_frag52_t;
extern const __midl_frag52_t __midl_frag52;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag51_t;
extern const __midl_frag51_t __midl_frag51;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag50_t;
extern const __midl_frag50_t __midl_frag50;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag49_t;
extern const __midl_frag49_t __midl_frag49;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag47_t;
extern const __midl_frag47_t __midl_frag47;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag46_t;
extern const __midl_frag46_t __midl_frag46;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag45_t;
extern const __midl_frag45_t __midl_frag45;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag43_t;
extern const __midl_frag43_t __midl_frag43;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag42_t;
extern const __midl_frag42_t __midl_frag42;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag40_t;
extern const __midl_frag40_t __midl_frag40;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag39_t;
extern const __midl_frag39_t __midl_frag39;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag36_t;
extern const __midl_frag36_t __midl_frag36;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag35_t;
extern const __midl_frag35_t __midl_frag35;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag34_t;
extern const __midl_frag34_t __midl_frag34;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    NDR64_UINT32 frag8;
}
__midl_frag33_t;
extern const __midl_frag33_t __midl_frag33;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag32_t;
extern const __midl_frag32_t __midl_frag32;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag31_t;
extern const __midl_frag31_t __midl_frag31;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag30_t;
extern const __midl_frag30_t __midl_frag30;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag29_t;
extern const __midl_frag29_t __midl_frag29;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag28_t;
extern const __midl_frag28_t __midl_frag28;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag27_t;
extern const __midl_frag27_t __midl_frag27;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag26_t;
extern const __midl_frag26_t __midl_frag26;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag25_t;
extern const __midl_frag25_t __midl_frag25;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag24_t;
extern const __midl_frag24_t __midl_frag24;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag23_t;
extern const __midl_frag23_t __midl_frag23;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag22_t;
extern const __midl_frag22_t __midl_frag22;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag21_t;
extern const __midl_frag21_t __midl_frag21;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag20_t;
extern const __midl_frag20_t __midl_frag20;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag19_t;
extern const __midl_frag19_t __midl_frag19;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag18_t;
extern const __midl_frag18_t __midl_frag18;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag17_t;
extern const __midl_frag17_t __midl_frag17;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag14_t;
extern const __midl_frag14_t __midl_frag14;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag13_t;
extern const __midl_frag13_t __midl_frag13;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag12_t;
extern const __midl_frag12_t __midl_frag12;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag11_t;
extern const __midl_frag11_t __midl_frag11;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    NDR64_UINT32 frag10;
}
__midl_frag9_t;
extern const __midl_frag9_t __midl_frag9;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag8_t;
extern const __midl_frag8_t __midl_frag8;

typedef 
struct NDR64_SIZED_CONFORMANT_STRING_FORMAT
__midl_frag7_t;
extern const __midl_frag7_t __midl_frag7;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_NOOP frag2;
    struct _NDR64_EXPR_CONST64 frag3;
}
__midl_frag6_t;
extern const __midl_frag6_t __midl_frag6;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag5_t;
extern const __midl_frag5_t __midl_frag5;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        struct _NDR64_NO_REPEAT_FORMAT frag10;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag11;
        struct _NDR64_POINTER_FORMAT frag12;
        NDR64_FORMAT_CHAR frag13;
    } frag2;
}
__midl_frag4_t;
extern const __midl_frag4_t __midl_frag4;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag3_t;
extern const __midl_frag3_t __midl_frag3;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag2_t;
extern const __midl_frag2_t __midl_frag2;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag115_t __midl_frag115 =
0x5    /* FC64_INT32 */;

static const __midl_frag113_t __midl_frag113 =
{ 
/* Proc12 */
    { 
    /* Proc12 */      /* procedure Proc12 */
        (NDR64_UINT32) 524354 /* 0x80042 */,    /* primitive handle */ /* IsIntrepreted, HasReturn */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag115,
        { 
        /* arg_1 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag115,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag111_t __midl_frag111 =
{ 
/* Struct_110_t */
    { 
    /* Struct_110_t */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* Struct_110_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag110_t __midl_frag110 =
{ 
/* *Struct_110_t */
    0x23,    /* FC64_FP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag111
};

static const __midl_frag109_t __midl_frag109 =
{ 
/* *Struct_22_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag5
};

static const __midl_frag108_t __midl_frag108 =
{ 
/* Proc11 */
    { 
    /* Proc11 */      /* procedure Proc11 */
        (NDR64_UINT32) 528450 /* 0x81042 */,    /* primitive handle */ /* IsIntrepreted, [ptr], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 136 /* 0x88 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag5,
        { 
        /* arg_1 */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag110,
        { 
        /* arg_2 */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag115,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag104_t __midl_frag104 =
{ 
/* Proc10 */
    { 
    /* Proc10 */      /* procedure Proc10 */
        (NDR64_UINT32) 524354 /* 0x80042 */,    /* primitive handle */ /* IsIntrepreted, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 80 /* 0x50 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag5,
        { 
        /* arg_1 */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag115,
        { 
        /* arg_2 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag115,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag99_t __midl_frag99 =
{ 
/* Proc9 */
    { 
    /* Proc9 */      /* procedure Proc9 */
        (NDR64_UINT32) 524354 /* 0x80042 */,    /* primitive handle */ /* IsIntrepreted, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 88 /* 0x58 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag5,
        { 
        /* arg_1 */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag115,
        { 
        /* arg_2 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag115,
        { 
        /* arg_3 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag115,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag96_t __midl_frag96 =
{ 
/* Proc8 */
    { 
    /* Proc8 */      /* procedure Proc8 */
        (NDR64_UINT32) 524354 /* 0x80042 */,    /* primitive handle */ /* IsIntrepreted, HasReturn */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag5,
        { 
        /* arg_1 */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag115,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag86_t __midl_frag86 =
{ 
/* *Struct_542_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag67
};

static const __midl_frag85_t __midl_frag85 =
{ 
/* **Struct_542_t */
    0x23,    /* FC64_FP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag86
};

static const __midl_frag84_t __midl_frag84 =
{ 
/* *Struct_498_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag4
};

static const __midl_frag83_t __midl_frag83 =
{ 
/* **Struct_498_t */
    0x23,    /* FC64_FP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag84
};

static const __midl_frag81_t __midl_frag81 =
{ 
/* Proc5 */
    { 
    /* Proc5 */      /* procedure Proc5 */
        (NDR64_UINT32) 7213122 /* 0x6e1042 */,    /* primitive handle */ /* IsIntrepreted, [ptr], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 176 /* 0xb0 */,
        (NDR64_UINT32) 112 /* 0x70 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag5,
        { 
        /* arg_1 */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag83,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag85,
        { 
        /* arg_3 */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [in], [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag115,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag79_t __midl_frag79 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 225 /* 0xe1 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag78_t __midl_frag78 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag79
};

static const __midl_frag77_t __midl_frag77 =
{ 
/* Proc4 */
    { 
    /* Proc4 */      /* procedure Proc4 */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 60 /* 0x3c */,
        (NDR64_UINT32) 68 /* 0x44 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 224 /* 0xe0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag79,
        { 
        /* arg_1 */
            0,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag115,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag71_t __midl_frag71 =
{ 
/* *Struct_22_t */
    0x23,    /* FC64_FP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag5
};

static const __midl_frag70_t __midl_frag70 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag69_t __midl_frag69 =
{ 
/* Proc3 */
    { 
    /* Proc3 */      /* procedure Proc3 */
        (NDR64_UINT32) 23990336 /* 0x16e1040 */,    /* explicit handle */ /* IsIntrepreted, [ptr], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 212 /* 0xd4 */,
        (NDR64_UINT32) 184 /* 0xb8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag70,
        { 
        /* arg_1 */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag71,
        { 
        /* arg_2 */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag83,
        { 
        /* arg_3 */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_4 */      /* parameter arg_4 */
        &__midl_frag85,
        { 
        /* arg_4 */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [in], [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag115,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag67_t __midl_frag67 =
{ 
/* Struct_542_t */
    { 
    /* Struct_542_t */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* Struct_542_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */
    }
};

static const __midl_frag61_t __midl_frag61 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 160 /* 0xa0 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag60_t __midl_frag60 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag61
};

static const __midl_frag59_t __midl_frag59 =
{ 
/* Proc2 */
    { 
    /* Proc2 */      /* procedure Proc2 */
        (NDR64_UINT32) 7213122 /* 0x6e1042 */,    /* primitive handle */ /* IsIntrepreted, [ptr], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 176 /* 0xb0 */,
        (NDR64_UINT32) 244 /* 0xf4 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag61,
        { 
        /* arg_1 */
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag71,
        { 
        /* arg_2 */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag83,
        { 
        /* arg_3 */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_4 */      /* parameter arg_4 */
        &__midl_frag85,
        { 
        /* arg_4 */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [in], [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag115,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag53_t __midl_frag53 =
{ 
/* *Struct_462_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag49
};

static const __midl_frag52_t __midl_frag52 =
0x2    /* FC64_INT8 */;

static const __midl_frag51_t __midl_frag51 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag50_t __midl_frag50 =
{ 
/* *byte */
    { 
    /* *byte */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *byte */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag51
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag52
    }
};

static const __midl_frag49_t __midl_frag49 =
{ 
/* Struct_462_t */
    { 
    /* Struct_462_t */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_462_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *byte */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag50
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag47_t __midl_frag47 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag46_t __midl_frag46 =
{ 
/* Struct_442_t */
    { 
    /* Struct_442_t */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_442_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag47
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag45_t __midl_frag45 =
{ 
/* *Struct_442_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag46
};

static const __midl_frag43_t __midl_frag43 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag42_t __midl_frag42 =
{ 
/* *byte */
    { 
    /* *byte */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *byte */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag43
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag52
    }
};

static const __midl_frag40_t __midl_frag40 =
{ 
/* Struct_416_t */
    { 
    /* Struct_416_t */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_416_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag47
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *byte */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag42
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag39_t __midl_frag39 =
{ 
/* *Struct_416_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag40
};

static const __midl_frag36_t __midl_frag36 =
{ 
/* Struct_380_t */
    { 
    /* Struct_380_t */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_380_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag47
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag47
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag35_t __midl_frag35 =
{ 
/* *Struct_380_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag36
};

static const __midl_frag34_t __midl_frag34 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x4,    /* FC64_INT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag33_t __midl_frag33 =
{ 
/* union_340 */
    { 
    /* union_340 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x4,    /* FC64_INT16 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag34,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 5 /* 0x5 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 0 /* 0x0 */,
        &__midl_frag35,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag39,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag45,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag53,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag53,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag32_t __midl_frag32 =
{ 
/* Struct_482_t */
    { 
    /* Struct_482_t */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_482_t */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 6 /* 0x6 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag33
        },
        { 
        /* Struct_482_t */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag31_t __midl_frag31 =
{ 
/* Struct_304_t */
    { 
    /* Struct_304_t */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* Struct_304_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag30_t __midl_frag30 =
{ 
/* *Struct_304_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag31
};

static const __midl_frag29_t __midl_frag29 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 12 /* 0xc */
    }
};

static const __midl_frag28_t __midl_frag28 =
{ 
/* *Struct_314_t */
    { 
    /* *Struct_314_t */
        { 
        /* *Struct_314_t */
            0x47,    /* FC64_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *Struct_314_t */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag8
        },
        &__midl_frag29,
        0,
        0
    }
};

static const __midl_frag27_t __midl_frag27 =
{ 
/* Struct_278_t */
    { 
    /* Struct_278_t */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_278_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *Struct_314_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag8
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *Struct_314_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag28
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag26_t __midl_frag26 =
{ 
/* *Struct_278_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag27
};

static const __midl_frag25_t __midl_frag25 =
{ 
/* Struct_244_t */
    { 
    /* Struct_244_t */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* Struct_244_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag24_t __midl_frag24 =
{ 
/* *Struct_244_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag25
};

static const __midl_frag23_t __midl_frag23 =
{ 
/* *Struct_198_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag19
};

static const __midl_frag22_t __midl_frag22 =
{ 
/* *Struct_132_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag13
};

static const __midl_frag21_t __midl_frag21 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag20_t __midl_frag20 =
{ 
/* *Struct_314_t */
    { 
    /* *Struct_314_t */
        { 
        /* *Struct_314_t */
            0x47,    /* FC64_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *Struct_314_t */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag8
        },
        &__midl_frag21,
        0,
        0
    }
};

static const __midl_frag19_t __midl_frag19 =
{ 
/* Struct_198_t */
    { 
    /* Struct_198_t */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_198_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *Struct_314_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag20
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag18_t __midl_frag18 =
{ 
/* Struct_214_t */
    { 
    /* Struct_214_t */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_214_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *Struct_198_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag19
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag17_t __midl_frag17 =
{ 
/* *Struct_214_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag18
};

static const __midl_frag14_t __midl_frag14 =
{ 
/* *byte */
    { 
    /* *byte */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *byte */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag29
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag52
    }
};

static const __midl_frag13_t __midl_frag13 =
{ 
/* Struct_132_t */
    { 
    /* Struct_132_t */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_132_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *byte */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag14
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag12_t __midl_frag12 =
{ 
/* Struct_154_t */
    { 
    /* Struct_154_t */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_154_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *Struct_132_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag13
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag11_t __midl_frag11 =
{ 
/* *Struct_154_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag12
};

static const __midl_frag9_t __midl_frag9 =
{ 
/* union_52 */
    { 
    /* union_52 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x4,    /* FC64_INT16 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag34,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 7 /* 0x7 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 0 /* 0x0 */,
        &__midl_frag11,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag17,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag22,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag23,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag24,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag26,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag30,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag8_t __midl_frag8 =
{ 
/* Struct_314_t */
    { 
    /* Struct_314_t */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_314_t */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 6 /* 0x6 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag9
        },
        { 
        /* Struct_314_t */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag7_t __midl_frag7 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *wchar_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    },
    &__midl_frag6
};

static const __midl_frag6_t __midl_frag6 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_NOOP */
        0x5,    /* FC_EXPR_PAD */
        (NDR64_UINT8) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 257 /* 0x101 */
    }
};

static const __midl_frag5_t __midl_frag5 =
{ 
/* Struct_22_t */
    { 
    /* Struct_22_t */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* Struct_22_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag4_t __midl_frag4 =
{ 
/* Struct_498_t */
    { 
    /* Struct_498_t */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_498_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 88 /* 0x58 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *Struct_22_t */
            0x20,    /* FC64_RP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag5
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag7
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 64 /* 0x40 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *Struct_314_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag8
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 72 /* 0x48 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *Struct_482_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag32
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag3_t __midl_frag3 =
{ 
/* *Struct_498_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag4
};

static const __midl_frag2_t __midl_frag2 =
{ 
/* Proc0 */
    { 
    /* Proc0 */      /* procedure Proc0 */
        (NDR64_UINT32) 2883650 /* 0x2c0042 */,    /* primitive handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag4,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag115,
        { 
        /* arg_2 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag115,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;
#ifdef __cplusplus
}
#endif


#include "poppack.h"


static const FormatInfoRef DefaultIfName_Ndr64ProcTable[] =
    {
    &__midl_frag2,
    &__midl_frag96,
    &__midl_frag59,
    &__midl_frag69,
    &__midl_frag77,
    &__midl_frag81,
    &__midl_frag104,
    &__midl_frag104,
    &__midl_frag96,
    &__midl_frag99,
    &__midl_frag104,
    &__midl_frag108,
    &__midl_frag113
    };


#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC DefaultIfName_StubDesc = 
    {
    (void *)& DefaultIfName___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &hWPTS,
    0,
    0,
    0,
    0,
    WPTaskScheduler__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60000, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& DefaultIfName_ProxyInfo,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

static const MIDL_SYNTAX_INFO DefaultIfName_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    WPTaskScheduler__MIDL_ProcFormatString.Format,
    DefaultIfName_FormatStringOffsetTable,
    WPTaskScheduler__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) DefaultIfName_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO DefaultIfName_ProxyInfo =
    {
    &DefaultIfName_StubDesc,
    WPTaskScheduler__MIDL_ProcFormatString.Format,
    DefaultIfName_FormatStringOffsetTable,
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)DefaultIfName_SyntaxInfo
    
    };

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

