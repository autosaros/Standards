/** @file     Rte_Controller.h
  * 
  * @brief    Application header file
  * 
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  * 
  */

#ifndef RTE_CONTROLLER_H
#define RTE_CONTROLLER_H

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
#include "Rte_Controller_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_ControllerRE)
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
struct Rte_CDS_Controller {
   /* Data handles */
   P2VAR(Rte_DE_float32, AUTOMATIC, RTE_DATA) ControllerRE_CurrentPPP_I;
   P2VAR(Rte_DE_float32, AUTOMATIC, RTE_DATA) ControllerRE_TemperatureRPP_T;
   /* Per-Instance Memorys (sic) */
   P2VAR(float32       , AUTOMATIC, RTE_DATA) Pim_E;
   /* Inter-runnable variable handles */
   P2VAR(float32       , AUTOMATIC, RTE_DATA) Irv_ControllerRE_ESum;
};
typedef struct Rte_CDS_Controller Rte_CDS_Controller;

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
extern CONST(struct Rte_CDS_Controller, RTE_CONST) Rte_Inst_Controller;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_Controller, AUTOMATIC, RTE_CONST) Rte_Instance;
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
extern VAR(float32, RTE_APPL_DATA) ctrl_E;
#define RTE_STOP_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern volatile CONST(float32, RTE_APPL_CONST) ctrl_K;
#define RTE_STOP_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern volatile CONST(float32, RTE_APPL_CONST) ctrl_MaxESum;
#define RTE_STOP_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern volatile CONST(float32, RTE_APPL_CONST) ctrl_SetPoint;
#define RTE_STOP_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_ControllerRE)
/* Inline read optimization; Rte_IRead_ControllerRE_TemperatureRPP_T to implicit access macro */
#define Rte_IRead_ControllerRE_TemperatureRPP_T()  ( (CONST(float32, RTE_DATA)) Rte_ImplicitBufs.isa_1._task_100ms.sbuf1.value )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_ControllerRE)
/* Inline write optimization; Rte_IWriteRef_ControllerRE_CurrentPPP_I to implicit access macro */
#define Rte_IWriteRef_ControllerRE_CurrentPPP_I()  ( (P2VAR(float32, AUTOMATIC, RTE_DATA)) &Rte_ImplicitBufs.isa_1._task_100ms.sbuf2.value )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_ControllerRE)
/* Inline write optimization; Rte_IWrite_ControllerRE_CurrentPPP_I to implicit access macro */
#define Rte_IWrite_ControllerRE_CurrentPPP_I( data )  ( Rte_ImplicitBufs.isa_1._task_100ms.sbuf2.value = (data) )
#endif
/* Inline read optimization; Rte_Pim_E to direct read */
#define Rte_Pim_E()  ( (P2VAR(float32, AUTOMATIC, RTE_APPL_DATA)) &ctrl_E )
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_ControllerRE)
/* Inline calprm optimization; Rte_Prm_ControllerParamsRPP_ctrl_K to direct access */
#define Rte_Prm_ControllerParamsRPP_ctrl_K() ( (volatile CONST(float32, RTE_APPL_CONST)) ctrl_K )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_ControllerRE)
/* Inline calprm optimization; Rte_Prm_ControllerParamsRPP_ctrl_MaxESum to direct access */
#define Rte_Prm_ControllerParamsRPP_ctrl_MaxESum() ( (volatile CONST(float32, RTE_APPL_CONST)) ctrl_MaxESum )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_ControllerRE)
/* Inline calprm optimization; Rte_Prm_ControllerParamsRPP_ctrl_SetPoint to direct access */
#define Rte_Prm_ControllerParamsRPP_ctrl_SetPoint() ( (volatile CONST(float32, RTE_APPL_CONST)) ctrl_SetPoint )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_ControllerRE)
/* Inline calprm optimization; Rte_Prm_DtRPP_Dt to direct access */
#define Rte_Prm_DtRPP_Dt() ( (volatile CONST(float32, RTE_APPL_CONST)) Dt )
#endif

/* Rte_IrvI API (implicit access) */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_ControllerRE)
#define Rte_IrvIRead_ControllerRE_ESum() (*Rte_Inst_Controller.Irv_ControllerRE_ESum)
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_ControllerRE)
#define Rte_IrvIWrite_ControllerRE_ESum(data) ((*Rte_Inst_Controller.Irv_ControllerRE_ESum) = (data))
#endif

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define Controller_START_SEC_CODE
#include "Controller_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, Controller_CODE) controllerRE_func(void);
#define Controller_STOP_SEC_CODE
#include "Controller_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* RTE_CONTROLLER_H */
