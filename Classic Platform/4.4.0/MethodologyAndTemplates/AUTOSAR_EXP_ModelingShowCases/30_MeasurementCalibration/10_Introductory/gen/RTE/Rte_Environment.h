/** @file     Rte_Environment.h
  * 
  * @brief    Application header file
  * 
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  * 
  */

#ifndef RTE_ENVIRONMENT_H
#define RTE_ENVIRONMENT_H

#ifndef RTE_CORE
#ifdef RTE_APPLICATION_HEADER_FILE
#error Multiple application header files included.
#endif /* RTE_APPLICATION_HEADER_FILE */
#define RTE_APPLICATION_HEADER_FILE
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** Includes
 ***
 *******************************************************/

#include "Rte.h"
#include "Rte_Intl.h"
#include "Rte_Environment_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_envRE)
   /* Do nothing for this and all elif clauses below (rte_sws_2751) */
#else
   /* None of above defined so define value including all APIs (rte_sws_2751) */
   #define RTE_PRV_ALL_API
#endif

/*******************************************************
 ***
 *** Constants
 ***
 *******************************************************/


/*******************************************************
 ***
 *** Public Types
 ***
 *******************************************************/

/* BEGIN: SWC types (core visible) */
struct Rte_CDS_Environment {
   /* Data handles */
   P2VAR(Rte_DE_float32, AUTOMATIC, RTE_DATA) envRE_EnvTemperaturePPP_T;
   /* Per-Instance Memorys (sic) */
   P2VAR(float32       , AUTOMATIC, RTE_DATA) Pim_THighLimit;
   /* Inter-runnable variable handles */
   P2VAR(uint32        , AUTOMATIC, RTE_DATA) Irv_envRE_Seed;
   P2VAR(float32       , AUTOMATIC, RTE_DATA) Irv_envRE_TEnv;
};
typedef struct Rte_CDS_Environment Rte_CDS_Environment;

/* END: SWC types (core visible) */

/*******************************************************
 ***
 *** Private Types
 ***
 *******************************************************/

/* BEGIN: SWC types (private) */
/* END: SWC types (private) */

/*******************************************************
 ***
 *** Instance Declarations
 ***
 *******************************************************/

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern CONST(struct Rte_CDS_Environment, RTE_CONST) Rte_Inst_Environment;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_Environment, AUTOMATIC, RTE_CONST) Rte_Instance;
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** API Mapping macros
 ***
 *******************************************************/

/* API Mapping Macros */
#ifndef RTE_CORE
#define RTE_START_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern volatile CONST(float32, RTE_APPL_CONST) Dt;
#define RTE_STOP_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_VAR_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(Rte_ImplicitBufsType, RTE_DATA) Rte_ImplicitBufs;
#define RTE_STOP_SEC_VAR_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(float32, RTE_APPL_DATA) env_THighLimit;
#define RTE_STOP_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern volatile CONST(float32, RTE_APPL_CONST) env_THighLimitDistance;
#define RTE_STOP_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern volatile CONST(float32, RTE_APPL_CONST) env_TLowLimit;
#define RTE_STOP_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern volatile CONST(float32, RTE_APPL_CONST) env_TStepSize;
#define RTE_STOP_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_envRE)
/* Inline write optimization; Rte_IWriteRef_envRE_EnvTemperaturePPP_T to implicit access macro */
#define Rte_IWriteRef_envRE_EnvTemperaturePPP_T()  ( (P2VAR(float32, AUTOMATIC, RTE_DATA)) &Rte_ImplicitBufs.isa_1._task_100ms.sbuf0.value )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_envRE)
/* Inline write optimization; Rte_IWrite_envRE_EnvTemperaturePPP_T to implicit access macro */
#define Rte_IWrite_envRE_EnvTemperaturePPP_T( data )  ( Rte_ImplicitBufs.isa_1._task_100ms.sbuf0.value = (data) )
#endif
/* Inline read optimization; Rte_Pim_THighLimit to direct read */
#define Rte_Pim_THighLimit()  ( (P2VAR(float32, AUTOMATIC, RTE_APPL_DATA)) &env_THighLimit )
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_envRE)
/* Inline calprm optimization; Rte_Prm_DtRPP_Dt to direct access */
#define Rte_Prm_DtRPP_Dt() ( (volatile CONST(float32, RTE_APPL_CONST)) Dt )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_envRE)
/* Inline calprm optimization; Rte_Prm_EnvParamsRPP_env_THighLimitDistance to direct access */
#define Rte_Prm_EnvParamsRPP_env_THighLimitDistance() ( (volatile CONST(float32, RTE_APPL_CONST)) env_THighLimitDistance )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_envRE)
/* Inline calprm optimization; Rte_Prm_EnvParamsRPP_env_TLowLimit to direct access */
#define Rte_Prm_EnvParamsRPP_env_TLowLimit() ( (volatile CONST(float32, RTE_APPL_CONST)) env_TLowLimit )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_envRE)
/* Inline calprm optimization; Rte_Prm_EnvParamsRPP_env_TStepSize to direct access */
#define Rte_Prm_EnvParamsRPP_env_TStepSize() ( (volatile CONST(float32, RTE_APPL_CONST)) env_TStepSize )
#endif

/* Rte_IrvI API (implicit access) */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_envRE)
#define Rte_IrvIRead_envRE_Seed() (*Rte_Inst_Environment.Irv_envRE_Seed)
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_envRE)
#define Rte_IrvIWrite_envRE_Seed(data) ((*Rte_Inst_Environment.Irv_envRE_Seed) = (data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_envRE)
#define Rte_IrvIRead_envRE_TEnv() (*Rte_Inst_Environment.Irv_envRE_TEnv)
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_envRE)
#define Rte_IrvIWrite_envRE_TEnv(data) ((*Rte_Inst_Environment.Irv_envRE_TEnv) = (data))
#endif

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define Environment_START_SEC_CODE
#include "Environment_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, Environment_CODE) envRE_func(void);
#define Environment_STOP_SEC_CODE
#include "Environment_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* RTE_ENVIRONMENT_H */
