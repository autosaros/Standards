/** @file     Rte.c
  * 
  * @brief    RTE data structures
  * 
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  * 
  */

/* RTE_HEADER_START */

#define RTE_CORE

#ifdef RTE_PREINCLUDE
#include RTE_PREINCLUDE
#endif
/* Box: RTE: OS Headers begin */
#include "Rte_Const.h"
#include "Os.h"
#if defined(RTE_REQUIRES_IOC)
#include "Ioc.h"
#endif /* defined(RTE_REQUIRES_IOC) */
/* Box: RTE: OS Headers end */
/* Box: RTE headers begin */
#include <Rte.h>
#include <Rte_Intl.h>
#include <Rte_Main.h>
#include "Rte_Type.h"
#include "Rte_Cfg.h"
#include "Rte_Cbk.h"
#if defined(RTE_REQUIRES_COM)
#include <Com.h>
#endif /* defined(RTE_REQUIRES_COM) */
#if defined(RTE_REQUIRES_NVM)
#include <NvM.h>
#endif /* defined(RTE_REQUIRES_NVM) */
#include "Rte_Controller.h"
#include "Rte_Environment.h"
#include "Rte_Plant.h"
/* Box: RTE headers end */
/* RTE_HEADER_END */


/* ----- Function and RE prototypes ----- */

/* RTE_FN_PROTOTYPES_START */

/* Global functions */
#define RTE_START_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
/* Instance: /McInt/SwComponents/Composition/CPT_Controller (SWCI0), Type: Controller */
FUNC(Std_ReturnType, RTE_CODE) Rte_ImplWrite_Controller_CurrentPPP_I(VAR(float32, AUTOMATIC) data);
FUNC(float32, RTE_CODE) Rte_Prm_Controller_ControllerParamsRPP_ctrl_K(void);
FUNC(float32, RTE_CODE) Rte_Prm_Controller_ControllerParamsRPP_ctrl_MaxESum(void);
FUNC(float32, RTE_CODE) Rte_Prm_Controller_ControllerParamsRPP_ctrl_SetPoint(void);
FUNC(float32, RTE_CODE) Rte_Prm_Controller_DtRPP_Dt(void);
/* Instance: /McInt/SwComponents/Composition/CPT_Environment (SWCI3), Type: Environment */
FUNC(Std_ReturnType, RTE_CODE) Rte_ImplWrite_Environment_EnvTemperaturePPP_T(VAR(float32, AUTOMATIC) data);
FUNC(float32, RTE_CODE) Rte_Prm_Environment_DtRPP_Dt(void);
FUNC(float32, RTE_CODE) Rte_Prm_Environment_EnvParamsRPP_env_THighLimitDistance(void);
FUNC(float32, RTE_CODE) Rte_Prm_Environment_EnvParamsRPP_env_TLowLimit(void);
FUNC(float32, RTE_CODE) Rte_Prm_Environment_EnvParamsRPP_env_TStepSize(void);
/* Instance: /McInt/SwComponents/Composition/CPT_Parameters (SWCI1), Type: Parameters */
/* Instance: /McInt/SwComponents/Composition/CPT_Plant (SWCI2), Type: Plant */
FUNC(Std_ReturnType, RTE_CODE) Rte_ImplWrite_Plant_PlantTemperaturePPP_T(VAR(float32, AUTOMATIC) data);
FUNC(float32, RTE_CODE) Rte_Prm_Plant_DtRPP_Dt(void);
FUNC(float32, RTE_CODE) Rte_Prm_Plant_PlantParamsRPP_plnt_EnvFactor(void);
FUNC(float32, RTE_CODE) Rte_Prm_Plant_PlantParamsRPP_plnt_HeaterFactor(void);
#define RTE_STOP_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */

/* RTE_FN_PROTOTYPES_END */

/* RTE_RE_PROTOTYPES_START */

/* Type: Controller */
#define Controller_START_SEC_CODE
#include "Controller_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, Controller_CODE) controllerRE_func(void);
#define Controller_STOP_SEC_CODE
#include "Controller_MemMap.h" /*lint !e537 permit multiple inclusion */
#define Environment_START_SEC_CODE
#include "Environment_MemMap.h" /*lint !e537 permit multiple inclusion */
/* Type: Environment */
FUNC(void, Environment_CODE) envRE_func(void);
#define Environment_STOP_SEC_CODE
#include "Environment_MemMap.h" /*lint !e537 permit multiple inclusion */
/* Type: Parameters */
/* Type: Plant */
#define Plant_START_SEC_CODE
#include "Plant_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, Plant_CODE) plantRE_func(void);
#define Plant_STOP_SEC_CODE
#include "Plant_MemMap.h" /*lint !e537 permit multiple inclusion */

/* RTE_RE_PROTOTYPES_END */

/* RTE_SE_PROTOTYPES_START */

/* RTE_SE_PROTOTYPES_END */

/* ----- External variables ----- */

/* RTE_IMPORTS_START */

/* RTE_IMPORTS_END */

/* ----- Global variables ----- */

/* RTE_GLOBALS_START */

#define RTE_START_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
volatile CONST(float32, RTE_APPL_CONST) Dt = 0.1;
#define RTE_STOP_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */

#define RTE_START_SEC_VAR
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
VAR(float32, RTE_DATA) I;
#define RTE_STOP_SEC_VAR
#include "MemMap.h" /*lint !e537 permit multiple inclusion */

#define RTE_START_SEC_VAR_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
VAR(Rte_ImplicitBufsType, RTE_DATA) Rte_ImplicitBufs;
#define RTE_STOP_SEC_VAR_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */

#if defined(RTE_WOWP_EVENTS) && (RTE_WOWP_EVENTS > 0)
#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
CONST(Rte_TaskInfo, RTE_CONST) Rte_Tasks[1] = {
   { RTE_REF_FROM_TASK(task_100ms), RTE_NUM_TIMEOUT_ALARMS, 0 }
};
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */

#endif /* defined(RTE_WOWP_EVENTS) && (RTE_WOWP_EVENTS > 0) */
#define RTE_START_SEC_VAR
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
VAR(float32, RTE_DATA) TEnv;
VAR(float32, RTE_DATA) TPlant;
#define RTE_STOP_SEC_VAR
#include "MemMap.h" /*lint !e537 permit multiple inclusion */

#define RTE_START_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
VAR(float32, RTE_APPL_DATA) ctrl_E;
VAR(float32, RTE_DATA) ctrl_ESum = 0;
#define RTE_STOP_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */

#define RTE_START_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
volatile CONST(float32, RTE_APPL_CONST) ctrl_K = 20;
volatile CONST(float32, RTE_APPL_CONST) ctrl_MaxESum = 2000;
volatile CONST(float32, RTE_APPL_CONST) ctrl_SetPoint = 1041.15;
#define RTE_STOP_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */

#define RTE_START_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
VAR(uint32, RTE_DATA) env_Seed = 5323;
VAR(float32, RTE_DATA) env_TEnv = 293.15;
VAR(float32, RTE_APPL_DATA) env_THighLimit;
#define RTE_STOP_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */

#define RTE_START_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
volatile CONST(float32, RTE_APPL_CONST) env_THighLimitDistance = 200;
volatile CONST(float32, RTE_APPL_CONST) env_TLowLimit = 573.15;
volatile CONST(float32, RTE_APPL_CONST) env_TStepSize = 10;
volatile CONST(float32, RTE_APPL_CONST) plnt_EnvFactor = 1;
volatile CONST(float32, RTE_APPL_CONST) plnt_HeaterFactor = 5;
#define RTE_STOP_SEC_CALIB
#include "MemMap.h" /*lint !e537 permit multiple inclusion */

#define RTE_START_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
VAR(float32, RTE_APPL_DATA) plnt_QEnv;
#define RTE_STOP_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */

#define RTE_START_SEC_VAR
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
VAR(float32, RTE_APPL_DATA) plnt_QHeater;
#define RTE_STOP_SEC_VAR
#include "MemMap.h" /*lint !e537 permit multiple inclusion */

#define RTE_START_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
VAR(float32, RTE_DATA) plnt_QPlant = 300;
#define RTE_STOP_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
/* RTE_GLOBALS_END */


/* ----- Data structures ----- */

/* RTE_CDS_START */

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
/* Instance: /McInt/SwComponents/Composition/CPT_Controller (SWCI0), Type: Controller */
CONST(struct Rte_CDS_Controller, RTE_CONST) Rte_Inst_Controller = {
   /* Data handles */
   &Rte_ImplicitBufs.isa_1._task_100ms.sbuf2,        /* ControllerRE_CurrentPPP_I */
   &Rte_ImplicitBufs.isa_1._task_100ms.sbuf1,        /* ControllerRE_TemperatureRPP_T */
   /* Per-Instance Memorys (sic) */
   &ctrl_E,                                          /* Pim_E */
   /* Inter-runnable variable handles */
   &ctrl_ESum                                        /* Irv_ControllerRE_ESum */
};
CONST(Rte_SelfType_Controller, RTE_CONST) Rte_Self_SWCI0 = &Rte_Inst_Controller;
/* Instance: /McInt/SwComponents/Composition/CPT_Environment (SWCI3), Type: Environment */
CONST(struct Rte_CDS_Environment, RTE_CONST) Rte_Inst_Environment = {
   /* Data handles */
   &Rte_ImplicitBufs.isa_1._task_100ms.sbuf0,        /* envRE_EnvTemperaturePPP_T */
   /* Per-Instance Memorys (sic) */
   &env_THighLimit,                                  /* Pim_THighLimit */
   /* Inter-runnable variable handles */
   &env_Seed,                                        /* Irv_envRE_Seed */
   &env_TEnv                                         /* Irv_envRE_TEnv */
};
CONST(Rte_SelfType_Environment, RTE_CONST) Rte_Self_SWCI3 = &Rte_Inst_Environment;
/* Instance: /McInt/SwComponents/Composition/CPT_Parameters (SWCI1), Type: Parameters */
/* Omitted for CalPrmComponentType */
/* Instance: /McInt/SwComponents/Composition/CPT_Plant (SWCI2), Type: Plant */
CONST(struct Rte_CDS_Plant, RTE_CONST) Rte_Inst_Plant = {
   /* Data handles */
   &Rte_ImplicitBufs.isa_1._task_100ms.sbuf2,        /* plantRE_CurrentRPP_I */
   &Rte_ImplicitBufs.isa_1._task_100ms.sbuf0,        /* plantRE_EnvTemperatureRPP_T */
   &Rte_ImplicitBufs.isa_1._task_100ms.sbuf1,        /* plantRE_PlantTemperaturePPP_T */
   /* Per-Instance Memorys (sic) */
   &plnt_QEnv,                                       /* Pim_QEnv */
   &plnt_QHeater,                                    /* Pim_QHeater */
   /* Inter-runnable variable handles */
   &plnt_QPlant                                      /* Irv_plantRE_QPlant */
};
CONST(Rte_SelfType_Plant, RTE_CONST) Rte_Self_SWCI2 = &Rte_Inst_Plant;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */

/* RTE_CDS_END */

/* ----- Function implementations ----- */

/* RTE_FUNCTIONS_START */

#define RTE_START_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
/* Instance: /McInt/SwComponents/Composition/CPT_Controller (SWCI0), Type: Controller */
/* Direct API 'Rte_IRead_ControllerRE_TemperatureRPP_T' for 'SWCI0' optimized to implicit read. */
/* Function body elided - API implemented as macro. */
/* Function definition Rte_IRead_Controller_ControllerRE_TemperatureRPP_T omitted -- not used */

/* Direct API 'Rte_IWriteRef_ControllerRE_CurrentPPP_I' for 'SWCI0' optimized to implicit write. */
/* Function body elided - API implemented as macro. */
/* Function definition Rte_IWriteRef_Controller_ControllerRE_CurrentPPP_I omitted -- not used */

/* Direct API 'Rte_IWrite_ControllerRE_CurrentPPP_I' for 'SWCI0' optimized to implicit write. */
/* Function body elided - API implemented as macro. */
/* Function definition Rte_IWrite_Controller_ControllerRE_CurrentPPP_I omitted -- not used */

/* Function definition Rte_ImplWrite_Controller_CurrentPPP_I omitted -- not used */

/* Direct API 'Rte_Pim_E' for 'SWCI0' optimized to direct PIM access. */
/* Function body elided - API implemented as macro. */
/* Function definition Rte_Pim_Controller_E omitted -- not used */

/* Direct API 'Rte_Prm_ControllerParamsRPP_ctrl_K' for 'SWCI0' optimized to direct calprm access. */
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(float32, RTE_CODE)
Rte_Prm_Controller_ControllerParamsRPP_ctrl_K(void) /* 1 */
{
   VAR(float32, AUTOMATIC) rtn;

   rtn = ((VAR(float32, AUTOMATIC))ctrl_K);
   return rtn;
}

/* Direct API 'Rte_Prm_ControllerParamsRPP_ctrl_MaxESum' for 'SWCI0' optimized to direct calprm access. */
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(float32, RTE_CODE)
Rte_Prm_Controller_ControllerParamsRPP_ctrl_MaxESum(void) /* 1 */
{
   VAR(float32, AUTOMATIC) rtn;

   rtn = ((VAR(float32, AUTOMATIC))ctrl_MaxESum);
   return rtn;
}

/* Direct API 'Rte_Prm_ControllerParamsRPP_ctrl_SetPoint' for 'SWCI0' optimized to direct calprm access. */
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(float32, RTE_CODE)
Rte_Prm_Controller_ControllerParamsRPP_ctrl_SetPoint(void) /* 1 */
{
   VAR(float32, AUTOMATIC) rtn;

   rtn = ((VAR(float32, AUTOMATIC))ctrl_SetPoint);
   return rtn;
}

/* Direct API 'Rte_Prm_DtRPP_Dt' for 'SWCI0' optimized to direct calprm access. */
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(float32, RTE_CODE)
Rte_Prm_Controller_DtRPP_Dt(void) /* 1 */
{
   VAR(float32, AUTOMATIC) rtn;

   rtn = ((VAR(float32, AUTOMATIC))Dt);
   return rtn;
}

/* Instance: /McInt/SwComponents/Composition/CPT_Environment (SWCI3), Type: Environment */
/* Direct API 'Rte_IWriteRef_envRE_EnvTemperaturePPP_T' for 'SWCI3' optimized to implicit write. */
/* Function body elided - API implemented as macro. */
/* Function definition Rte_IWriteRef_Environment_envRE_EnvTemperaturePPP_T omitted -- not used */

/* Direct API 'Rte_IWrite_envRE_EnvTemperaturePPP_T' for 'SWCI3' optimized to implicit write. */
/* Function body elided - API implemented as macro. */
/* Function definition Rte_IWrite_Environment_envRE_EnvTemperaturePPP_T omitted -- not used */

/* Function definition Rte_ImplWrite_Environment_EnvTemperaturePPP_T omitted -- not used */

/* Direct API 'Rte_Pim_THighLimit' for 'SWCI3' optimized to direct PIM access. */
/* Function body elided - API implemented as macro. */
/* Function definition Rte_Pim_Environment_THighLimit omitted -- not used */

/* Direct API 'Rte_Prm_DtRPP_Dt' for 'SWCI3' optimized to direct calprm access. */
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(float32, RTE_CODE)
Rte_Prm_Environment_DtRPP_Dt(void) /* 1 */
{
   VAR(float32, AUTOMATIC) rtn;

   rtn = ((VAR(float32, AUTOMATIC))Dt);
   return rtn;
}

/* Direct API 'Rte_Prm_EnvParamsRPP_env_THighLimitDistance' for 'SWCI3' optimized to direct calprm access. */
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(float32, RTE_CODE)
Rte_Prm_Environment_EnvParamsRPP_env_THighLimitDistance(void) /* 1 */
{
   VAR(float32, AUTOMATIC) rtn;

   rtn = ((VAR(float32, AUTOMATIC))env_THighLimitDistance);
   return rtn;
}

/* Direct API 'Rte_Prm_EnvParamsRPP_env_TLowLimit' for 'SWCI3' optimized to direct calprm access. */
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(float32, RTE_CODE)
Rte_Prm_Environment_EnvParamsRPP_env_TLowLimit(void) /* 1 */
{
   VAR(float32, AUTOMATIC) rtn;

   rtn = ((VAR(float32, AUTOMATIC))env_TLowLimit);
   return rtn;
}

/* Direct API 'Rte_Prm_EnvParamsRPP_env_TStepSize' for 'SWCI3' optimized to direct calprm access. */
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(float32, RTE_CODE)
Rte_Prm_Environment_EnvParamsRPP_env_TStepSize(void) /* 1 */
{
   VAR(float32, AUTOMATIC) rtn;

   rtn = ((VAR(float32, AUTOMATIC))env_TStepSize);
   return rtn;
}

/* Instance: /McInt/SwComponents/Composition/CPT_Parameters (SWCI1), Type: Parameters */
/* Instance: /McInt/SwComponents/Composition/CPT_Plant (SWCI2), Type: Plant */
/* Direct API 'Rte_IRead_plantRE_CurrentRPP_I' for 'SWCI2' optimized to implicit read. */
/* Function body elided - API implemented as macro. */
/* Function definition Rte_IRead_Plant_plantRE_CurrentRPP_I omitted -- not used */

/* Direct API 'Rte_IRead_plantRE_EnvTemperatureRPP_T' for 'SWCI2' optimized to implicit read. */
/* Function body elided - API implemented as macro. */
/* Function definition Rte_IRead_Plant_plantRE_EnvTemperatureRPP_T omitted -- not used */

/* Direct API 'Rte_IWriteRef_plantRE_PlantTemperaturePPP_T' for 'SWCI2' optimized to implicit write. */
/* Function body elided - API implemented as macro. */
/* Function definition Rte_IWriteRef_Plant_plantRE_PlantTemperaturePPP_T omitted -- not used */

/* Direct API 'Rte_IWrite_plantRE_PlantTemperaturePPP_T' for 'SWCI2' optimized to implicit write. */
/* Function body elided - API implemented as macro. */
/* Function definition Rte_IWrite_Plant_plantRE_PlantTemperaturePPP_T omitted -- not used */

/* Function definition Rte_ImplWrite_Plant_PlantTemperaturePPP_T omitted -- not used */

/* Direct API 'Rte_Pim_QEnv' for 'SWCI2' optimized to direct PIM access. */
/* Function body elided - API implemented as macro. */
/* Function definition Rte_Pim_Plant_QEnv omitted -- not used */

/* Direct API 'Rte_Pim_QHeater' for 'SWCI2' optimized to direct PIM access. */
/* Function body elided - API implemented as macro. */
/* Function definition Rte_Pim_Plant_QHeater omitted -- not used */

/* Direct API 'Rte_Prm_DtRPP_Dt' for 'SWCI2' optimized to direct calprm access. */
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(float32, RTE_CODE)
Rte_Prm_Plant_DtRPP_Dt(void) /* 1 */
{
   VAR(float32, AUTOMATIC) rtn;

   rtn = ((VAR(float32, AUTOMATIC))Dt);
   return rtn;
}

/* Direct API 'Rte_Prm_PlantParamsRPP_plnt_EnvFactor' for 'SWCI2' optimized to direct calprm access. */
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(float32, RTE_CODE)
Rte_Prm_Plant_PlantParamsRPP_plnt_EnvFactor(void) /* 1 */
{
   VAR(float32, AUTOMATIC) rtn;

   rtn = ((VAR(float32, AUTOMATIC))plnt_EnvFactor);
   return rtn;
}

/* Direct API 'Rte_Prm_PlantParamsRPP_plnt_HeaterFactor' for 'SWCI2' optimized to direct calprm access. */
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(float32, RTE_CODE)
Rte_Prm_Plant_PlantParamsRPP_plnt_HeaterFactor(void) /* 1 */
{
   VAR(float32, AUTOMATIC) rtn;

   rtn = ((VAR(float32, AUTOMATIC))plnt_HeaterFactor);
   return rtn;
}

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
/* RTE_FUNCTIONS_END */

/* ----- Task Bodies ----- */

/* RTE_TASKBODIES_START */

#define RTE_START_SEC_TASKBODY
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
TASK(task_100ms)
{
   /* Box: Implicit Buffer Initialization begin */
   /* Box: Implicit Buffer Initialization end */
   /* Box: Implicit Buffer Fill begin */
   /* draSimple */
   Rte_GetResource();
   /* Box: DRAinit_sbuf0 begin */
   /* (Data item EnvTemperatureRPP.T) */
   /* There were connected senders. */
   /* Some intra-app connection was found. */
   Rte_ImplicitBufs.isa_1._task_100ms.sbuf0.value = TEnv;
   /* Box: DRAinit_sbuf0 end */
   /* Box: DRAinit_sbuf1 begin */
   /* (Data item TemperatureRPP.T) */
   /* There were connected senders. */
   /* Some intra-app connection was found. */
   Rte_ImplicitBufs.isa_1._task_100ms.sbuf1.value = TPlant;
   /* Box: DRAinit_sbuf1 end */
   /* Box: DRAinit_sbuf2 begin */
   /* (Data item CurrentRPP.I) */
   /* There were connected senders. */
   /* Some intra-app connection was found. */
   Rte_ImplicitBufs.isa_1._task_100ms.sbuf2.value = I;
   /* Box: DRAinit_sbuf2 end */
   Rte_ReleaseResource();
   /* Box: Implicit Buffer Fill end */
   {
      /* Box: SWCI3 begin */
      envRE_func();
      /* Box: SWCI3 end */
   }
   {
      /* Box: SWCI2 begin */
      plantRE_func();
      /* Box: SWCI2 end */
   }
   {
      /* Box: SWCI0 begin */
      controllerRE_func();
      /* Box: SWCI0 end */
   }
   /* Box: Implicit Buffer Flush begin */
   /* Box: WriteBack sbuf0 begin */
   TEnv = Rte_ImplicitBufs.isa_1._task_100ms.sbuf0.value;
   /* Box: WriteBack sbuf0 end */
   /* Box: WriteBack sbuf1 begin */
   TPlant = Rte_ImplicitBufs.isa_1._task_100ms.sbuf1.value;
   /* Box: WriteBack sbuf1 end */
   /* Box: WriteBack sbuf2 begin */
   I = Rte_ImplicitBufs.isa_1._task_100ms.sbuf2.value;
   /* Box: WriteBack sbuf2 end */
   /* Box: Implicit Buffer Flush end */
   TerminateTask();
} /* task_100ms */
#define RTE_STOP_SEC_TASKBODY
#include "MemMap.h" /*lint !e537 permit multiple inclusion */

/* RTE_TASKBODIES_END */

