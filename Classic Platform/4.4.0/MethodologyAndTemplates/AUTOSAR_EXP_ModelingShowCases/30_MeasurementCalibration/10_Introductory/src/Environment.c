#include "Rte_Environment.h"

#define envRE_START_SEC_CODE
#include "Environment_MemMap.h"

FUNC (void, Environment_CODE) envRE_func (void)
{
   /* read parameters for simulation of the temperature profile   */
   float32 lLowLimit   = Rte_Prm_EnvParamsRPP_env_TLowLimit();
   float32 lStepSize   = Rte_Prm_EnvParamsRPP_env_TStepSize();

   /* retrieve internal state                                     */
   uint32  lSeed     = Rte_IrvIRead_envRE_Seed();
   float32 lTEnv     = Rte_IrvIRead_envRE_TEnv();
   float32 direction = (float32)(lSeed % 3) - 1.0;

   /* calc high limit with parameter, store for measurement       */
   *Rte_Pim_THighLimit()
        = lLowLimit + Rte_Prm_EnvParamsRPP_env_THighLimitDistance();

   /*  update state for pseudo random number generation           */
   lSeed = (8253729 * lSeed + 2396403);

   /* calculate environment temperature                           */
   lTEnv += lStepSize * direction;

   /* saturating environment temperature at the bounds            */
   if( lTEnv < lLowLimit)  { lTEnv = lLowLimit; }
   if( lTEnv > *Rte_Pim_THighLimit())
                           { lTEnv = *Rte_Pim_THighLimit(); }

   /* Store internal state                                        */
   Rte_IrvIWrite_envRE_Seed(lSeed);
   Rte_IrvIWrite_envRE_TEnv(lTEnv);

   /* write output                                                */
   Rte_IWrite_envRE_EnvTemperaturePPP_T(lTEnv);
}
#define envRE_STOP_SEC_CODE
#include "Environment_MemMap.h"
