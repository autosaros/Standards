#include "Rte_Plant.h"

#define plantRE_START_SEC_CODE                   
#include "Plant_MemMap.h"

FUNC (void, Plant_CODE) plantRE_func (void)
{
   /* read input                                                  */
   float32 lTenv    = Rte_IRead_plantRE_EnvTemperatureRPP_T();
   float32 lI       = Rte_IRead_plantRE_CurrentRPP_I();

   /* retrieve internal state                                     */
   float32 lQPlant  = Rte_IrvIRead_plantRE_QPlant();

   /* read parameters                                             */
   float32 lDt      = Rte_Prm_DtRPP_Dt();
   float32 lEFactor = Rte_Prm_PlantParamsRPP_plnt_EnvFactor();
   float32 lHFactor = Rte_Prm_PlantParamsRPP_plnt_HeaterFactor();

   /* heat capacity of 1 assumed                                  */
   float32 lTPlant     = lQPlant;

    /* calculate heat flows, store in PIM to make them measurable */
   *Rte_Pim_QEnv()     = (lTenv - lTPlant) * lEFactor * lDt;
   *Rte_Pim_QHeater()  = lI * lHFactor * lDt;

   /* update heat quantity in plant                               */
   lQPlant  = lQPlant + *Rte_Pim_QHeater() + *Rte_Pim_QEnv();

   /* limit heat quantity to absolute zero                        */
   lQPlant  = lQPlant < 0 ? 0 : lQPlant;

   /* heat capacity of 1 assumed                                  */
   lTPlant  = lQPlant;

   /* store internal state of plant: stored heat quantity         */
   Rte_IrvIWrite_plantRE_QPlant(lQPlant);

   /* Write output of plant: temerature of plant                  */
   Rte_IWrite_plantRE_PlantTemperaturePPP_T(lTPlant);
}
#define plantRE_STOP_SEC_CODE                       
#include "Plant_MemMap.h"
