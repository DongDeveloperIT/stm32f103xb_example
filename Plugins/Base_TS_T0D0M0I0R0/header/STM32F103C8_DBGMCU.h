#ifndef STM32F103C8_DBGMCU_H
#define STM32F103C8_DBGMCU_H

#include "STM32F103C8_COMMON.h"

/** 
  * @brief Debug MCU
  */

typedef struct
{
  __IO uint32_t IDCODE;
  __IO uint32_t CR;
}DBGMCU_TypeDef;

#define DBGMCU_BASE          0xE0042000UL /*!< Debug MCU registers base address */

#define DBGMCU              ((DBGMCU_TypeDef *)DBGMCU_BASE)

#define DBGMCU_IDCODE_DEV_ID_Pos            (0U)                               
#define DBGMCU_IDCODE_DEV_ID_Msk            (0xFFFUL << DBGMCU_IDCODE_DEV_ID_Pos) /*!< 0x00000FFF */
#define DBGMCU_IDCODE_DEV_ID                DBGMCU_IDCODE_DEV_ID_Msk           /*!< Device Identifier */

#define DBGMCU_IDCODE_REV_ID_Pos            (16U)                              
#define DBGMCU_IDCODE_REV_ID_Msk            (0xFFFFUL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0xFFFF0000 */
#define DBGMCU_IDCODE_REV_ID                DBGMCU_IDCODE_REV_ID_Msk           /*!< REV_ID[15:0] bits (Revision Identifier) */
#define DBGMCU_IDCODE_REV_ID_0              (0x0001UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x00010000 */
#define DBGMCU_IDCODE_REV_ID_1              (0x0002UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x00020000 */
#define DBGMCU_IDCODE_REV_ID_2              (0x0004UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x00040000 */
#define DBGMCU_IDCODE_REV_ID_3              (0x0008UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x00080000 */
#define DBGMCU_IDCODE_REV_ID_4              (0x0010UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x00100000 */
#define DBGMCU_IDCODE_REV_ID_5              (0x0020UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x00200000 */
#define DBGMCU_IDCODE_REV_ID_6              (0x0040UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x00400000 */
#define DBGMCU_IDCODE_REV_ID_7              (0x0080UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x00800000 */
#define DBGMCU_IDCODE_REV_ID_8              (0x0100UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x01000000 */
#define DBGMCU_IDCODE_REV_ID_9              (0x0200UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x02000000 */
#define DBGMCU_IDCODE_REV_ID_10             (0x0400UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x04000000 */
#define DBGMCU_IDCODE_REV_ID_11             (0x0800UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x08000000 */
#define DBGMCU_IDCODE_REV_ID_12             (0x1000UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x10000000 */
#define DBGMCU_IDCODE_REV_ID_13             (0x2000UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x20000000 */
#define DBGMCU_IDCODE_REV_ID_14             (0x4000UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x40000000 */
#define DBGMCU_IDCODE_REV_ID_15             (0x8000UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x80000000 */

#define DBGMCU_CR_DBG_SLEEP_Pos             (0U)                               
#define DBGMCU_CR_DBG_SLEEP_Msk             (0x1UL << DBGMCU_CR_DBG_SLEEP_Pos)  /*!< 0x00000001 */
#define DBGMCU_CR_DBG_SLEEP                 DBGMCU_CR_DBG_SLEEP_Msk            /*!< Debug Sleep Mode */
#define DBGMCU_CR_DBG_STOP_Pos              (1U)                               
#define DBGMCU_CR_DBG_STOP_Msk              (0x1UL << DBGMCU_CR_DBG_STOP_Pos)   /*!< 0x00000002 */
#define DBGMCU_CR_DBG_STOP                  DBGMCU_CR_DBG_STOP_Msk             /*!< Debug Stop Mode */
#define DBGMCU_CR_DBG_STANDBY_Pos           (2U)                               
#define DBGMCU_CR_DBG_STANDBY_Msk           (0x1UL << DBGMCU_CR_DBG_STANDBY_Pos) /*!< 0x00000004 */
#define DBGMCU_CR_DBG_STANDBY               DBGMCU_CR_DBG_STANDBY_Msk          /*!< Debug Standby mode */
#define DBGMCU_CR_TRACE_IOEN_Pos            (5U)                               
#define DBGMCU_CR_TRACE_IOEN_Msk            (0x1UL << DBGMCU_CR_TRACE_IOEN_Pos) /*!< 0x00000020 */
#define DBGMCU_CR_TRACE_IOEN                DBGMCU_CR_TRACE_IOEN_Msk           /*!< Trace Pin Assignment Control */

#define DBGMCU_CR_TRACE_MODE_Pos            (6U)                               
#define DBGMCU_CR_TRACE_MODE_Msk            (0x3UL << DBGMCU_CR_TRACE_MODE_Pos) /*!< 0x000000C0 */
#define DBGMCU_CR_TRACE_MODE                DBGMCU_CR_TRACE_MODE_Msk           /*!< TRACE_MODE[1:0] bits (Trace Pin Assignment Control) */
#define DBGMCU_CR_TRACE_MODE_0              (0x1UL << DBGMCU_CR_TRACE_MODE_Pos) /*!< 0x00000040 */
#define DBGMCU_CR_TRACE_MODE_1              (0x2UL << DBGMCU_CR_TRACE_MODE_Pos) /*!< 0x00000080 */

#define DBGMCU_CR_DBG_IWDG_STOP_Pos         (8U)                               
#define DBGMCU_CR_DBG_IWDG_STOP_Msk         (0x1UL << DBGMCU_CR_DBG_IWDG_STOP_Pos) /*!< 0x00000100 */
#define DBGMCU_CR_DBG_IWDG_STOP             DBGMCU_CR_DBG_IWDG_STOP_Msk        /*!< Debug Independent Watchdog stopped when Core is halted */
#define DBGMCU_CR_DBG_WWDG_STOP_Pos         (9U)                               
#define DBGMCU_CR_DBG_WWDG_STOP_Msk         (0x1UL << DBGMCU_CR_DBG_WWDG_STOP_Pos) /*!< 0x00000200 */
#define DBGMCU_CR_DBG_WWDG_STOP             DBGMCU_CR_DBG_WWDG_STOP_Msk        /*!< Debug Window Watchdog stopped when Core is halted */
#define DBGMCU_CR_DBG_TIM1_STOP_Pos         (10U)                              
#define DBGMCU_CR_DBG_TIM1_STOP_Msk         (0x1UL << DBGMCU_CR_DBG_TIM1_STOP_Pos) /*!< 0x00000400 */
#define DBGMCU_CR_DBG_TIM1_STOP             DBGMCU_CR_DBG_TIM1_STOP_Msk        /*!< TIM1 counter stopped when core is halted */
#define DBGMCU_CR_DBG_TIM2_STOP_Pos         (11U)                              
#define DBGMCU_CR_DBG_TIM2_STOP_Msk         (0x1UL << DBGMCU_CR_DBG_TIM2_STOP_Pos) /*!< 0x00000800 */
#define DBGMCU_CR_DBG_TIM2_STOP             DBGMCU_CR_DBG_TIM2_STOP_Msk        /*!< TIM2 counter stopped when core is halted */
#define DBGMCU_CR_DBG_TIM3_STOP_Pos         (12U)                              
#define DBGMCU_CR_DBG_TIM3_STOP_Msk         (0x1UL << DBGMCU_CR_DBG_TIM3_STOP_Pos) /*!< 0x00001000 */
#define DBGMCU_CR_DBG_TIM3_STOP             DBGMCU_CR_DBG_TIM3_STOP_Msk        /*!< TIM3 counter stopped when core is halted */
#define DBGMCU_CR_DBG_TIM4_STOP_Pos         (13U)                              
#define DBGMCU_CR_DBG_TIM4_STOP_Msk         (0x1UL << DBGMCU_CR_DBG_TIM4_STOP_Pos) /*!< 0x00002000 */
#define DBGMCU_CR_DBG_TIM4_STOP             DBGMCU_CR_DBG_TIM4_STOP_Msk        /*!< TIM4 counter stopped when core is halted */
#define DBGMCU_CR_DBG_CAN1_STOP_Pos         (14U)                              
#define DBGMCU_CR_DBG_CAN1_STOP_Msk         (0x1UL << DBGMCU_CR_DBG_CAN1_STOP_Pos) /*!< 0x00004000 */
#define DBGMCU_CR_DBG_CAN1_STOP             DBGMCU_CR_DBG_CAN1_STOP_Msk        /*!< Debug CAN1 stopped when Core is halted */
#define DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT_Pos (15U)                             
#define DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT_Msk (0x1UL << DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT_Pos) /*!< 0x00008000 */
#define DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT    DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT_Msk /*!< SMBUS timeout mode stopped when Core is halted */
#define DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT_Pos (16U)                             
#define DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT_Msk (0x1UL << DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT_Pos) /*!< 0x00010000 */
#define DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT    DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT_Msk /*!< SMBUS timeout mode stopped when Core is halted */

#endif /* STM32F103C8_DBGMCU_H */
