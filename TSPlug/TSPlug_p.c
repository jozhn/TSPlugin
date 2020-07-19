

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for TSPlug.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


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


#include "TSPlug_i.h"

#define TYPE_FORMAT_STRING_SIZE   1233                              
#define PROC_FORMAT_STRING_SIZE   8197                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _TSPlug_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } TSPlug_MIDL_TYPE_FORMAT_STRING;

typedef struct _TSPlug_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } TSPlug_MIDL_PROC_FORMAT_STRING;

typedef struct _TSPlug_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } TSPlug_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const TSPlug_MIDL_TYPE_FORMAT_STRING TSPlug__MIDL_TypeFormatString;
extern const TSPlug_MIDL_PROC_FORMAT_STRING TSPlug__MIDL_ProcFormatString;
extern const TSPlug_MIDL_EXPR_FORMAT_STRING TSPlug__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITSPlugInterFace_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITSPlugInterFace_ProxyInfo;

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_AsmClear_Proxy( 
    ITSPlugInterFace * This,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[6324],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_AsmCode_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ LONG base_addr,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[6360],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_Assemble_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ BSTR asm_code,
    /* [in] */ LONG base_addr,
    /* [in] */ LONG is_upper,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[6402],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_MatchPicName_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ BSTR pic_name,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[6456],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_SetShowErrorMsg_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ LONG show,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[6498],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_Reg_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ BSTR reg_code,
    /* [in] */ LONG type,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[6540],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_GetMachineCode_Proxy( 
    ITSPlugInterFace * This,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[6588],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_TSGuardProtectToHide_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ LONG enble,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[6624],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_TSGuardProtectToHide2_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ LONG enable,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[6666],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_TSGuardProtectToNP_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ LONG enable,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[6708],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_Delay_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ LONG mis,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[6750],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_FindStrS_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ LONG x1,
    /* [in] */ LONG y1,
    /* [in] */ LONG x2,
    /* [in] */ LONG y2,
    /* [in] */ BSTR string,
    /* [in] */ BSTR color_format,
    /* [in] */ DOUBLE sim,
    /* [out] */ VARIANT *intX,
    /* [out] */ VARIANT *intY,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[6792],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_FindStrFastS_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ LONG x1,
    /* [in] */ LONG y1,
    /* [in] */ LONG x2,
    /* [in] */ LONG y2,
    /* [in] */ BSTR string,
    /* [in] */ BSTR color_format,
    /* [in] */ DOUBLE sim,
    /* [out] */ VARIANT *intX,
    /* [out] */ VARIANT *intY,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[6882],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_FindStrExS_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ LONG x1,
    /* [in] */ LONG y1,
    /* [in] */ LONG x2,
    /* [in] */ LONG y2,
    /* [in] */ BSTR string,
    /* [in] */ BSTR color_format,
    /* [in] */ DOUBLE sim,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[6972],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_FindStrFastExS_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ LONG x1,
    /* [in] */ LONG y1,
    /* [in] */ LONG x2,
    /* [in] */ LONG y2,
    /* [in] */ BSTR string,
    /* [in] */ BSTR color_format,
    /* [in] */ DOUBLE sim,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[7050],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_FindPicS_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ LONG x1,
    /* [in] */ LONG y1,
    /* [in] */ LONG x2,
    /* [in] */ LONG y2,
    /* [in] */ BSTR pic_name,
    /* [in] */ BSTR delta_color,
    /* [in] */ DOUBLE sim,
    /* [in] */ LONG dir,
    /* [out] */ VARIANT *intX,
    /* [out] */ VARIANT *intY,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[7128],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_FindPicExS_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ LONG x1,
    /* [in] */ LONG y1,
    /* [in] */ LONG x2,
    /* [in] */ LONG y2,
    /* [in] */ BSTR pic_name,
    /* [in] */ BSTR delta_color,
    /* [in] */ DOUBLE sim,
    /* [in] */ LONG dir,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[7224],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_SetDictPwd_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ BSTR pwd,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[7308],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_SetPicPwd_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ BSTR pwd,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[7350],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_LeftDoubleClick_Proxy( 
    ITSPlugInterFace * This,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[7392],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_FreeProcessMemory_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ LONG hwnd,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[7428],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_TSDXGraphicProtect_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ LONG enable,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[7470],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_TSDXKmProtect_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ LONG enable,
    /* [in] */ BSTR type,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[7512],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_CheckFontSmooth_Proxy( 
    ITSPlugInterFace * This,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[7560],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_DisableFontSmooth_Proxy( 
    ITSPlugInterFace * This,
    /* [retval][out] */ LONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[7596],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_GetScreenData_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ LONG x1,
    /* [in] */ LONG y1,
    /* [in] */ LONG x2,
    /* [in] */ LONG y2,
    /* [retval][out] */ LONG *RetAddr)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[7632],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_EnableRealMouse_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ ULONG enable,
    /* [in] */ ULONG mousedelay,
    /* [in] */ ULONG mousestep,
    /* [retval][out] */ ULONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[7692],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_EnableRealKeypad_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ ULONG enable,
    /* [retval][out] */ ULONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[7746],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_MoveToEx_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ ULONG x,
    /* [in] */ ULONG y,
    /* [in] */ ULONG w,
    /* [in] */ ULONG h,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[7788],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_CheckUAC_Proxy( 
    ITSPlugInterFace * This,
    /* [retval][out] */ ULONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[7848],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_SetUAC_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ ULONG enable,
    /* [retval][out] */ ULONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[7884],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_WaitKey_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ ULONG vk_code,
    /* [in] */ ULONG time_out,
    /* [retval][out] */ ULONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[7926],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_FindMultiColor_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ ULONG x1,
    /* [in] */ ULONG y1,
    /* [in] */ ULONG x2,
    /* [in] */ ULONG y2,
    /* [in] */ BSTR first_color,
    /* [in] */ BSTR offset_color,
    /* [in] */ DOUBLE sim,
    /* [in] */ ULONG dir,
    /* [out] */ VARIANT *intX,
    /* [out] */ VARIANT *intY,
    /* [retval][out] */ ULONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[7974],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_FindMultiColorEx_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ ULONG x1,
    /* [in] */ ULONG y1,
    /* [in] */ ULONG x2,
    /* [in] */ ULONG y2,
    /* [in] */ BSTR first_color,
    /* [in] */ BSTR offset_color,
    /* [in] */ DOUBLE sim,
    /* [in] */ ULONG dir,
    /* [retval][out] */ BSTR *retstring)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[8070],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITSPlugInterFace_SetSimMode_Proxy( 
    ITSPlugInterFace * This,
    /* [in] */ ULONG mode,
    /* [retval][out] */ ULONG *nret)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &TSPlug__MIDL_ProcFormatString.Format[8154],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const TSPlug_MIDL_PROC_FORMAT_STRING TSPlug__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure BindWindow */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 10 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 16 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 24 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter display */

/* 30 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter mouse */

/* 36 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter keypad */

/* 42 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter mode */

/* 48 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 50 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 52 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 54 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 56 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 60 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 62 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BindWindowEx */

/* 66 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 68 */	NdrFcLong( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x8 ),	/* 8 */
/* 74 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 76 */	NdrFcShort( 0x10 ),	/* 16 */
/* 78 */	NdrFcShort( 0x24 ),	/* 36 */
/* 80 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 82 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x1 ),	/* 1 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 90 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 92 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter display */

/* 96 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 98 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 100 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter mouse */

/* 102 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 104 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 106 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter keypad */

/* 108 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 110 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 112 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter publics */

/* 114 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 116 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 118 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter mode */

/* 120 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 122 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 126 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 128 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 134 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnBindWindow */

/* 138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x9 ),	/* 9 */
/* 146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x24 ),	/* 36 */
/* 152 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 154 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 162 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 170 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure KeyDown */

/* 174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0xa ),	/* 10 */
/* 182 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 186 */	NdrFcShort( 0x24 ),	/* 36 */
/* 188 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 190 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vk_code */

/* 198 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 200 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 204 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 206 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 212 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure KeyUp */

/* 216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0xb ),	/* 11 */
/* 224 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 228 */	NdrFcShort( 0x24 ),	/* 36 */
/* 230 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 232 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vk_code */

/* 240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 246 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure KeyPress */

/* 258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0xc ),	/* 12 */
/* 266 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 270 */	NdrFcShort( 0x24 ),	/* 36 */
/* 272 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 274 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vk_code */

/* 282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 288 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 290 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 296 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LeftDown */

/* 300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0xd ),	/* 13 */
/* 308 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0x24 ),	/* 36 */
/* 314 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 316 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 324 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LeftUp */

/* 336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0xe ),	/* 14 */
/* 344 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x24 ),	/* 36 */
/* 350 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 352 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 360 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 362 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 368 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LeftClick */

/* 372 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0xf ),	/* 15 */
/* 380 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x24 ),	/* 36 */
/* 386 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 388 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 396 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 398 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 404 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MoveTo */

/* 408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x10 ),	/* 16 */
/* 416 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 418 */	NdrFcShort( 0x10 ),	/* 16 */
/* 420 */	NdrFcShort( 0x24 ),	/* 36 */
/* 422 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 424 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 438 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 440 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 444 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 446 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 452 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindPic */

/* 456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x11 ),	/* 17 */
/* 464 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 466 */	NdrFcShort( 0x38 ),	/* 56 */
/* 468 */	NdrFcShort( 0x24 ),	/* 36 */
/* 470 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xc,		/* 12 */
/* 472 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 474 */	NdrFcShort( 0x1 ),	/* 1 */
/* 476 */	NdrFcShort( 0x1 ),	/* 1 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 486 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 488 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 492 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 494 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 498 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 500 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pic_name */

/* 504 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 506 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 508 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter delta_color */

/* 510 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 512 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 514 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter sim */

/* 516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 518 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 520 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dir */

/* 522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 524 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter intX */

/* 528 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 530 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 532 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter intY */

/* 534 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 536 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 538 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter nret */

/* 540 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 542 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 548 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RightClick */

/* 552 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x12 ),	/* 18 */
/* 560 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0x24 ),	/* 36 */
/* 566 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 568 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 576 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 578 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 584 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RightDown */

/* 588 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x13 ),	/* 19 */
/* 596 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x24 ),	/* 36 */
/* 602 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 604 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 612 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 614 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 620 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindColor */

/* 624 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x14 ),	/* 20 */
/* 632 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 634 */	NdrFcShort( 0x38 ),	/* 56 */
/* 636 */	NdrFcShort( 0x24 ),	/* 36 */
/* 638 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 640 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 642 */	NdrFcShort( 0x1 ),	/* 1 */
/* 644 */	NdrFcShort( 0x1 ),	/* 1 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 648 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 650 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 654 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 656 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 660 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 662 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 666 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 668 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter color */

/* 672 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 674 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 676 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter sim */

/* 678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 680 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 682 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dir */

/* 684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 686 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter intX */

/* 690 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 692 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 694 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter intY */

/* 696 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 698 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 700 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter nret */

/* 702 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 704 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 708 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 710 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RightUp */

/* 714 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 716 */	NdrFcLong( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x15 ),	/* 21 */
/* 722 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x24 ),	/* 36 */
/* 728 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 730 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 738 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 740 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 746 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetColor */

/* 750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x16 ),	/* 22 */
/* 758 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 760 */	NdrFcShort( 0x10 ),	/* 16 */
/* 762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 764 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 766 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 768 */	NdrFcShort( 0x1 ),	/* 1 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 776 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 782 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter RetStrColor */

/* 786 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 788 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 790 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 792 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 794 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCursorShape */

/* 798 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x17 ),	/* 23 */
/* 806 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x8 ),	/* 8 */
/* 812 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 814 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 816 */	NdrFcShort( 0x1 ),	/* 1 */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RetCursorShape */

/* 822 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 824 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 826 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 830 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPath */

/* 834 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x18 ),	/* 24 */
/* 842 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0x24 ),	/* 36 */
/* 848 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 850 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x1 ),	/* 1 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 858 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 860 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 862 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 864 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 866 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 872 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TSGuardProtect */

/* 876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x19 ),	/* 25 */
/* 884 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 888 */	NdrFcShort( 0x24 ),	/* 36 */
/* 890 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 892 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x1 ),	/* 1 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enable */

/* 900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 902 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter type */

/* 906 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 908 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 910 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 912 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 914 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 920 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure KeyPressStr */

/* 924 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x1a ),	/* 26 */
/* 932 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 934 */	NdrFcShort( 0x8 ),	/* 8 */
/* 936 */	NdrFcShort( 0x24 ),	/* 36 */
/* 938 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 940 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x1 ),	/* 1 */
/* 946 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter key_str */

/* 948 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 950 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 952 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter delay */

/* 954 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 956 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 960 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 962 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 968 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendString */

/* 972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x1b ),	/* 27 */
/* 980 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 984 */	NdrFcShort( 0x24 ),	/* 36 */
/* 986 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 988 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 992 */	NdrFcShort( 0x1 ),	/* 1 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 996 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 998 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter str */

/* 1002 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1004 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1006 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 1008 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1010 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1016 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendString2 */

/* 1020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1028 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1032 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1034 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1036 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 1044 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1046 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter str */

/* 1050 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1052 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1054 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 1056 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1058 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1064 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure KeyPressChar */

/* 1068 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1074 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1076 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1082 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1084 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1088 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter key_str */

/* 1092 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1094 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1096 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 1098 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1100 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1106 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure KeyDownChar */

/* 1110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1116 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1118 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1122 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1124 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1126 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter key_str */

/* 1134 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1136 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1138 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 1140 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1142 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1148 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure KeyUpChar */

/* 1152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1158 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1160 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1166 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1168 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1172 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter key_str */

/* 1176 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1178 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1180 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 1182 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1184 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1190 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCursorPos */

/* 1194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1200 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1202 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1208 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1210 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1212 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 1218 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1220 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1222 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter y */

/* 1224 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1226 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1228 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter nret */

/* 1230 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1232 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1238 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MoveR */

/* 1242 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1250 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1252 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1254 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1256 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1258 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1264 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rx */

/* 1266 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1268 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ry */

/* 1272 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1274 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rnet */

/* 1278 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1280 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1286 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Ver */

/* 1290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1296 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1298 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1304 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1306 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1308 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retver */

/* 1314 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1316 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1318 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 1320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1322 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPath */

/* 1326 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1334 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1338 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1340 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1342 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1344 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retpath */

/* 1350 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1352 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1354 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 1356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1358 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MiddleClick */

/* 1362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1368 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1370 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1374 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1376 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1378 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1384 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 1386 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1388 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1394 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WheelDown */

/* 1398 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1406 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1410 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1412 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1414 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 1422 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1424 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1430 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WheelUp */

/* 1434 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1440 */	NdrFcShort( 0x26 ),	/* 38 */
/* 1442 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1448 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1450 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 1458 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1460 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1464 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1466 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Capture */

/* 1470 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1476 */	NdrFcShort( 0x27 ),	/* 39 */
/* 1478 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1480 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1482 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1484 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1486 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1490 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1492 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 1494 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1496 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 1500 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1502 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 1506 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1508 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 1512 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1514 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter file */

/* 1518 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1520 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1522 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 1524 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1526 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1530 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1532 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CaptureJpg */

/* 1536 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1542 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1544 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1546 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1548 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1550 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1552 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1556 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 1560 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1562 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 1566 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1568 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 1572 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1574 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 1578 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1580 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter file */

/* 1584 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1586 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1588 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 1590 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1592 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1598 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CapturePng */

/* 1602 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1610 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1612 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1614 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1616 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1618 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1624 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 1626 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1628 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 1632 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1634 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 1638 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1640 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 1644 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1646 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter file */

/* 1650 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1652 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1654 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 1656 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1658 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1664 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LockInput */

/* 1668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1674 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1676 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1680 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1682 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1684 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lock */

/* 1692 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1694 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 1698 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1700 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1704 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1706 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Ocr */

/* 1710 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1712 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1716 */	NdrFcShort( 0x2b ),	/* 43 */
/* 1718 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1720 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1724 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 1726 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1728 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1730 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1732 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 1734 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1736 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 1740 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1742 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 1746 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1748 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 1752 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1754 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter color_format */

/* 1758 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1760 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1762 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter sim */

/* 1764 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1766 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1768 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter retstr */

/* 1770 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1772 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1774 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 1776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1778 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDict */

/* 1782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1790 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1792 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1794 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1796 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1798 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1802 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1804 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 1806 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1808 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter file */

/* 1812 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1814 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1816 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 1818 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1820 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1826 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UseDict */

/* 1830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1836 */	NdrFcShort( 0x2d ),	/* 45 */
/* 1838 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1842 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1844 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1846 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 1854 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1856 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 1860 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1862 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1868 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ClearDict */

/* 1872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1878 */	NdrFcShort( 0x2e ),	/* 46 */
/* 1880 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1884 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1886 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1888 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 1896 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1898 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 1902 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1904 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1908 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1910 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindStr */

/* 1914 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1920 */	NdrFcShort( 0x2f ),	/* 47 */
/* 1922 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1924 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1926 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1928 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 1930 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1932 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1934 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1936 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 1938 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1940 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 1944 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1946 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 1950 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1952 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 1956 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1958 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter string */

/* 1962 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1964 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1966 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter color_format */

/* 1968 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1970 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1972 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter sim */

/* 1974 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1976 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1978 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter intX */

/* 1980 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1982 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1984 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter intY */

/* 1986 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1988 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1990 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter nret */

/* 1992 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1994 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2000 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindStrFast */

/* 2004 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2010 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2012 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2014 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2016 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2018 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 2020 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2022 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2024 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2026 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 2028 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2030 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 2034 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2036 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 2040 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2042 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 2046 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2048 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter string */

/* 2052 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2054 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2056 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter color_format */

/* 2058 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2060 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2062 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter sim */

/* 2064 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2066 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2068 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter intX */

/* 2070 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2072 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2074 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter intY */

/* 2076 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2078 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2080 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter nret */

/* 2082 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2084 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2088 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2090 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNowDict */

/* 2094 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2100 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2102 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2106 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2108 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2110 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2116 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 2118 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2120 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2124 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2126 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBasePath */

/* 2130 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2136 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2138 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2144 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2146 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2148 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2152 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retpath */

/* 2154 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2156 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2158 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 2160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2162 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsDisplayDead */

/* 2166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2172 */	NdrFcShort( 0x33 ),	/* 51 */
/* 2174 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2176 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2178 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2180 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 2182 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 2190 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2192 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 2196 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2198 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 2202 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2204 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 2208 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2210 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter t */

/* 2214 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2216 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bret */

/* 2220 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2222 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2228 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindPicEx */

/* 2232 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2238 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2240 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2242 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2246 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 2248 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2250 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2252 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2254 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 2256 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2258 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 2262 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2264 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 2268 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2270 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 2274 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2276 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pic_name */

/* 2280 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2282 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2284 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter delta_color */

/* 2286 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2288 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2290 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter sim */

/* 2292 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2294 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2296 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dir */

/* 2298 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2300 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 2304 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2306 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2308 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 2310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2312 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindStrEx */

/* 2316 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2322 */	NdrFcShort( 0x35 ),	/* 53 */
/* 2324 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2326 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2330 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 2332 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2334 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2336 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 2340 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2342 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 2346 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2348 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 2352 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2354 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 2358 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2360 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter string */

/* 2364 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2366 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2368 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter color_format */

/* 2370 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2372 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2374 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter sim */

/* 2376 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2378 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2380 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 2382 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2384 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2386 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 2388 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2390 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindStrFastEx */

/* 2394 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2400 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2402 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2404 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2408 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 2410 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2412 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2414 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2416 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 2418 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2420 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 2424 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2426 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 2430 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2432 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 2436 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2438 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter string */

/* 2442 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2444 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2446 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter color_format */

/* 2448 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2450 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2452 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter sim */

/* 2454 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2456 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2458 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 2460 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2462 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2464 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 2466 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2468 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CaptureGif */

/* 2472 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2478 */	NdrFcShort( 0x37 ),	/* 55 */
/* 2480 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2482 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2484 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2486 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 2488 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2492 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2494 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 2496 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2498 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 2502 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2504 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 2508 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2510 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 2514 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2516 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter file */

/* 2520 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2522 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2524 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter delay */

/* 2526 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2528 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter time */

/* 2532 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2534 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 2538 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2540 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2546 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DownCpu */

/* 2550 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2556 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2558 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2562 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2564 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2566 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2572 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rate */

/* 2574 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2576 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 2580 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2582 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2588 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetKeypadDelay */

/* 2592 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2598 */	NdrFcShort( 0x39 ),	/* 57 */
/* 2600 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2604 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2606 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2608 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2612 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2614 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 2616 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2618 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2620 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter delay */

/* 2622 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2624 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 2628 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2630 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2636 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetMouseDelay */

/* 2640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2646 */	NdrFcShort( 0x3a ),	/* 58 */
/* 2648 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2652 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2654 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2656 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2660 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 2664 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2666 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2668 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter delay */

/* 2670 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2672 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 2676 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2678 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2684 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CmpColor */

/* 2688 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2694 */	NdrFcShort( 0x3b ),	/* 59 */
/* 2696 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2698 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2700 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2702 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2704 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2708 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2710 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 2712 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2714 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 2718 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2720 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter color */

/* 2724 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2726 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2728 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter sim */

/* 2730 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2732 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2734 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter nret */

/* 2736 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2738 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2744 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendStringIme */

/* 2748 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2754 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2756 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2760 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2762 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2764 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2768 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter str */

/* 2772 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2774 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2776 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 2778 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2780 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2786 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindColorEx */

/* 2790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2796 */	NdrFcShort( 0x3d ),	/* 61 */
/* 2798 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2800 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2804 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 2806 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2808 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2810 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2812 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 2814 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2816 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 2820 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2822 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 2826 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2828 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 2832 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2834 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter color */

/* 2838 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2840 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2842 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter sim */

/* 2844 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2846 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2848 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dir */

/* 2850 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2852 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 2856 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2858 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2860 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 2862 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2864 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumWindow */

/* 2868 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2874 */	NdrFcShort( 0x3e ),	/* 62 */
/* 2876 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2878 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2882 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2884 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2886 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2888 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2890 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter parent */

/* 2892 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2894 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter title */

/* 2898 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2900 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2902 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter class_name */

/* 2904 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2906 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2908 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter filter */

/* 2910 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2912 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstr */

/* 2916 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2918 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2920 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 2922 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2924 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumWindowByProcess */

/* 2928 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2930 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2934 */	NdrFcShort( 0x3f ),	/* 63 */
/* 2936 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2938 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2940 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2942 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2944 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2946 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2948 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2950 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter process_name */

/* 2952 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2954 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2956 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter title */

/* 2958 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2960 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2962 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter class_name */

/* 2964 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2966 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2968 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter filter */

/* 2970 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2972 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 2976 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2978 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2980 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 2982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2984 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumProcess */

/* 2988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2994 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2996 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3002 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3004 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3006 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3008 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3012 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3014 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3016 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter retstring */

/* 3018 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3020 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3022 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 3024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3026 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ClientToScreen */

/* 3030 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3036 */	NdrFcShort( 0x41 ),	/* 65 */
/* 3038 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3042 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3044 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3046 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3048 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3050 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3052 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ClientToScreen */

/* 3054 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3056 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x */

/* 3060 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 3062 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3064 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter y */

/* 3066 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 3068 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3070 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter bret */

/* 3072 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3074 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3078 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3080 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindWindow */

/* 3084 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3090 */	NdrFcShort( 0x42 ),	/* 66 */
/* 3092 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3096 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3098 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3100 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3104 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter class_name */

/* 3108 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3112 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter title */

/* 3114 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3116 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3118 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter rethwnd */

/* 3120 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3122 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3128 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindWindowByProcess */

/* 3132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3138 */	NdrFcShort( 0x43 ),	/* 67 */
/* 3140 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3144 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3146 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3148 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3152 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter process_name */

/* 3156 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3160 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter class_name */

/* 3162 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3164 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3166 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter title */

/* 3168 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3170 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3172 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter rethwnd */

/* 3174 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3176 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3182 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindWindowByProcessId */

/* 3186 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3192 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3194 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3198 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3200 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3202 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3206 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter process_id */

/* 3210 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3212 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter class_name */

/* 3216 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3218 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3220 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter title */

/* 3222 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3224 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3226 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter rethwnd */

/* 3228 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3230 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3236 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindWindowEx */

/* 3240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3246 */	NdrFcShort( 0x45 ),	/* 69 */
/* 3248 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3250 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3252 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3254 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3256 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3260 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter parent */

/* 3264 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3266 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter class_name */

/* 3270 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3272 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3274 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter title */

/* 3276 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3278 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3280 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter rethwnd */

/* 3282 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3284 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3290 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetClientRect */

/* 3294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3300 */	NdrFcShort( 0x46 ),	/* 70 */
/* 3302 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3306 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3308 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 3310 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 3312 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 3318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x1 */

/* 3324 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3326 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3328 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter y1 */

/* 3330 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3332 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3334 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter x2 */

/* 3336 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3338 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3340 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter y2 */

/* 3342 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3344 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3346 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter nret */

/* 3348 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3350 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3356 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetClientSize */

/* 3360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3366 */	NdrFcShort( 0x47 ),	/* 71 */
/* 3368 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3372 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3374 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 3376 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 3378 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 3384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3386 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 3390 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3392 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3394 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter height */

/* 3396 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3398 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3400 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter nret */

/* 3402 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3404 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3410 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetForegroundFocus */

/* 3414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3420 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3422 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3426 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3428 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3430 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rethwnd */

/* 3438 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3440 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3446 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetForegroundWindow */

/* 3450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3456 */	NdrFcShort( 0x49 ),	/* 73 */
/* 3458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3462 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3464 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3466 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rethwnd */

/* 3474 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3476 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3482 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMousePointWindow */

/* 3486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3492 */	NdrFcShort( 0x4a ),	/* 74 */
/* 3494 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3498 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3500 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3502 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rethwnd */

/* 3510 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPointWindow */

/* 3522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3528 */	NdrFcShort( 0x4b ),	/* 75 */
/* 3530 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3532 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3534 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3536 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3538 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 3546 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3548 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 3552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3554 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rethwnd */

/* 3558 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3560 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3566 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetProcessInfo */

/* 3570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3576 */	NdrFcShort( 0x4c ),	/* 76 */
/* 3578 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3584 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3586 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 3588 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pid */

/* 3594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 3600 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3604 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 3606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSpecialWindow */

/* 3612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3618 */	NdrFcShort( 0x4d ),	/* 77 */
/* 3620 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3624 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3626 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3628 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flag */

/* 3636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rethwnd */

/* 3642 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3650 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWindow */

/* 3654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3660 */	NdrFcShort( 0x4e ),	/* 78 */
/* 3662 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3664 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3666 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3668 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3670 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 3678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter flag */

/* 3684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 3690 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3698 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWindowClass */

/* 3702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3708 */	NdrFcShort( 0x4f ),	/* 79 */
/* 3710 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3716 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3718 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 3720 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 3726 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3728 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 3732 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3734 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3736 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 3738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3740 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWindowProcessId */

/* 3744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3750 */	NdrFcShort( 0x50 ),	/* 80 */
/* 3752 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3754 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3756 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3758 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3760 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 3768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nretpid */

/* 3774 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3782 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWindowProcessPath */

/* 3786 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3792 */	NdrFcShort( 0x51 ),	/* 81 */
/* 3794 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3800 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3802 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 3804 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 3810 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3812 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 3816 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3818 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3820 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 3822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3824 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWindowRect */

/* 3828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3834 */	NdrFcShort( 0x52 ),	/* 82 */
/* 3836 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3840 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3842 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 3844 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 3846 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 3852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3854 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x1 */

/* 3858 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3860 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3862 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter y1 */

/* 3864 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3866 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3868 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter x2 */

/* 3870 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3872 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3874 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter y2 */

/* 3876 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3878 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3880 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter nret */

/* 3882 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3884 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3888 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3890 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWindowState */

/* 3894 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3896 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3900 */	NdrFcShort( 0x53 ),	/* 83 */
/* 3902 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3904 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3906 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3908 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3910 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 3918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3920 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter flag */

/* 3924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3926 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rethwnd */

/* 3930 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3932 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3938 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWindowTitle */

/* 3942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3948 */	NdrFcShort( 0x54 ),	/* 84 */
/* 3950 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3956 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3958 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 3960 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 3966 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3968 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rettitle */

/* 3972 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3974 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3976 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 3978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MoveWindow */

/* 3984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3990 */	NdrFcShort( 0x55 ),	/* 85 */
/* 3992 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3994 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3996 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3998 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 4000 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 4008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x */

/* 4014 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 4020 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4022 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 4026 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4028 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4034 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ScreenToClient */

/* 4038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4044 */	NdrFcShort( 0x56 ),	/* 86 */
/* 4046 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4048 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4050 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4052 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 4054 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4056 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 4062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x */

/* 4068 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 4070 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4072 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter y */

/* 4074 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 4076 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4078 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter nret */

/* 4080 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4082 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4088 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendPaste */

/* 4092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4098 */	NdrFcShort( 0x57 ),	/* 87 */
/* 4100 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4104 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4106 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4108 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 4116 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4118 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 4122 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4124 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4130 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetClientSize */

/* 4134 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4140 */	NdrFcShort( 0x58 ),	/* 88 */
/* 4142 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4144 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4146 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4148 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 4150 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4156 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 4158 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4160 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 4164 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4166 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hight */

/* 4170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4172 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 4176 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4178 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4184 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetWindowState */

/* 4188 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4194 */	NdrFcShort( 0x59 ),	/* 89 */
/* 4196 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4198 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4200 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4202 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 4204 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 4212 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4214 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter flag */

/* 4218 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 4224 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4226 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4232 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetWindowSize */

/* 4236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4242 */	NdrFcShort( 0x5a ),	/* 90 */
/* 4244 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4246 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4248 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4250 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 4252 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 4260 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4262 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 4266 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4268 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter height */

/* 4272 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4274 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 4278 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4280 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4286 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetWindowText */

/* 4290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4296 */	NdrFcShort( 0x5b ),	/* 91 */
/* 4298 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4302 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4304 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4306 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4310 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 4314 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4316 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter title */

/* 4320 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4322 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4324 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 4326 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4328 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4334 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetWindowTransparent */

/* 4338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4344 */	NdrFcShort( 0x5c ),	/* 92 */
/* 4346 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4348 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4350 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4352 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 4354 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4360 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 4362 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4364 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter trans */

/* 4368 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4370 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 4374 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4376 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4382 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetClipboard */

/* 4386 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4392 */	NdrFcShort( 0x5d ),	/* 93 */
/* 4394 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4398 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4400 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4402 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4406 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 4410 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4412 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4414 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 4416 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4418 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetClipboard */

/* 4428 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4434 */	NdrFcShort( 0x5e ),	/* 94 */
/* 4436 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4442 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4444 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4446 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retstring */

/* 4452 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4454 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4456 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 4458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4460 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoubleToData */

/* 4464 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4470 */	NdrFcShort( 0x5f ),	/* 95 */
/* 4472 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4474 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4478 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4480 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4482 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 4488 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4490 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4492 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 4494 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4496 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4498 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 4500 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4502 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FloatToData */

/* 4506 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4508 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4512 */	NdrFcShort( 0x60 ),	/* 96 */
/* 4514 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4516 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4518 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4520 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4522 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4524 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4528 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 4530 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4532 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4534 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 4536 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4538 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4540 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 4542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4544 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IntToData */

/* 4548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4554 */	NdrFcShort( 0x61 ),	/* 97 */
/* 4556 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4558 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4562 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 4564 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4566 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 4572 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4574 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter type */

/* 4578 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4580 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 4584 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4586 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4588 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 4590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4592 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringToData */

/* 4596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4602 */	NdrFcShort( 0x62 ),	/* 98 */
/* 4604 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4610 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4612 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4614 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4616 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 4620 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4624 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter type */

/* 4626 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4628 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 4632 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4634 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4636 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 4638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4640 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindData */

/* 4644 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4650 */	NdrFcShort( 0x63 ),	/* 99 */
/* 4652 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4656 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4658 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4660 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4662 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4664 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4666 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 4668 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4670 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr_range */

/* 4674 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4676 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4678 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter data */

/* 4680 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4682 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4684 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter retstring */

/* 4686 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4688 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4690 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 4692 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4694 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindDouble */

/* 4698 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4704 */	NdrFcShort( 0x64 ),	/* 100 */
/* 4706 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4708 */	NdrFcShort( 0x28 ),	/* 40 */
/* 4710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4712 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4714 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4716 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4718 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 4722 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4724 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr_range */

/* 4728 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4730 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4732 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter double_value_min */

/* 4734 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4736 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4738 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter double_value_max */

/* 4740 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4742 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4744 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 4746 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4748 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4750 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 4752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4754 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindFloat */

/* 4758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4764 */	NdrFcShort( 0x65 ),	/* 101 */
/* 4766 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4768 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4772 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4774 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4776 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4778 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 4782 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4784 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr_range */

/* 4788 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4790 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4792 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter float_value_min */

/* 4794 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4796 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4798 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter float_value_max */

/* 4800 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4802 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4804 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 4806 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4808 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4810 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 4812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4814 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindInt */

/* 4818 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4824 */	NdrFcShort( 0x66 ),	/* 102 */
/* 4826 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4828 */	NdrFcShort( 0x20 ),	/* 32 */
/* 4830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4832 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 4834 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4836 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4838 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 4842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4844 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr_range */

/* 4848 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4850 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4852 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter int_value_min */

/* 4854 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4856 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter int_value_max */

/* 4860 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4862 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter type */

/* 4866 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4868 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 4872 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4874 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4876 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 4878 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4880 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindString */

/* 4884 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4890 */	NdrFcShort( 0x67 ),	/* 103 */
/* 4892 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4894 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4898 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4900 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4902 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4904 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4906 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 4908 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4910 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr_range */

/* 4914 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4916 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4918 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter string_value */

/* 4920 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4922 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4924 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter type */

/* 4926 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4928 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 4932 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4934 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4936 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 4938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4940 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadData */

/* 4944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4950 */	NdrFcShort( 0x68 ),	/* 104 */
/* 4952 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4954 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4958 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4960 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4964 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 4968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4970 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr */

/* 4974 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4976 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4978 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter len */

/* 4980 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4982 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 4986 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4988 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4990 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 4992 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4994 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OcrEx */

/* 4998 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5004 */	NdrFcShort( 0x69 ),	/* 105 */
/* 5006 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 5008 */	NdrFcShort( 0x30 ),	/* 48 */
/* 5010 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5012 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 5014 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5016 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5018 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5020 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 5022 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5024 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 5028 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5030 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 5034 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5036 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 5040 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5042 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter color_format */

/* 5046 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5048 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5050 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter sim */

/* 5052 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5054 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5056 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 5058 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5060 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5062 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 5064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5066 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadDouble */

/* 5070 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5076 */	NdrFcShort( 0x6a ),	/* 106 */
/* 5078 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5080 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5082 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5084 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5086 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5090 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5092 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 5094 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5096 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr */

/* 5100 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5102 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5104 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter retdouble */

/* 5106 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5108 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5110 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 5112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5114 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadFloat */

/* 5118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5124 */	NdrFcShort( 0x6b ),	/* 107 */
/* 5126 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5128 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5130 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5132 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5134 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5138 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5140 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 5142 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5144 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr */

/* 5148 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5150 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5152 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter retfloat */

/* 5154 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5156 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5158 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 5160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5162 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadInt */

/* 5166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5172 */	NdrFcShort( 0x6c ),	/* 108 */
/* 5174 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5176 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5178 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5180 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5182 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5186 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 5190 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5192 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr */

/* 5196 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5198 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5200 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter type */

/* 5202 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5204 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retint */

/* 5208 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5210 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5216 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadString */

/* 5220 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5226 */	NdrFcShort( 0x6d ),	/* 109 */
/* 5228 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5230 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5234 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5236 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5238 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5240 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5242 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 5244 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5246 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr */

/* 5250 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5252 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5254 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter type */

/* 5256 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5258 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter len */

/* 5262 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5264 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 5268 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5270 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5272 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 5274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5276 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TerminateProcess */

/* 5280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5286 */	NdrFcShort( 0x6e ),	/* 110 */
/* 5288 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5290 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5292 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5294 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5296 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pid */

/* 5304 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5306 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bret */

/* 5310 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5312 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5316 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5318 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure VirtualAllocEx */

/* 5322 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5328 */	NdrFcShort( 0x6f ),	/* 111 */
/* 5330 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5332 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5334 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5336 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 5338 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5344 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 5346 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5348 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr */

/* 5352 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5354 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter size */

/* 5358 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5360 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter type */

/* 5364 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5366 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bret */

/* 5370 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5372 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5378 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure VirtualFreeEx */

/* 5382 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5388 */	NdrFcShort( 0x70 ),	/* 112 */
/* 5390 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5392 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5394 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5396 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 5398 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 5406 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5408 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr */

/* 5412 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5414 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bret */

/* 5418 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5420 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5424 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5426 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteDouble */

/* 5430 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5432 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5436 */	NdrFcShort( 0x71 ),	/* 113 */
/* 5438 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5440 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5442 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5444 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5446 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5450 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5452 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 5454 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5456 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr */

/* 5460 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5462 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5464 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter v */

/* 5466 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5468 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5470 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter bret */

/* 5472 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5474 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5480 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteFloat */

/* 5484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5490 */	NdrFcShort( 0x72 ),	/* 114 */
/* 5492 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5494 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5496 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5498 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5500 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5504 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 5508 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5510 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr */

/* 5514 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5516 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5518 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter v */

/* 5520 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5522 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5524 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter bret */

/* 5526 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5528 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5534 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteInt */

/* 5538 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5544 */	NdrFcShort( 0x73 ),	/* 115 */
/* 5546 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5548 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5550 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5552 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5554 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5558 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5560 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 5562 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5564 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr */

/* 5568 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5570 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5572 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter type */

/* 5574 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5576 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter v */

/* 5580 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5582 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bret */

/* 5586 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5588 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5592 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5594 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteString */

/* 5598 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5604 */	NdrFcShort( 0x74 ),	/* 116 */
/* 5606 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5608 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5610 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5612 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5614 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5618 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5620 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 5622 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5624 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr */

/* 5628 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5630 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5632 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter type */

/* 5634 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5636 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter v */

/* 5640 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5642 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5644 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bret */

/* 5646 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5648 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5652 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5654 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteData */

/* 5658 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5664 */	NdrFcShort( 0x75 ),	/* 117 */
/* 5666 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5668 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5670 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5672 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5674 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5678 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5680 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 5682 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5684 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr */

/* 5688 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5690 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5692 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter data */

/* 5694 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5696 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5698 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 5700 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5702 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5708 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsBind */

/* 5712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5718 */	NdrFcShort( 0x76 ),	/* 118 */
/* 5720 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5724 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5726 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5728 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 5736 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5738 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 5742 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5744 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5748 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5750 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindFloatEx */

/* 5754 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5756 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5760 */	NdrFcShort( 0x77 ),	/* 119 */
/* 5762 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 5764 */	NdrFcShort( 0x30 ),	/* 48 */
/* 5766 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5768 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 5770 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5772 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5774 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5776 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 5778 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5780 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr_range */

/* 5784 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5786 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5788 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter float_value_min */

/* 5790 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5792 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5794 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter float_value_max */

/* 5796 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5798 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5800 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter step */

/* 5802 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5804 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter multi_thread */

/* 5808 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5810 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mode */

/* 5814 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5816 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 5820 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5822 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5824 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 5826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5828 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindDoubleEx */

/* 5832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5838 */	NdrFcShort( 0x78 ),	/* 120 */
/* 5840 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 5842 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5846 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 5848 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5850 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5852 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 5856 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5858 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr_range */

/* 5862 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5864 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5866 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter double_value_min */

/* 5868 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5870 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5872 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter double_value_max */

/* 5874 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5876 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5878 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter step */

/* 5880 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5882 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter multi_thread */

/* 5886 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5888 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mode */

/* 5892 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5894 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 5898 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5900 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 5902 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 5904 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5906 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 5908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindIntEx */

/* 5910 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5916 */	NdrFcShort( 0x79 ),	/* 121 */
/* 5918 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 5920 */	NdrFcShort( 0x38 ),	/* 56 */
/* 5922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5924 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 5926 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5928 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5930 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 5934 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5936 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr_range */

/* 5940 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5942 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5944 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter int_value_min */

/* 5946 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5948 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter int_value_max */

/* 5952 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5954 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter type */

/* 5958 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5960 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter step */

/* 5964 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5966 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter multi_thread */

/* 5970 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5972 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mode */

/* 5976 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5978 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 5982 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5984 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5986 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 5988 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5990 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 5992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindDataEx */

/* 5994 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5996 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6000 */	NdrFcShort( 0x7a ),	/* 122 */
/* 6002 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 6004 */	NdrFcShort( 0x20 ),	/* 32 */
/* 6006 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6008 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 6010 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 6012 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6014 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6016 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 6018 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6020 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr_range */

/* 6024 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6026 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6028 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter data */

/* 6030 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6032 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6034 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter step */

/* 6036 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6038 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter multi_thread */

/* 6042 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6044 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mode */

/* 6048 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6050 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 6054 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6056 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6058 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 6060 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6062 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindStringEx */

/* 6066 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6068 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6072 */	NdrFcShort( 0x7b ),	/* 123 */
/* 6074 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 6076 */	NdrFcShort( 0x28 ),	/* 40 */
/* 6078 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6080 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 6082 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 6084 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6086 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6088 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 6090 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6092 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addr_range */

/* 6096 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6098 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6100 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter string_value */

/* 6102 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6104 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6106 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter type */

/* 6108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6110 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter step */

/* 6114 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6116 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter multi_thread */

/* 6120 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6122 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mode */

/* 6126 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6128 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 6132 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6134 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6136 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 6138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6140 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 6142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetModuleBaseAddr */

/* 6144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6150 */	NdrFcShort( 0x7c ),	/* 124 */
/* 6152 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6156 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6158 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6160 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 6162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6164 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 6168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter modulename */

/* 6174 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6178 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 6180 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6182 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6188 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCommandLine */

/* 6192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6198 */	NdrFcShort( 0x7d ),	/* 125 */
/* 6200 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6206 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6208 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 6210 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 6216 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 6222 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6226 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 6228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AsmAdd */

/* 6234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6240 */	NdrFcShort( 0x7e ),	/* 126 */
/* 6242 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6246 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6248 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6250 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 6252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6254 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter asm_ins */

/* 6258 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6260 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6262 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 6264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6266 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6272 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AsmCall */

/* 6276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6282 */	NdrFcShort( 0x7f ),	/* 127 */
/* 6284 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6286 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6288 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6290 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 6292 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 6300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mode */

/* 6306 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 6312 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6314 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6320 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AsmClear */

/* 6324 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6330 */	NdrFcShort( 0x80 ),	/* 128 */
/* 6332 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6336 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6338 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6340 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 6348 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6350 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6356 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AsmCode */

/* 6360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6366 */	NdrFcShort( 0x81 ),	/* 129 */
/* 6368 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6374 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6376 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 6378 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter base_addr */

/* 6384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6386 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 6390 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6392 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6394 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 6396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6398 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Assemble */

/* 6402 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6408 */	NdrFcShort( 0x82 ),	/* 130 */
/* 6410 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6412 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6416 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6418 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 6420 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6422 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter asm_code */

/* 6426 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6428 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6430 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter base_addr */

/* 6432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6434 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter is_upper */

/* 6438 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6440 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 6444 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6446 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6448 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 6450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6452 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MatchPicName */

/* 6456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6462 */	NdrFcShort( 0x83 ),	/* 131 */
/* 6464 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6470 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6472 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 6474 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6476 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pic_name */

/* 6480 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6484 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter retstring */

/* 6486 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6488 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6490 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 6492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6494 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetShowErrorMsg */

/* 6498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6504 */	NdrFcShort( 0x84 ),	/* 132 */
/* 6506 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6510 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6512 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6514 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter show */

/* 6522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 6528 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6530 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6536 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reg */

/* 6540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6546 */	NdrFcShort( 0x85 ),	/* 133 */
/* 6548 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6550 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6552 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6554 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6556 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 6558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6560 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reg_code */

/* 6564 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6566 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6568 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter type */

/* 6570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6572 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 6576 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6578 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6584 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMachineCode */

/* 6588 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6594 */	NdrFcShort( 0x86 ),	/* 134 */
/* 6596 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6600 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6602 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6604 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 6606 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6610 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retstring */

/* 6612 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6614 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6616 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 6618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6620 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TSGuardProtectToHide */

/* 6624 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6630 */	NdrFcShort( 0x87 ),	/* 135 */
/* 6632 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6634 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6636 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6638 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6640 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enble */

/* 6648 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6650 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 6654 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6656 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6662 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TSGuardProtectToHide2 */

/* 6666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6672 */	NdrFcShort( 0x88 ),	/* 136 */
/* 6674 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6678 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6680 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6682 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6688 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enable */

/* 6690 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6692 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 6696 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6698 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6704 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TSGuardProtectToNP */

/* 6708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6714 */	NdrFcShort( 0x89 ),	/* 137 */
/* 6716 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6720 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6722 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6724 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enable */

/* 6732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6734 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 6738 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6740 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6746 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Delay */

/* 6750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6756 */	NdrFcShort( 0x8a ),	/* 138 */
/* 6758 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6762 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6764 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6766 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mis */

/* 6774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6776 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 6780 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6782 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6788 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindStrS */

/* 6792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6798 */	NdrFcShort( 0x8b ),	/* 139 */
/* 6800 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 6802 */	NdrFcShort( 0x30 ),	/* 48 */
/* 6804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6806 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 6808 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 6810 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6812 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 6816 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6818 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 6822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6824 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 6828 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6830 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 6834 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6836 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter string */

/* 6840 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6842 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6844 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter color_format */

/* 6846 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6848 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6850 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter sim */

/* 6852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6854 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6856 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter intX */

/* 6858 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 6860 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 6862 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter intY */

/* 6864 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 6866 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 6868 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter retstring */

/* 6870 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6872 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 6874 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 6876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6878 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 6880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindStrFastS */

/* 6882 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6888 */	NdrFcShort( 0x8c ),	/* 140 */
/* 6890 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 6892 */	NdrFcShort( 0x30 ),	/* 48 */
/* 6894 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6896 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 6898 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 6900 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6902 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6904 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 6906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6908 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 6912 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6914 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 6918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6920 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 6924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6926 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter string */

/* 6930 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6932 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6934 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter color_format */

/* 6936 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6938 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6940 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter sim */

/* 6942 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6944 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6946 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter intX */

/* 6948 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 6950 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 6952 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter intY */

/* 6954 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 6956 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 6958 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter retstring */

/* 6960 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6962 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 6964 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 6966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6968 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 6970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindStrExS */

/* 6972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6978 */	NdrFcShort( 0x8d ),	/* 141 */
/* 6980 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 6982 */	NdrFcShort( 0x30 ),	/* 48 */
/* 6984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6986 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 6988 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 6990 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6992 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 6996 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6998 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 7002 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7004 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 7008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7010 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 7014 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7016 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter string */

/* 7020 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7022 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7024 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter color_format */

/* 7026 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7028 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7030 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter sim */

/* 7032 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7034 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7036 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 7038 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7040 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 7042 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 7044 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7046 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 7048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindStrFastExS */

/* 7050 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7056 */	NdrFcShort( 0x8e ),	/* 142 */
/* 7058 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 7060 */	NdrFcShort( 0x30 ),	/* 48 */
/* 7062 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7064 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 7066 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 7068 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7070 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7072 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 7074 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7076 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 7080 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7082 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 7086 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7088 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 7092 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7094 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter string */

/* 7098 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7100 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7102 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter color_format */

/* 7104 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7106 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7108 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter sim */

/* 7110 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7112 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7114 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 7116 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7118 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 7120 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 7122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7124 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 7126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindPicS */

/* 7128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7134 */	NdrFcShort( 0x8f ),	/* 143 */
/* 7136 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 7138 */	NdrFcShort( 0x38 ),	/* 56 */
/* 7140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7142 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xc,		/* 12 */
/* 7144 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 7146 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7148 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 7152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 7158 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7160 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 7164 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7166 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 7170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7172 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pic_name */

/* 7176 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7178 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7180 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter delta_color */

/* 7182 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7184 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7186 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter sim */

/* 7188 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7190 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7192 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dir */

/* 7194 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7196 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 7198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter intX */

/* 7200 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 7202 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 7204 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter intY */

/* 7206 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 7208 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 7210 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter retstring */

/* 7212 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7214 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 7216 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 7218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7220 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 7222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindPicExS */

/* 7224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7230 */	NdrFcShort( 0x90 ),	/* 144 */
/* 7232 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 7234 */	NdrFcShort( 0x38 ),	/* 56 */
/* 7236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7238 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 7240 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 7242 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7244 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 7248 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7250 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 7254 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7256 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 7260 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7262 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 7266 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7268 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pic_name */

/* 7272 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7274 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7276 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter delta_color */

/* 7278 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7280 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7282 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter sim */

/* 7284 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7286 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7288 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dir */

/* 7290 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7292 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 7294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 7296 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7298 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 7300 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 7302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7304 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 7306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDictPwd */

/* 7308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7314 */	NdrFcShort( 0x91 ),	/* 145 */
/* 7316 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7320 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7322 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7324 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 7326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7328 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7330 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwd */

/* 7332 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7334 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7336 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 7338 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7340 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7346 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPicPwd */

/* 7350 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7356 */	NdrFcShort( 0x92 ),	/* 146 */
/* 7358 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7362 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7364 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7366 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 7368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7370 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwd */

/* 7374 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7376 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7378 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 7380 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7382 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7388 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LeftDoubleClick */

/* 7392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7398 */	NdrFcShort( 0x93 ),	/* 147 */
/* 7400 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7404 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7406 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7408 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 7416 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7418 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7424 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FreeProcessMemory */

/* 7428 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7434 */	NdrFcShort( 0x94 ),	/* 148 */
/* 7436 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7440 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7442 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7444 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 7452 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7454 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 7458 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7460 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7464 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7466 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TSDXGraphicProtect */

/* 7470 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7476 */	NdrFcShort( 0x95 ),	/* 149 */
/* 7478 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7480 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7482 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7484 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7486 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7492 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enable */

/* 7494 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7496 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 7500 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7502 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7508 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TSDXKmProtect */

/* 7512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7518 */	NdrFcShort( 0x96 ),	/* 150 */
/* 7520 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7522 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7524 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7526 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7528 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 7530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7532 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enable */

/* 7536 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7538 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter type */

/* 7542 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7544 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7546 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nret */

/* 7548 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7550 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7556 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CheckFontSmooth */

/* 7560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7566 */	NdrFcShort( 0x97 ),	/* 151 */
/* 7568 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7572 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7574 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7576 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 7584 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7586 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7592 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DisableFontSmooth */

/* 7596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7602 */	NdrFcShort( 0x98 ),	/* 152 */
/* 7604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7608 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7610 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7612 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 7620 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7628 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetScreenData */

/* 7632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7638 */	NdrFcShort( 0x99 ),	/* 153 */
/* 7640 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7642 */	NdrFcShort( 0x20 ),	/* 32 */
/* 7644 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7646 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 7648 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 7656 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7658 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 7662 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7664 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 7668 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7670 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 7674 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7676 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter RetAddr */

/* 7680 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7682 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7688 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnableRealMouse */

/* 7692 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7698 */	NdrFcShort( 0x9a ),	/* 154 */
/* 7700 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7702 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7704 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7706 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 7708 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enable */

/* 7716 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7718 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mousedelay */

/* 7722 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7724 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mousestep */

/* 7728 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7730 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 7734 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7736 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7742 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnableRealKeypad */

/* 7746 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7752 */	NdrFcShort( 0x9b ),	/* 155 */
/* 7754 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7758 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7760 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7762 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enable */

/* 7770 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7772 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 7776 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7778 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7784 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MoveToEx */

/* 7788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7794 */	NdrFcShort( 0x9c ),	/* 156 */
/* 7796 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7798 */	NdrFcShort( 0x20 ),	/* 32 */
/* 7800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7802 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 7804 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 7806 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 7812 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7814 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 7818 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7820 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter w */

/* 7824 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7826 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter h */

/* 7830 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7832 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 7836 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7838 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7840 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 7842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7844 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CheckUAC */

/* 7848 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7854 */	NdrFcShort( 0x9d ),	/* 157 */
/* 7856 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7860 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7862 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7864 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7870 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nret */

/* 7872 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7874 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7878 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7880 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetUAC */

/* 7884 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7890 */	NdrFcShort( 0x9e ),	/* 158 */
/* 7892 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7894 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7896 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7898 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7900 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7906 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enable */

/* 7908 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7910 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 7914 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7916 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7920 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7922 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WaitKey */

/* 7926 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7932 */	NdrFcShort( 0x9f ),	/* 159 */
/* 7934 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7936 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7938 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7940 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 7942 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7948 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vk_code */

/* 7950 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7952 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter time_out */

/* 7956 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7958 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 7962 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7964 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7968 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7970 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindMultiColor */

/* 7974 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7980 */	NdrFcShort( 0xa0 ),	/* 160 */
/* 7982 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 7984 */	NdrFcShort( 0x38 ),	/* 56 */
/* 7986 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7988 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xc,		/* 12 */
/* 7990 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 7992 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7994 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 7998 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8000 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 8004 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8006 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 8010 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8012 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 8016 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8018 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter first_color */

/* 8022 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8024 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8026 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter offset_color */

/* 8028 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8030 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8032 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter sim */

/* 8034 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8036 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8038 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dir */

/* 8040 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8042 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 8044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter intX */

/* 8046 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 8048 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 8050 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter intY */

/* 8052 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 8054 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 8056 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Parameter nret */

/* 8058 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8060 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 8062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8066 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 8068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindMultiColorEx */

/* 8070 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8076 */	NdrFcShort( 0xa1 ),	/* 161 */
/* 8078 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 8080 */	NdrFcShort( 0x38 ),	/* 56 */
/* 8082 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8084 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 8086 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 8088 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8090 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8092 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x1 */

/* 8094 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8096 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 8100 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8102 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 8106 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8108 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 8112 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8114 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter first_color */

/* 8118 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8120 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8122 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter offset_color */

/* 8124 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8126 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8128 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter sim */

/* 8130 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8132 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8134 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter dir */

/* 8136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8138 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 8140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstring */

/* 8142 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8144 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 8146 */	NdrFcShort( 0x4ba ),	/* Type Offset=1210 */

	/* Return value */

/* 8148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8150 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 8152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSimMode */

/* 8154 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8160 */	NdrFcShort( 0xa2 ),	/* 162 */
/* 8162 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8166 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8168 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 8170 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mode */

/* 8178 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8180 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nret */

/* 8184 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8186 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const TSPlug_MIDL_TYPE_FORMAT_STRING TSPlug__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0x18 ),	/* Offset= 24 (28) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x0 , 
			0x0,		/* 0 */
/* 18 */	NdrFcLong( 0x0 ),	/* 0 */
/* 22 */	NdrFcLong( 0x0 ),	/* 0 */
/* 26 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 28 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 30 */	NdrFcShort( 0x8 ),	/* 8 */
/* 32 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (6) */
/* 34 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 36 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 38 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 40 */	NdrFcShort( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x4 ),	/* 4 */
/* 44 */	NdrFcShort( 0x0 ),	/* 0 */
/* 46 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (2) */
/* 48 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 50 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 52 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 54 */	NdrFcShort( 0x476 ),	/* Offset= 1142 (1196) */
/* 56 */	
			0x13, 0x0,	/* FC_OP */
/* 58 */	NdrFcShort( 0x45e ),	/* Offset= 1118 (1176) */
/* 60 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 62 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 64 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 66 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 68 */	0x0 , 
			0x0,		/* 0 */
/* 70 */	NdrFcLong( 0x0 ),	/* 0 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x2 ),	/* Offset= 2 (80) */
/* 80 */	NdrFcShort( 0x10 ),	/* 16 */
/* 82 */	NdrFcShort( 0x2f ),	/* 47 */
/* 84 */	NdrFcLong( 0x14 ),	/* 20 */
/* 88 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 90 */	NdrFcLong( 0x3 ),	/* 3 */
/* 94 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 96 */	NdrFcLong( 0x11 ),	/* 17 */
/* 100 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 102 */	NdrFcLong( 0x2 ),	/* 2 */
/* 106 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 108 */	NdrFcLong( 0x4 ),	/* 4 */
/* 112 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 114 */	NdrFcLong( 0x5 ),	/* 5 */
/* 118 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 120 */	NdrFcLong( 0xb ),	/* 11 */
/* 124 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 126 */	NdrFcLong( 0xa ),	/* 10 */
/* 130 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 132 */	NdrFcLong( 0x6 ),	/* 6 */
/* 136 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (368) */
/* 138 */	NdrFcLong( 0x7 ),	/* 7 */
/* 142 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 144 */	NdrFcLong( 0x8 ),	/* 8 */
/* 148 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (374) */
/* 150 */	NdrFcLong( 0xd ),	/* 13 */
/* 154 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (378) */
/* 156 */	NdrFcLong( 0x9 ),	/* 9 */
/* 160 */	NdrFcShort( 0xec ),	/* Offset= 236 (396) */
/* 162 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 166 */	NdrFcShort( 0xf8 ),	/* Offset= 248 (414) */
/* 168 */	NdrFcLong( 0x24 ),	/* 36 */
/* 172 */	NdrFcShort( 0x3a2 ),	/* Offset= 930 (1102) */
/* 174 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 178 */	NdrFcShort( 0x39c ),	/* Offset= 924 (1102) */
/* 180 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 184 */	NdrFcShort( 0x39a ),	/* Offset= 922 (1106) */
/* 186 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 190 */	NdrFcShort( 0x398 ),	/* Offset= 920 (1110) */
/* 192 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 196 */	NdrFcShort( 0x396 ),	/* Offset= 918 (1114) */
/* 198 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 202 */	NdrFcShort( 0x394 ),	/* Offset= 916 (1118) */
/* 204 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 208 */	NdrFcShort( 0x392 ),	/* Offset= 914 (1122) */
/* 210 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 214 */	NdrFcShort( 0x390 ),	/* Offset= 912 (1126) */
/* 216 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 220 */	NdrFcShort( 0x37a ),	/* Offset= 890 (1110) */
/* 222 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 226 */	NdrFcShort( 0x378 ),	/* Offset= 888 (1114) */
/* 228 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 232 */	NdrFcShort( 0x382 ),	/* Offset= 898 (1130) */
/* 234 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 238 */	NdrFcShort( 0x378 ),	/* Offset= 888 (1126) */
/* 240 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 244 */	NdrFcShort( 0x37a ),	/* Offset= 890 (1134) */
/* 246 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 250 */	NdrFcShort( 0x378 ),	/* Offset= 888 (1138) */
/* 252 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 256 */	NdrFcShort( 0x376 ),	/* Offset= 886 (1142) */
/* 258 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 262 */	NdrFcShort( 0x374 ),	/* Offset= 884 (1146) */
/* 264 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 268 */	NdrFcShort( 0x372 ),	/* Offset= 882 (1150) */
/* 270 */	NdrFcLong( 0x10 ),	/* 16 */
/* 274 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 276 */	NdrFcLong( 0x12 ),	/* 18 */
/* 280 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 282 */	NdrFcLong( 0x13 ),	/* 19 */
/* 286 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 288 */	NdrFcLong( 0x15 ),	/* 21 */
/* 292 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 294 */	NdrFcLong( 0x16 ),	/* 22 */
/* 298 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 300 */	NdrFcLong( 0x17 ),	/* 23 */
/* 304 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 306 */	NdrFcLong( 0xe ),	/* 14 */
/* 310 */	NdrFcShort( 0x350 ),	/* Offset= 848 (1158) */
/* 312 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 316 */	NdrFcShort( 0x354 ),	/* Offset= 852 (1168) */
/* 318 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 322 */	NdrFcShort( 0x352 ),	/* Offset= 850 (1172) */
/* 324 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 328 */	NdrFcShort( 0x30e ),	/* Offset= 782 (1110) */
/* 330 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 334 */	NdrFcShort( 0x30c ),	/* Offset= 780 (1114) */
/* 336 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 340 */	NdrFcShort( 0x30a ),	/* Offset= 778 (1118) */
/* 342 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 346 */	NdrFcShort( 0x300 ),	/* Offset= 768 (1114) */
/* 348 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 352 */	NdrFcShort( 0x2fa ),	/* Offset= 762 (1114) */
/* 354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x0 ),	/* Offset= 0 (358) */
/* 360 */	NdrFcLong( 0x1 ),	/* 1 */
/* 364 */	NdrFcShort( 0x0 ),	/* Offset= 0 (364) */
/* 366 */	NdrFcShort( 0xffff ),	/* Offset= -1 (365) */
/* 368 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 372 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 374 */	
			0x13, 0x0,	/* FC_OP */
/* 376 */	NdrFcShort( 0xfea4 ),	/* Offset= -348 (28) */
/* 378 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 388 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 390 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 392 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 394 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 396 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 398 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 408 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 410 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 412 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 414 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 416 */	NdrFcShort( 0x2 ),	/* Offset= 2 (418) */
/* 418 */	
			0x13, 0x0,	/* FC_OP */
/* 420 */	NdrFcShort( 0x298 ),	/* Offset= 664 (1084) */
/* 422 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 424 */	NdrFcShort( 0x18 ),	/* 24 */
/* 426 */	NdrFcShort( 0xa ),	/* 10 */
/* 428 */	NdrFcLong( 0x8 ),	/* 8 */
/* 432 */	NdrFcShort( 0x64 ),	/* Offset= 100 (532) */
/* 434 */	NdrFcLong( 0xd ),	/* 13 */
/* 438 */	NdrFcShort( 0x9c ),	/* Offset= 156 (594) */
/* 440 */	NdrFcLong( 0x9 ),	/* 9 */
/* 444 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (652) */
/* 446 */	NdrFcLong( 0xc ),	/* 12 */
/* 450 */	NdrFcShort( 0x104 ),	/* Offset= 260 (710) */
/* 452 */	NdrFcLong( 0x24 ),	/* 36 */
/* 456 */	NdrFcShort( 0x174 ),	/* Offset= 372 (828) */
/* 458 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 462 */	NdrFcShort( 0x190 ),	/* Offset= 400 (862) */
/* 464 */	NdrFcLong( 0x10 ),	/* 16 */
/* 468 */	NdrFcShort( 0x1b4 ),	/* Offset= 436 (904) */
/* 470 */	NdrFcLong( 0x2 ),	/* 2 */
/* 474 */	NdrFcShort( 0x1d8 ),	/* Offset= 472 (946) */
/* 476 */	NdrFcLong( 0x3 ),	/* 3 */
/* 480 */	NdrFcShort( 0x1fc ),	/* Offset= 508 (988) */
/* 482 */	NdrFcLong( 0x14 ),	/* 20 */
/* 486 */	NdrFcShort( 0x220 ),	/* Offset= 544 (1030) */
/* 488 */	NdrFcShort( 0xffff ),	/* Offset= -1 (487) */
/* 490 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 492 */	NdrFcShort( 0x4 ),	/* 4 */
/* 494 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 500 */	0x0 , 
			0x0,		/* 0 */
/* 502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 510 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 512 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 514 */	NdrFcShort( 0x4 ),	/* 4 */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x1 ),	/* 1 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	0x13, 0x0,	/* FC_OP */
/* 526 */	NdrFcShort( 0xfe0e ),	/* Offset= -498 (28) */
/* 528 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 530 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 532 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 536 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 538 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 540 */	NdrFcShort( 0x4 ),	/* 4 */
/* 542 */	NdrFcShort( 0x4 ),	/* 4 */
/* 544 */	0x11, 0x0,	/* FC_RP */
/* 546 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (490) */
/* 548 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 550 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 552 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 556 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 562 */	0x0 , 
			0x0,		/* 0 */
/* 564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 568 */	NdrFcLong( 0x0 ),	/* 0 */
/* 572 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 576 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 578 */	0x0 , 
			0x0,		/* 0 */
/* 580 */	NdrFcLong( 0x0 ),	/* 0 */
/* 584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 588 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 590 */	NdrFcShort( 0xff2c ),	/* Offset= -212 (378) */
/* 592 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 594 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 596 */	NdrFcShort( 0x8 ),	/* 8 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x6 ),	/* Offset= 6 (606) */
/* 602 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 604 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 606 */	
			0x11, 0x0,	/* FC_RP */
/* 608 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (552) */
/* 610 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 620 */	0x0 , 
			0x0,		/* 0 */
/* 622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 630 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 634 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 636 */	0x0 , 
			0x0,		/* 0 */
/* 638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 646 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 648 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (396) */
/* 650 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 652 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 658 */	NdrFcShort( 0x6 ),	/* Offset= 6 (664) */
/* 660 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 662 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 664 */	
			0x11, 0x0,	/* FC_RP */
/* 666 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (610) */
/* 668 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 670 */	NdrFcShort( 0x4 ),	/* 4 */
/* 672 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 678 */	0x0 , 
			0x0,		/* 0 */
/* 680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 688 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 690 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 692 */	NdrFcShort( 0x4 ),	/* 4 */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x1 ),	/* 1 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	0x13, 0x0,	/* FC_OP */
/* 704 */	NdrFcShort( 0x1d8 ),	/* Offset= 472 (1176) */
/* 706 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 708 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 710 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	NdrFcShort( 0x6 ),	/* Offset= 6 (722) */
/* 718 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 720 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 722 */	
			0x11, 0x0,	/* FC_RP */
/* 724 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (668) */
/* 726 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 728 */	NdrFcLong( 0x2f ),	/* 47 */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 736 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 738 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 740 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 742 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 744 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 746 */	NdrFcShort( 0x1 ),	/* 1 */
/* 748 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 750 */	NdrFcShort( 0x4 ),	/* 4 */
/* 752 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 754 */	0x0 , 
			0x0,		/* 0 */
/* 756 */	NdrFcLong( 0x0 ),	/* 0 */
/* 760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 764 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 766 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 768 */	NdrFcShort( 0x10 ),	/* 16 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0xa ),	/* Offset= 10 (782) */
/* 774 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 776 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 778 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (726) */
/* 780 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 782 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 784 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (744) */
/* 786 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 788 */	NdrFcShort( 0x4 ),	/* 4 */
/* 790 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 794 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 796 */	0x0 , 
			0x0,		/* 0 */
/* 798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 806 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 808 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 810 */	NdrFcShort( 0x4 ),	/* 4 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x1 ),	/* 1 */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 820 */	0x13, 0x0,	/* FC_OP */
/* 822 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (766) */
/* 824 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 826 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 828 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x6 ),	/* Offset= 6 (840) */
/* 836 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 838 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 840 */	
			0x11, 0x0,	/* FC_RP */
/* 842 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (786) */
/* 844 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 848 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 850 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 852 */	NdrFcShort( 0x10 ),	/* 16 */
/* 854 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 856 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 858 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (844) */
			0x5b,		/* FC_END */
/* 862 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 864 */	NdrFcShort( 0x18 ),	/* 24 */
/* 866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0xa ),	/* Offset= 10 (878) */
/* 870 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 872 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 874 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (850) */
/* 876 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 878 */	
			0x11, 0x0,	/* FC_RP */
/* 880 */	NdrFcShort( 0xfeb8 ),	/* Offset= -328 (552) */
/* 882 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 884 */	NdrFcShort( 0x1 ),	/* 1 */
/* 886 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 890 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 892 */	0x0 , 
			0x0,		/* 0 */
/* 894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 902 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 904 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 906 */	NdrFcShort( 0x8 ),	/* 8 */
/* 908 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 910 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 912 */	NdrFcShort( 0x4 ),	/* 4 */
/* 914 */	NdrFcShort( 0x4 ),	/* 4 */
/* 916 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 918 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (882) */
/* 920 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 922 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 924 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 926 */	NdrFcShort( 0x2 ),	/* 2 */
/* 928 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 934 */	0x0 , 
			0x0,		/* 0 */
/* 936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 944 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 946 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 950 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 952 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 954 */	NdrFcShort( 0x4 ),	/* 4 */
/* 956 */	NdrFcShort( 0x4 ),	/* 4 */
/* 958 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 960 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (924) */
/* 962 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 964 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 966 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 968 */	NdrFcShort( 0x4 ),	/* 4 */
/* 970 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 974 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 976 */	0x0 , 
			0x0,		/* 0 */
/* 978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 986 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 988 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 990 */	NdrFcShort( 0x8 ),	/* 8 */
/* 992 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 994 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 996 */	NdrFcShort( 0x4 ),	/* 4 */
/* 998 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1000 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1002 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (966) */
/* 1004 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1006 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1008 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1010 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1012 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1018 */	0x0 , 
			0x0,		/* 0 */
/* 1020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1024 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1028 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1030 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1034 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1036 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1038 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1040 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1042 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1044 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1008) */
/* 1046 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1048 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1050 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1052 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1054 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1056 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1058 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1060 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1062 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1064 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1066 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1068 */	0x0 , 
			0x0,		/* 0 */
/* 1070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1078 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1080 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1050) */
/* 1082 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1084 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1086 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1088 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1058) */
/* 1090 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1090) */
/* 1092 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1094 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1096 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1098 */	NdrFcShort( 0xfd5c ),	/* Offset= -676 (422) */
/* 1100 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1102 */	
			0x13, 0x0,	/* FC_OP */
/* 1104 */	NdrFcShort( 0xfeae ),	/* Offset= -338 (766) */
/* 1106 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1108 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1110 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1112 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1114 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1116 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1118 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1120 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1122 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1124 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1126 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1128 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1130 */	
			0x13, 0x0,	/* FC_OP */
/* 1132 */	NdrFcShort( 0xfd04 ),	/* Offset= -764 (368) */
/* 1134 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1136 */	NdrFcShort( 0xfd06 ),	/* Offset= -762 (374) */
/* 1138 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1140 */	NdrFcShort( 0xfd06 ),	/* Offset= -762 (378) */
/* 1142 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1144 */	NdrFcShort( 0xfd14 ),	/* Offset= -748 (396) */
/* 1146 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1148 */	NdrFcShort( 0xfd22 ),	/* Offset= -734 (414) */
/* 1150 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1152 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1154) */
/* 1154 */	
			0x13, 0x0,	/* FC_OP */
/* 1156 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1176) */
/* 1158 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1160 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1162 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1164 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1166 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1168 */	
			0x13, 0x0,	/* FC_OP */
/* 1170 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1158) */
/* 1172 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1174 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1176 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1178 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1182) */
/* 1184 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1186 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1188 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1190 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1192 */	NdrFcShort( 0xfb94 ),	/* Offset= -1132 (60) */
/* 1194 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1196 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1198 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1200 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1204 */	NdrFcShort( 0xfb84 ),	/* Offset= -1148 (56) */
/* 1206 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1208 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1210) */
/* 1210 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1214 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1218 */	NdrFcShort( 0xfcb4 ),	/* Offset= -844 (374) */
/* 1220 */	
			0x11, 0x0,	/* FC_RP */
/* 1222 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1196) */
/* 1224 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1226 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1228 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1230 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ITSPlugInterFace, ver. 0.0,
   GUID={0xF3E95C10,0x606A,0x474E,{0xBB,0x4A,0xB9,0xCC,0xBF,0x7D,0xB5,0x59}} */

#pragma code_seg(".orpc")
static const unsigned short ITSPlugInterFace_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    66,
    138,
    174,
    216,
    258,
    300,
    336,
    372,
    408,
    456,
    552,
    588,
    624,
    714,
    750,
    798,
    834,
    876,
    924,
    972,
    1020,
    1068,
    1110,
    1152,
    1194,
    1242,
    1290,
    1326,
    1362,
    1398,
    1434,
    1470,
    1536,
    1602,
    1668,
    1710,
    1782,
    1830,
    1872,
    1914,
    2004,
    2094,
    2130,
    2166,
    2232,
    2316,
    2394,
    2472,
    2550,
    2592,
    2640,
    2688,
    2748,
    2790,
    2868,
    2928,
    2988,
    3030,
    3084,
    3132,
    3186,
    3240,
    3294,
    3360,
    3414,
    3450,
    3486,
    3522,
    3570,
    3612,
    3654,
    3702,
    3744,
    3786,
    3828,
    3894,
    3942,
    3984,
    4038,
    4092,
    4134,
    4188,
    4236,
    4290,
    4338,
    4386,
    4428,
    4464,
    4506,
    4548,
    4596,
    4644,
    4698,
    4758,
    4818,
    4884,
    4944,
    4998,
    5070,
    5118,
    5166,
    5220,
    5280,
    5322,
    5382,
    5430,
    5484,
    5538,
    5598,
    5658,
    5712,
    5754,
    5832,
    5910,
    5994,
    6066,
    6144,
    6192,
    6234,
    6276,
    6324,
    6360,
    6402,
    6456,
    6498,
    6540,
    6588,
    6624,
    6666,
    6708,
    6750,
    6792,
    6882,
    6972,
    7050,
    7128,
    7224,
    7308,
    7350,
    7392,
    7428,
    7470,
    7512,
    7560,
    7596,
    7632,
    7692,
    7746,
    7788,
    7848,
    7884,
    7926,
    7974,
    8070,
    8154
    };

static const MIDL_STUBLESS_PROXY_INFO ITSPlugInterFace_ProxyInfo =
    {
    &Object_StubDesc,
    TSPlug__MIDL_ProcFormatString.Format,
    &ITSPlugInterFace_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITSPlugInterFace_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    TSPlug__MIDL_ProcFormatString.Format,
    &ITSPlugInterFace_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(163) _ITSPlugInterFaceProxyVtbl = 
{
    &ITSPlugInterFace_ProxyInfo,
    &IID_ITSPlugInterFace,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::BindWindow */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::BindWindowEx */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::UnBindWindow */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::KeyDown */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::KeyUp */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::KeyPress */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::LeftDown */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::LeftUp */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::LeftClick */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::MoveTo */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindPic */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::RightClick */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::RightDown */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindColor */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::RightUp */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetColor */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetCursorShape */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::SetPath */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::TSGuardProtect */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::KeyPressStr */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::SendString */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::SendString2 */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::KeyPressChar */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::KeyDownChar */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::KeyUpChar */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetCursorPos */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::MoveR */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::Ver */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetPath */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::MiddleClick */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::WheelDown */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::WheelUp */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::Capture */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::CaptureJpg */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::CapturePng */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::LockInput */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::Ocr */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::SetDict */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::UseDict */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::ClearDict */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindStr */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindStrFast */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetNowDict */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetBasePath */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::IsDisplayDead */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindPicEx */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindStrEx */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindStrFastEx */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::CaptureGif */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::DownCpu */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::SetKeypadDelay */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::SetMouseDelay */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::CmpColor */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::SendStringIme */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindColorEx */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::EnumWindow */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::EnumWindowByProcess */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::EnumProcess */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::ClientToScreen */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindWindow */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindWindowByProcess */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindWindowByProcessId */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindWindowEx */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetClientRect */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetClientSize */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetForegroundFocus */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetForegroundWindow */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetMousePointWindow */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetPointWindow */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetProcessInfo */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetSpecialWindow */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetWindow */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetWindowClass */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetWindowProcessId */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetWindowProcessPath */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetWindowRect */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetWindowState */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetWindowTitle */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::MoveWindow */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::ScreenToClient */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::SendPaste */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::SetClientSize */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::SetWindowState */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::SetWindowSize */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::SetWindowText */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::SetWindowTransparent */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::SetClipboard */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetClipboard */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::DoubleToData */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FloatToData */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::IntToData */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::StringToData */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindData */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindDouble */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindFloat */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindInt */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindString */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::ReadData */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::OcrEx */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::ReadDouble */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::ReadFloat */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::ReadInt */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::ReadString */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::TerminateProcess */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::VirtualAllocEx */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::VirtualFreeEx */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::WriteDouble */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::WriteFloat */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::WriteInt */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::WriteString */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::WriteData */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::IsBind */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindFloatEx */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindDoubleEx */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindIntEx */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindDataEx */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::FindStringEx */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetModuleBaseAddr */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::GetCommandLine */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::AsmAdd */ ,
    (void *) (INT_PTR) -1 /* ITSPlugInterFace::AsmCall */ ,
    ITSPlugInterFace_AsmClear_Proxy ,
    ITSPlugInterFace_AsmCode_Proxy ,
    ITSPlugInterFace_Assemble_Proxy ,
    ITSPlugInterFace_MatchPicName_Proxy ,
    ITSPlugInterFace_SetShowErrorMsg_Proxy ,
    ITSPlugInterFace_Reg_Proxy ,
    ITSPlugInterFace_GetMachineCode_Proxy ,
    ITSPlugInterFace_TSGuardProtectToHide_Proxy ,
    ITSPlugInterFace_TSGuardProtectToHide2_Proxy ,
    ITSPlugInterFace_TSGuardProtectToNP_Proxy ,
    ITSPlugInterFace_Delay_Proxy ,
    ITSPlugInterFace_FindStrS_Proxy ,
    ITSPlugInterFace_FindStrFastS_Proxy ,
    ITSPlugInterFace_FindStrExS_Proxy ,
    ITSPlugInterFace_FindStrFastExS_Proxy ,
    ITSPlugInterFace_FindPicS_Proxy ,
    ITSPlugInterFace_FindPicExS_Proxy ,
    ITSPlugInterFace_SetDictPwd_Proxy ,
    ITSPlugInterFace_SetPicPwd_Proxy ,
    ITSPlugInterFace_LeftDoubleClick_Proxy ,
    ITSPlugInterFace_FreeProcessMemory_Proxy ,
    ITSPlugInterFace_TSDXGraphicProtect_Proxy ,
    ITSPlugInterFace_TSDXKmProtect_Proxy ,
    ITSPlugInterFace_CheckFontSmooth_Proxy ,
    ITSPlugInterFace_DisableFontSmooth_Proxy ,
    ITSPlugInterFace_GetScreenData_Proxy ,
    ITSPlugInterFace_EnableRealMouse_Proxy ,
    ITSPlugInterFace_EnableRealKeypad_Proxy ,
    ITSPlugInterFace_MoveToEx_Proxy ,
    ITSPlugInterFace_CheckUAC_Proxy ,
    ITSPlugInterFace_SetUAC_Proxy ,
    ITSPlugInterFace_WaitKey_Proxy ,
    ITSPlugInterFace_FindMultiColor_Proxy ,
    ITSPlugInterFace_FindMultiColorEx_Proxy ,
    ITSPlugInterFace_SetSimMode_Proxy
};


static const PRPC_STUB_FUNCTION ITSPlugInterFace_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITSPlugInterFaceStubVtbl =
{
    &IID_ITSPlugInterFace,
    &ITSPlugInterFace_ServerInfo,
    163,
    &ITSPlugInterFace_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
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
    TSPlug__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _TSPlug_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ITSPlugInterFaceProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _TSPlug_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ITSPlugInterFaceStubVtbl,
    0
};

PCInterfaceName const _TSPlug_InterfaceNamesList[] = 
{
    "ITSPlugInterFace",
    0
};

const IID *  const _TSPlug_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _TSPlug_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _TSPlug, pIID, n)

int __stdcall _TSPlug_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_TSPlug_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo TSPlug_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _TSPlug_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _TSPlug_StubVtblList,
    (const PCInterfaceName * ) & _TSPlug_InterfaceNamesList,
    (const IID ** ) & _TSPlug_BaseIIDList,
    & _TSPlug_IID_Lookup, 
    1,
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


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

