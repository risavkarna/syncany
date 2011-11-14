

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IContextMenuExt,0x4A362310,0xA3AA,0x4B47,0xA6,0x29,0x2F,0x6F,0x31,0x4B,0x77,0x1B);


MIDL_DEFINE_GUID(IID, IID_IShellIconExt,0xD720C2C7,0x4EC5,0x4E78,0xAD,0x33,0xE7,0x92,0xA5,0xA6,0xF1,0x88);


MIDL_DEFINE_GUID(IID, LIBID_SyncanyExtLib,0x62459E51,0x3ADB,0x4BF4,0x8B,0xB3,0x51,0x48,0x37,0x7A,0xBA,0xAB);


MIDL_DEFINE_GUID(CLSID, CLSID_ContextMenuExt,0x8E65E24B,0xA16C,0x4DDB,0xAB,0xE9,0xD4,0x94,0x0C,0x65,0x76,0x48);


MIDL_DEFINE_GUID(CLSID, CLSID_ShellIconExt,0x9B527650,0x9FC6,0x4082,0xB8,0xD9,0x9C,0xB6,0x3B,0x34,0xD6,0x5E);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



