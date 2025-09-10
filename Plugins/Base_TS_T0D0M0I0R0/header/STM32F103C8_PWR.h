#ifndef STM32F103C8_PWR_H
#define STM32F103C8_PWR_H

#include "STM32F103C8_COMMON.h"

/** 
  * @brief Power Control
  */

typedef struct
{
  __IO uint32_t CR;
  __IO uint32_t CSR;
} PWR_TypeDef;

#define PWR_BASE              (APB1PERIPH_BASE + 0x00007000UL)

#define PWR                   ((PWR_TypeDef *)PWR_BASE)


#define PWR_CR_LPDS_Pos                     (0U)                               
#define PWR_CR_LPDS_Msk                     (0x1UL << PWR_CR_LPDS_Pos)          /*!< 0x00000001 */
#define PWR_CR_LPDS                         PWR_CR_LPDS_Msk                    /*!< Low-Power Deepsleep */
#define PWR_CR_PDDS_Pos                     (1U)                               
#define PWR_CR_PDDS_Msk                     (0x1UL << PWR_CR_PDDS_Pos)          /*!< 0x00000002 */
#define PWR_CR_PDDS                         PWR_CR_PDDS_Msk                    /*!< Power Down Deepsleep */
#define PWR_CR_CWUF_Pos                     (2U)                               
#define PWR_CR_CWUF_Msk                     (0x1UL << PWR_CR_CWUF_Pos)          /*!< 0x00000004 */
#define PWR_CR_CWUF                         PWR_CR_CWUF_Msk                    /*!< Clear Wakeup Flag */
#define PWR_CR_CSBF_Pos                     (3U)                               
#define PWR_CR_CSBF_Msk                     (0x1UL << PWR_CR_CSBF_Pos)          /*!< 0x00000008 */
#define PWR_CR_CSBF                         PWR_CR_CSBF_Msk                    /*!< Clear Standby Flag */
#define PWR_CR_PVDE_Pos                     (4U)                               
#define PWR_CR_PVDE_Msk                     (0x1UL << PWR_CR_PVDE_Pos)          /*!< 0x00000010 */
#define PWR_CR_PVDE                         PWR_CR_PVDE_Msk                    /*!< Power Voltage Detector Enable */

#define PWR_CR_PLS_Pos                      (5U)                               
#define PWR_CR_PLS_Msk                      (0x7UL << PWR_CR_PLS_Pos)           /*!< 0x000000E0 */
#define PWR_CR_PLS                          PWR_CR_PLS_Msk                     /*!< PLS[2:0] bits (PVD Level Selection) */
#define PWR_CR_PLS_0                        (0x1UL << PWR_CR_PLS_Pos)           /*!< 0x00000020 */
#define PWR_CR_PLS_1                        (0x2UL << PWR_CR_PLS_Pos)           /*!< 0x00000040 */
#define PWR_CR_PLS_2                        (0x4UL << PWR_CR_PLS_Pos)           /*!< 0x00000080 */

#define PWR_CR_PLS_LEV0                      0x00000000U                           /*!< PVD level 2.2V */
#define PWR_CR_PLS_LEV1                      0x00000020U                           /*!< PVD level 2.3V */
#define PWR_CR_PLS_LEV2                      0x00000040U                           /*!< PVD level 2.4V */
#define PWR_CR_PLS_LEV3                      0x00000060U                           /*!< PVD level 2.5V */
#define PWR_CR_PLS_LEV4                      0x00000080U                           /*!< PVD level 2.6V */
#define PWR_CR_PLS_LEV5                      0x000000A0U                           /*!< PVD level 2.7V */
#define PWR_CR_PLS_LEV6                      0x000000C0U                           /*!< PVD level 2.8V */
#define PWR_CR_PLS_LEV7                      0x000000E0U                           /*!< PVD level 2.9V */

#define PWR_CR_PLS_2V2                       PWR_CR_PLS_LEV0
#define PWR_CR_PLS_2V3                       PWR_CR_PLS_LEV1
#define PWR_CR_PLS_2V4                       PWR_CR_PLS_LEV2
#define PWR_CR_PLS_2V5                       PWR_CR_PLS_LEV3
#define PWR_CR_PLS_2V6                       PWR_CR_PLS_LEV4
#define PWR_CR_PLS_2V7                       PWR_CR_PLS_LEV5
#define PWR_CR_PLS_2V8                       PWR_CR_PLS_LEV6
#define PWR_CR_PLS_2V9                       PWR_CR_PLS_LEV7

#define PWR_CR_DBP_Pos                      (8U)                               
#define PWR_CR_DBP_Msk                      (0x1UL << PWR_CR_DBP_Pos)           /*!< 0x00000100 */
#define PWR_CR_DBP                          PWR_CR_DBP_Msk                     /*!< Disable Backup Domain write protection */

#define PWR_CSR_WUF_Pos                     (0U)                               
#define PWR_CSR_WUF_Msk                     (0x1UL << PWR_CSR_WUF_Pos)          /*!< 0x00000001 */
#define PWR_CSR_WUF                         PWR_CSR_WUF_Msk                    /*!< Wakeup Flag */
#define PWR_CSR_SBF_Pos                     (1U)                               
#define PWR_CSR_SBF_Msk                     (0x1UL << PWR_CSR_SBF_Pos)          /*!< 0x00000002 */
#define PWR_CSR_SBF                         PWR_CSR_SBF_Msk                    /*!< Standby Flag */
#define PWR_CSR_PVDO_Pos                    (2U)                               
#define PWR_CSR_PVDO_Msk                    (0x1UL << PWR_CSR_PVDO_Pos)         /*!< 0x00000004 */
#define PWR_CSR_PVDO                        PWR_CSR_PVDO_Msk                   /*!< PVD Output */
#define PWR_CSR_EWUP_Pos                    (8U)                               
#define PWR_CSR_EWUP_Msk                    (0x1UL << PWR_CSR_EWUP_Pos)         /*!< 0x00000100 */
#define PWR_CSR_EWUP                        PWR_CSR_EWUP_Msk                   /*!< Enable WKUP pin */

#endif /* STM32F103C8_PWR_H */
