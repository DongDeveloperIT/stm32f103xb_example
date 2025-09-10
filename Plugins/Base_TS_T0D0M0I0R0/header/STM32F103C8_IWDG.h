#ifndef STM32F103C8_IWDG_H
#define STM32F103C8_IWDG_H

#include "STM32F103C8_COMMON.h"

/** 
  * @brief Independent WATCHDOG
  */

typedef struct
{
  __IO uint32_t KR;           /*!< Key register,                                Address offset: 0x00 */
  __IO uint32_t PR;           /*!< Prescaler register,                          Address offset: 0x04 */
  __IO uint32_t RLR;          /*!< Reload register,                             Address offset: 0x08 */
  __IO uint32_t SR;           /*!< Status register,                             Address offset: 0x0C */
} IWDG_TypeDef;

#define IWDG_BASE             (APB1PERIPH_BASE + 0x00003000UL)

#define IWDG                  ((IWDG_TypeDef *)IWDG_BASE)


#define IWDG_KR_KEY_Pos                     (0U)                               
#define IWDG_KR_KEY_Msk                     (0xFFFFUL << IWDG_KR_KEY_Pos)       /*!< 0x0000FFFF */
#define IWDG_KR_KEY                         IWDG_KR_KEY_Msk                    /*!< Key value (write only, read 0000h) */

#define IWDG_PR_PR_Pos                      (0U)                               
#define IWDG_PR_PR_Msk                      (0x7UL << IWDG_PR_PR_Pos)           /*!< 0x00000007 */
#define IWDG_PR_PR                          IWDG_PR_PR_Msk                     /*!< PR[2:0] (Prescaler divider) */
#define IWDG_PR_PR_0                        (0x1UL << IWDG_PR_PR_Pos)           /*!< 0x00000001 */
#define IWDG_PR_PR_1                        (0x2UL << IWDG_PR_PR_Pos)           /*!< 0x00000002 */
#define IWDG_PR_PR_2                        (0x4UL << IWDG_PR_PR_Pos)           /*!< 0x00000004 */

#define IWDG_RLR_RL_Pos                     (0U)                               
#define IWDG_RLR_RL_Msk                     (0xFFFUL << IWDG_RLR_RL_Pos)        /*!< 0x00000FFF */
#define IWDG_RLR_RL                         IWDG_RLR_RL_Msk                    /*!< Watchdog counter reload value */

#define IWDG_SR_PVU_Pos                     (0U)                               
#define IWDG_SR_PVU_Msk                     (0x1UL << IWDG_SR_PVU_Pos)          /*!< 0x00000001 */
#define IWDG_SR_PVU                         IWDG_SR_PVU_Msk                    /*!< Watchdog prescaler value update */
#define IWDG_SR_RVU_Pos                     (1U)                               
#define IWDG_SR_RVU_Msk                     (0x1UL << IWDG_SR_RVU_Pos)          /*!< 0x00000002 */
#define IWDG_SR_RVU                         IWDG_SR_RVU_Msk                    /*!< Watchdog counter reload value update */

#endif /* STM32F103C8_IWDG_H */
