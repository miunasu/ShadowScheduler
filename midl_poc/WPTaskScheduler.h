

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __WPTaskScheduler_h__
#define __WPTaskScheduler_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "wtypes.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __DefaultIfName_INTERFACE_DEFINED__
#define __DefaultIfName_INTERFACE_DEFINED__

/* interface DefaultIfName */
/* [implicit_handle][version][uuid] */ 

typedef struct Struct_2_t
    {
    short StructMember0;
    short StructMember1;
    short StructMember2;
    short StructMember3;
    short StructMember4;
    short StructMember5;
    short StructMember6;
    short StructMember7;
    } 	Struct_2_t;

typedef struct Struct_22_t
    {
    long StructMember0;
    short StructMember1;
    short StructMember2;
    byte StructMember3[ 8 ];
    } 	Struct_22_t;

typedef /* [switch_type] */ /* [switch_type] */ union union_52
    {
    /* [case()][unique] */ struct Struct_154_t *unionMember_0;
    /* [case()][unique] */ struct Struct_214_t *unionMember_6;
    /* [case()][unique] */ struct Struct_132_t *unionMember_1;
    /* [case()][unique] */ struct Struct_198_t *unionMember_2;
    /* [case()][unique] */ struct Struct_244_t *unionMember_3;
    /* [case()][unique] */ struct Struct_278_t *unionMember_4;
    /* [case()][unique] */ struct Struct_304_t *unionMember_5;
    } 	union_52;

typedef struct Struct_110_t
    {
    long StructMember0[ 2 ];
    } 	Struct_110_t;

typedef struct Struct_132_t
    {
    struct Struct_110_t StructMember0;
    short StructMember1;
    long StructMember2;
    /* [size_is][unique] */ byte *StructMember3;
    long StructMember4;
    long StructMember5;
    } 	Struct_132_t;

typedef struct Struct_154_t
    {
    short StructMember0;
    long StructMember1;
    long StructMember2;
    /* [unique] */ struct Struct_132_t *StructMember3;
    } 	Struct_154_t;

typedef struct Struct_198_t
    {
    short StructMember0;
    long StructMember1;
    /* [size_is][unique] */ struct Struct_314_t *StructMember2;
    } 	Struct_198_t;

typedef struct Struct_214_t
    {
    short StructMember0;
    long StructMember1;
    long StructMember2;
    /* [unique] */ struct Struct_198_t *StructMember3;
    } 	Struct_214_t;

typedef struct Struct_244_t
    {
    long StructMember0;
    long StructMember1;
    } 	Struct_244_t;

typedef struct Struct_278_t
    {
    /* [unique] */ struct Struct_314_t *StructMember0;
    short StructMember1;
    long StructMember2;
    /* [size_is][unique] */ struct Struct_314_t *StructMember3;
    } 	Struct_278_t;

typedef struct Struct_304_t
    {
    struct Struct_2_t StructMember0;
    } 	Struct_304_t;

typedef struct Struct_314_t
    {
    short StructMember0;
    /* [switch_is] */ union union_52 StructMember1;
    } 	Struct_314_t;

typedef /* [switch_type] */ /* [switch_type] */ union union_340
    {
    /* [case()][unique] */ struct Struct_380_t *unionMember_0;
    /* [case()][unique] */ struct Struct_416_t *unionMember_1;
    /* [case()][unique] */ struct Struct_442_t *unionMember_2;
    /* [case()][unique] */ struct Struct_462_t *unionMember_3;
    /* [case()][unique] */ struct Struct_462_t *unionMember_4;
    } 	union_340;

typedef struct Struct_380_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    } 	Struct_380_t;

typedef struct Struct_416_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    long StructMember1;
    /* [size_is][unique] */ byte *StructMember2;
    } 	Struct_416_t;

typedef struct Struct_442_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    } 	Struct_442_t;

typedef struct Struct_462_t
    {
    struct Struct_110_t StructMember0;
    long StructMember1;
    /* [size_is][unique] */ byte *StructMember2;
    } 	Struct_462_t;

typedef struct Struct_482_t
    {
    short StructMember0;
    /* [switch_is] */ union union_340 StructMember1;
    } 	Struct_482_t;

typedef struct Struct_498_t
    {
    /* [ref] */ struct Struct_22_t *StructMember0;
    long StructMember1;
    /* [size_is][string][unique] */ wchar_t *StructMember2;
    struct Struct_2_t StructMember3;
    struct Struct_2_t StructMember4;
    long StructMember5;
    /* [unique] */ struct Struct_314_t *StructMember6;
    /* [unique] */ struct Struct_482_t *StructMember7;
    short StructMember8;
    short StructMember9;
    } 	Struct_498_t;

typedef struct Struct_542_t
    {
    long StructMember0;
    long StructMember1;
    struct Struct_2_t StructMember2;
    struct Struct_2_t StructMember3;
    } 	Struct_542_t;

long Proc0( 
    /* [in] */ struct Struct_498_t *arg_1,
    /* [in] */ long arg_2);

long Proc1( 
    /* [in] */ struct Struct_22_t *arg_1);

long Proc2( 
    /* [context_handle][out] */ void **arg_1,
    /* [full][out][in] */ struct Struct_22_t *arg_2,
    /* [full][out][in] */ struct Struct_498_t **arg_3,
    /* [full][out][in] */ struct Struct_542_t **arg_4);

long Proc3( 
    /* [context_handle][in] */ void *arg_1,
    /* [full][out][in] */ struct Struct_22_t *arg_2,
    /* [full][out][in] */ struct Struct_498_t **arg_3,
    /* [full][out][in] */ struct Struct_542_t **arg_4);

long Proc4( 
    /* [context_handle][out][in] */ void **arg_1);

long Proc5( 
    /* [in] */ struct Struct_22_t *arg_1,
    /* [full][out][in] */ struct Struct_498_t **arg_2,
    /* [full][out][in] */ struct Struct_542_t **arg_3);

long Proc6( 
    /* [in] */ struct Struct_22_t *arg_1,
    /* [in] */ long arg_2);

long Proc7( 
    /* [in] */ struct Struct_22_t *arg_1,
    /* [in] */ long arg_2);

long Proc8( 
    /* [in] */ struct Struct_22_t *arg_1);

long Proc9( 
    /* [in] */ struct Struct_22_t *arg_1,
    /* [in] */ long arg_2,
    /* [in] */ long arg_3);

long Proc10( 
    /* [in] */ struct Struct_22_t *arg_1,
    /* [in] */ long arg_2);

long Proc11( 
    /* [in] */ struct Struct_22_t *arg_1,
    /* [full][out][in] */ struct Struct_110_t *arg_2);

long Proc12( 
    /* [in] */ long arg_1);


extern handle_t hWPTS;


extern RPC_IF_HANDLE DefaultIfName_v2_0_c_ifspec;
extern RPC_IF_HANDLE DefaultIfName_v2_0_s_ifspec;
#endif /* __DefaultIfName_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


