#ifndef STM32F103C8_WWDG_H
#define STM32F103C8_WWDG_H

#include "STM32F103C8_COMMON.h"



/** 
  * @brief Window WATCHDOG
  */

typedef struct
{
  __IO uint32_t CR;   /*!< WWDG Control register,       Address offset: 0x00 */
  __IO uint32_t CFR;  /*!< WWDG Configuration register, Address offset: 0x04 */
  __IO uint32_t SR;   /*!< WWDG Status register,        Address offset: 0x08 */
} WWDG_TypeDef;

#define WWDG_BASE             (APB1PERIPH_BASE + 0x00002C00UL)

#define WWDG                  ((WWDG_TypeDef *)WWDG_BASE)

#define WWDG_CR_T_Pos                       (0U)                               
#define WWDG_CR_T_Msk                       (0x7FUL << WWDG_CR_T_Pos)           /*!< 0x0000007F */
#define WWDG_CR_T                           WWDG_CR_T_Msk                      /*!< T[6:0] bits (7-Bit counter (MSB to LSB)) */
#define WWDG_CR_T_0                         (0x01UL << WWDG_CR_T_Pos)           /*!< 0x00000001 */
#define WWDG_CR_T_1                         (0x02UL << WWDG_CR_T_Pos)           /*!< 0x00000002 */
#define WWDG_CR_T_2                         (0x04UL << WWDG_CR_T_Pos)           /*!< 0x00000004 */
#define WWDG_CR_T_3                         (0x08UL << WWDG_CR_T_Pos)           /*!< 0x00000008 */
#define WWDG_CR_T_4                         (0x10UL << WWDG_CR_T_Pos)           /*!< 0x00000010 */
#define WWDG_CR_T_5                         (0x20UL << WWDG_CR_T_Pos)           /*!< 0x00000020 */
#define WWDG_CR_T_6                         (0x40UL << WWDG_CR_T_Pos)           /*!< 0x00000040 */

#define WWDG_CR_WDGA_Pos                    (7U)                               
#define WWDG_CR_WDGA_Msk                    (0x1UL << WWDG_CR_WDGA_Pos)         /*!< 0x00000080 */
#define WWDG_CR_WDGA                        WWDG_CR_WDGA_Msk                   /*!< Activation bit */

#define WWDG_CFR_W_Pos                      (0U)                               
#define WWDG_CFR_W_Msk                      (0x7FUL << WWDG_CFR_W_Pos)          /*!< 0x0000007F */
#define WWDG_CFR_W                          WWDG_CFR_W_Msk                     /*!< W[6:0] bits (7-bit window value) */
#define WWDG_CFR_W_0                        (0x01UL << WWDG_CFR_W_Pos)          /*!< 0x00000001 */
#define WWDG_CFR_W_1                        (0x02UL << WWDG_CFR_W_Pos)          /*!< 0x00000002 */
#define WWDG_CFR_W_2                        (0x04UL << WWDG_CFR_W_Pos)          /*!< 0x00000004 */
#define WWDG_CFR_W_3                        (0x08UL << WWDG_CFR_W_Pos)          /*!< 0x00000008 */
#define WWDG_CFR_W_4                        (0x10UL << WWDG_CFR_W_Pos)          /*!< 0x00000010 */
#define WWDG_CFR_W_5                        (0x20UL << WWDG_CFR_W_Pos)          /*!< 0x00000020 */
#define WWDG_CFR_W_6                        (0x40UL << WWDG_CFR_W_Pos)          /*!< 0x00000040 */

#define WWDG_CFR_WDGTB_Pos                  (7U)                               
#define WWDG_CFR_WDGTB_Msk                  (0x3UL << WWDG_CFR_WDGTB_Pos)       /*!< 0x00000180 */
#define WWDG_CFR_WDGTB                      WWDG_CFR_WDGTB_Msk                 /*!< WDGTB[1:0] bits (Timer Base) */
#define WWDG_CFR_WDGTB_0                    (0x1UL << WWDG_CFR_WDGTB_Pos)       /*!< 0x00000080 */
#define WWDG_CFR_WDGTB_1                    (0x2UL << WWDG_CFR_WDGTB_Pos)       /*!< 0x00000100 */

#define WWDG_CFR_EWI_Pos                    (9U)                               
#define WWDG_CFR_EWI_Msk                    (0x1UL << WWDG_CFR_EWI_Pos)         /*!< 0x00000200 */
#define WWDG_CFR_EWI                        WWDG_CFR_EWI_Msk                   /*!< Early Wakeup Interrupt */

#define WWDG_SR_EWIF_Pos                    (0U)                               
#define WWDG_SR_EWIF_Msk                    (0x1UL << WWDG_SR_EWIF_Pos)         /*!< 0x00000001 */
#define WWDG_SR_EWIF                        WWDG_SR_EWIF_Msk                   /*!< Early Wakeup Interrupt Flag */

#endif /* STM32F103C8_WWDG_H */
