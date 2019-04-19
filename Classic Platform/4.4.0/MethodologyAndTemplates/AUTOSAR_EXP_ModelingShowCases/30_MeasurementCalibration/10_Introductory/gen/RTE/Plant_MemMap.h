/** @file     Plant_MemMap.h
  * 
  * @brief    RTE Sample SWC MemMap file
  * 
  */

#if defined (START_WITH_IF)
#elif defined(Plant_START_SEC_CODE)
#undef Plant_START_SEC_CODE
#define RTE_START_SEC_APPL_CODE
#elif defined(Plant_STOP_SEC_CODE)
#undef Plant_STOP_SEC_CODE
#define RTE_STOP_SEC_APPL_CODE

#endif /* START_WITH_IF */

#include "MemMap.h"

