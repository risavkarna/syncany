

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Mon May 30 23:57:41 2011
 */
/* Compiler settings for SyncanyExt.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "SyncanyExt_i.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   1                                 
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _SyncanyExt_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } SyncanyExt_MIDL_TYPE_FORMAT_STRING;

typedef struct _SyncanyExt_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } SyncanyExt_MIDL_PROC_FORMAT_STRING;

typedef struct _SyncanyExt_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } SyncanyExt_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const SyncanyExt_MIDL_TYPE_FORMAT_STRING SyncanyExt__MIDL_TypeFormatString;
extern const SyncanyExt_MIDL_PROC_FORMAT_STRING SyncanyExt__MIDL_ProcFormatString;
extern const SyncanyExt_MIDL_EXPR_FORMAT_STRING SyncanyExt__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IContextMenuExt_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IContextMenuExt_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IShellIconExt_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IShellIconExt_ProxyInfo;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const SyncanyExt_MIDL_PROC_FORMAT_STRING SyncanyExt__MIDL_ProcFormatString =
    {
        0,
        {

			0x0
        }
    };

static const SyncanyExt_MIDL_TYPE_FORMAT_STRING SyncanyExt__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IContextMenuExt, ver. 0.0,
   GUID={0x4A362310,0xA3AA,0x4B47,{0xA6,0x29,0x2F,0x6F,0x31,0x4B,0x77,0x1B}} */

#pragma code_seg(".orpc")
static const unsigned short IContextMenuExt_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IContextMenuExt_ProxyInfo =
    {
    &Object_StubDesc,
    SyncanyExt__MIDL_ProcFormatString.Format,
    &IContextMenuExt_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IContextMenuExt_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    SyncanyExt__MIDL_ProcFormatString.Format,
    &IContextMenuExt_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(3) _IContextMenuExtProxyVtbl = 
{
    0,
    &IID_IContextMenuExt,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _IContextMenuExtStubVtbl =
{
    &IID_IContextMenuExt,
    &IContextMenuExt_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IShellIconExt, ver. 0.0,
   GUID={0xD720C2C7,0x4EC5,0x4E78,{0xAD,0x33,0xE7,0x92,0xA5,0xA6,0xF1,0x88}} */

#pragma code_seg(".orpc")
static const unsigned short IShellIconExt_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IShellIconExt_ProxyInfo =
    {
    &Object_StubDesc,
    SyncanyExt__MIDL_ProcFormatString.Format,
    &IShellIconExt_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IShellIconExt_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    SyncanyExt__MIDL_ProcFormatString.Format,
    &IShellIconExt_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(3) _IShellIconExtProxyVtbl = 
{
    0,
    &IID_IShellIconExt,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _IShellIconExtStubVtbl =
{
    &IID_IShellIconExt,
    &IShellIconExt_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    SyncanyExt__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x700022b, /* MIDL Version 7.0.555 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _SyncanyExt_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IContextMenuExtProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IShellIconExtProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _SyncanyExt_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IContextMenuExtStubVtbl,
    ( CInterfaceStubVtbl *) &_IShellIconExtStubVtbl,
    0
};

PCInterfaceName const _SyncanyExt_InterfaceNamesList[] = 
{
    "IContextMenuExt",
    "IShellIconExt",
    0
};


#define _SyncanyExt_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _SyncanyExt, pIID, n)

int __stdcall _SyncanyExt_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _SyncanyExt, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _SyncanyExt, 2, *pIndex )
    
}

const ExtendedProxyFileInfo SyncanyExt_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _SyncanyExt_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _SyncanyExt_StubVtblList,
    (const PCInterfaceName * ) & _SyncanyExt_InterfaceNamesList,
    0, /* no delegation */
    & _SyncanyExt_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

