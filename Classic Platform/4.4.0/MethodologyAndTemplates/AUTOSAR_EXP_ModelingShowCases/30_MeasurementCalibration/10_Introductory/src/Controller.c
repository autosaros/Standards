#include "Rte_Controller.h"

#define ControllerRE_START_SEC_CODE
#include "Controller_MemMap.h"

FUNC (void, Controller_CODE) controllerRE_func (void)
{
   /* read input, define output variable                          */
   float32 lT        = Rte_IRead_ControllerRE_TemperatureRPP_T();
   float32 lI;

   /* retrieve internal state: Sum of errors until last time step */
   float32 lESum     = Rte_IrvIRead_ControllerRE_ESum();

   /* read parameters                                             */
   float32 lDt       = Rte_Prm_DtRPP_Dt();
   float32 lSetPoint = Rte_Prm_ControllerParamsRPP_ctrl_SetPoint();
   float32 lK        = Rte_Prm_ControllerParamsRPP_ctrl_K();
   float32 lMaxESum  = Rte_Prm_ControllerParamsRPP_ctrl_MaxESum();

    /* store current error in PIM to make it measurable           */
   *Rte_Pim_E() = lSetPoint - lT;

    /* update eSum                                                */
   lESum += *Rte_Pim_E() * lDt;

   /* limit   eSum                                                */
   if(lESum > lMaxESum) { lESum = lMaxESum; }
   if(lESum < 0)        { lESum = 0;        }

   /* Controller equation: Calculation of manipulated variable    */
   lI = lESum * lK;

   /* Store internal state                                        */
   Rte_IrvIWrite_ControllerRE_ESum(lESum);

   /* Write output of controller                                  */
   Rte_IWrite_ControllerRE_CurrentPPP_I(lI);
}
#define ControllerRE_STOP_SEC_CODE
#include "Controller_MemMap.h"
