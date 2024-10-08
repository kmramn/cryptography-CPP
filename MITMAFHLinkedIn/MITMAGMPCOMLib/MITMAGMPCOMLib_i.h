

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 08:44:07 2038
 */
/* Compiler settings for MITMAGMPCOMLib.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __MITMAGMPCOMLib_i_h__
#define __MITMAGMPCOMLib_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IGetMITMAG_FWD_DEFINED__
#define __IGetMITMAG_FWD_DEFINED__
typedef interface IGetMITMAG IGetMITMAG;

#endif 	/* __IGetMITMAG_FWD_DEFINED__ */


#ifndef __GetMITMAG_FWD_DEFINED__
#define __GetMITMAG_FWD_DEFINED__

#ifdef __cplusplus
typedef class GetMITMAG GetMITMAG;
#else
typedef struct GetMITMAG GetMITMAG;
#endif /* __cplusplus */

#endif 	/* __GetMITMAG_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IGetMITMAG_INTERFACE_DEFINED__
#define __IGetMITMAG_INTERFACE_DEFINED__

/* interface IGetMITMAG */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IGetMITMAG;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0a472b41-5eb4-4f00-a747-1640c22cc898")
    IGetMITMAG : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IGetMITMAGVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGetMITMAG * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGetMITMAG * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGetMITMAG * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGetMITMAG * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGetMITMAG * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGetMITMAG * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IGetMITMAG * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IGetMITMAGVtbl;

    interface IGetMITMAG
    {
        CONST_VTBL struct IGetMITMAGVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGetMITMAG_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGetMITMAG_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGetMITMAG_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGetMITMAG_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IGetMITMAG_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IGetMITMAG_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IGetMITMAG_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGetMITMAG_INTERFACE_DEFINED__ */



#ifndef __MITMAGMPCOMLibLib_LIBRARY_DEFINED__
#define __MITMAGMPCOMLibLib_LIBRARY_DEFINED__

/* library MITMAGMPCOMLibLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_MITMAGMPCOMLibLib;

EXTERN_C const CLSID CLSID_GetMITMAG;

#ifdef __cplusplus

class DECLSPEC_UUID("60ee2daa-448e-4a9b-be95-62d509e17661")
GetMITMAG;
#endif
#endif /* __MITMAGMPCOMLibLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


