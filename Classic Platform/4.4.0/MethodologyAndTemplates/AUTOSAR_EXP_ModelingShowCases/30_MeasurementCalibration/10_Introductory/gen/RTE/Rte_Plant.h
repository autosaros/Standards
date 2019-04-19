/** @file     Rte_Plant.h
  * 
  * @brief    Application header file
  * 
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  * 
  */

#ifndef RTE_PLANT_H
#define RTE_PLANT_H

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
#include "Rte_Plant_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_plantRE)
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
struct Rte_CDS_Plant {
   /* Data handles */
   P2VAR(Rte_DE_float32, AUTOMATIC, RTE_DATA) plantRE_CurrentRPP_I;
   P2VAR(Rte_DE_float32, AUTOMATIC, RTE_DATA) plantRE_EnvTemperatureRPP_T;
   P2VAR(Rte_DE_float32, AUTOMATIC, RTE_DATA) plantRE_PlantTemperaturePPP_T;
   /* Per-Instance Memorys (sic) */
   P2VAR(float32       , AUTOMATIC, RTE_DATA) Pim_QEnv;
   P2VAR(float32       , AUTOMATIC, RTE_DATA) Pim_QHeater;
   /* Inter-runnable variable handles */
   P2VAR(float32       , AUTOMATIC, RTE_DATA) Irv_plantRE_QPlant;
};
typedef struct Rte_CDS_Plant Rte_CDS_Plant;

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
extern CONST(struct Rte_CDS_Plant, RTE_CONST) Rte_Inst_Plant;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_Plant, AUTOMATIC, RTE_CONST) Rte_Instance;
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
#define RTE_START_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern volatile CONST(float32, RTE_APPL_CONST) plnt_EnvFactor;
#define RTE_STOP_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern volatile CONST(float32, RTE_APPL_CONST) plnt_HeaterFactor;
#define RTE_STOP_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(float32, RTE_APPL_DATA) plnt_QEnv;
#define RTE_STOP_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_VAR
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(float32, RTE_APPL_DATA) plnt_QHeater;
#define RTE_STOP_SEC_VAR
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_plantRE)
/* Inline read optimization; Rte_IRead_plantRE_CurrentRPP_I to implicit access macro */
#define Rte_IRead_plantRE_CurrentRPP_I()  ( (CONST(float32, RTE_DATA)) Rte_ImplicitBufs.isa_1._task_100ms.sbuf2.value )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_plantRE)
/* Inline read optimization; Rte_IRead_plantRE_EnvTemperatureRPP_T to implicit access macro */
#define Rte_IRead_plantRE_EnvTemperatureRPP_T()  ( (CONST(float32, RTE_DATA)) Rte_ImplicitBufs.isa_1._task_100ms.sbuf0.value )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_plantRE)
/* Inline write optimization; Rte_IWriteRef_plantRE_PlantTemperaturePPP_T to implicit access macro */
#define Rte_IWriteRef_plantRE_PlantTemperaturePPP_T()  ( (P2VAR(float32, AUTOMATIC, RTE_DATA)) &Rte_ImplicitBufs.isa_1._task_100ms.sbuf1.value )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_plantRE)
/* Inline write optimization; Rte_IWrite_plantRE_PlantTemperaturePPP_T to implicit access macro */
#define Rte_IWrite_plantRE_PlantTemperaturePPP_T( data )  ( Rte_ImplicitBufs.isa_1._task_100ms.sbuf1.value = (data) )
#endif
/* Inline read optimization; Rte_Pim_QEnv to direct read */
#define Rte_Pim_QEnv()  ( (P2VAR(float32, AUTOMATIC, RTE_APPL_DATA)) &plnt_QEnv )
/* Inline read optimization; Rte_Pim_QHeater to direct read */
#define Rte_Pim_QHeater()  ( (P2VAR(float32, AUTOMATIC, RTE_APPL_DATA)) &plnt_QHeater )
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_plantRE)
/* Inline calprm optimization; Rte_Prm_DtRPP_Dt to direct access */
#define Rte_Prm_DtRPP_Dt() ( (volatile CONST(float32, RTE_APPL_CONST)) Dt )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_plantRE)
/* Inline calprm optimization; Rte_Prm_PlantParamsRPP_plnt_EnvFactor to direct access */
#define Rte_Prm_PlantParamsRPP_plnt_EnvFactor() ( (volatile CONST(float32, RTE_APPL_CONST)) plnt_EnvFactor )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_plantRE)
/* Inline calprm optimization; Rte_Prm_PlantParamsRPP_plnt_HeaterFactor to direct access */
#define Rte_Prm_PlantParamsRPP_plnt_HeaterFactor() ( (volatile CONST(float32, RTE_APPL_CONST)) plnt_HeaterFactor )
#endif

/* Rte_IrvI API (implicit access) */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_plantRE)
#define Rte_IrvIRead_plantRE_QPlant() (*Rte_Inst_Plant.Irv_plantRE_QPlant)
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_plantRE)
#define Rte_IrvIWrite_plantRE_QPlant(data) ((*Rte_Inst_Plant.Irv_plantRE_QPlant) = (data))
#endif

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define Plant_START_SEC_CODE
#include "Plant_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, Plant_CODE) plantRE_func(void);
#define Plant_STOP_SEC_CODE
#include "Plant_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* RTE_PLANT_H */
