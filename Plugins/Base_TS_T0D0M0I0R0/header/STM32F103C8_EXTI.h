#ifndef STM32F103C8_EXTI_H
#define STM32F103C8_EXTI_H

#include "STM32F103C8_COMMON.h"

/** 
  * @brief External Interrupt/Event Controller
  */

typedef struct
{
  __IO uint32_t IMR;
  __IO uint32_t EMR;
  __IO uint32_t RTSR;
  __IO uint32_t FTSR;
  __IO uint32_t SWIER;
  __IO uint32_t PR;
} EXTI_TypeDef;

#define EXTI_BASE             (APB2PERIPH_BASE + 0x00000400UL)

#define EXTI                  ((EXTI_TypeDef *)EXTI_BASE)

#define EXTI_IMR_MR0_Pos                    (0U)                               
#define EXTI_IMR_MR0_Msk                    (0x1UL << EXTI_IMR_MR0_Pos)         /*!< 0x00000001 */
#define EXTI_IMR_MR0                        EXTI_IMR_MR0_Msk                   /*!< Interrupt Mask on line 0 */
#define EXTI_IMR_MR1_Pos                    (1U)                               
#define EXTI_IMR_MR1_Msk                    (0x1UL << EXTI_IMR_MR1_Pos)         /*!< 0x00000002 */
#define EXTI_IMR_MR1                        EXTI_IMR_MR1_Msk                   /*!< Interrupt Mask on line 1 */
#define EXTI_IMR_MR2_Pos                    (2U)                               
#define EXTI_IMR_MR2_Msk                    (0x1UL << EXTI_IMR_MR2_Pos)         /*!< 0x00000004 */
#define EXTI_IMR_MR2                        EXTI_IMR_MR2_Msk                   /*!< Interrupt Mask on line 2 */
#define EXTI_IMR_MR3_Pos                    (3U)                               
#define EXTI_IMR_MR3_Msk                    (0x1UL << EXTI_IMR_MR3_Pos)         /*!< 0x00000008 */
#define EXTI_IMR_MR3                        EXTI_IMR_MR3_Msk                   /*!< Interrupt Mask on line 3 */
#define EXTI_IMR_MR4_Pos                    (4U)                               
#define EXTI_IMR_MR4_Msk                    (0x1UL << EXTI_IMR_MR4_Pos)         /*!< 0x00000010 */
#define EXTI_IMR_MR4                        EXTI_IMR_MR4_Msk                   /*!< Interrupt Mask on line 4 */
#define EXTI_IMR_MR5_Pos                    (5U)                               
#define EXTI_IMR_MR5_Msk                    (0x1UL << EXTI_IMR_MR5_Pos)         /*!< 0x00000020 */
#define EXTI_IMR_MR5                        EXTI_IMR_MR5_Msk                   /*!< Interrupt Mask on line 5 */
#define EXTI_IMR_MR6_Pos                    (6U)                               
#define EXTI_IMR_MR6_Msk                    (0x1UL << EXTI_IMR_MR6_Pos)         /*!< 0x00000040 */
#define EXTI_IMR_MR6                        EXTI_IMR_MR6_Msk                   /*!< Interrupt Mask on line 6 */
#define EXTI_IMR_MR7_Pos                    (7U)                               
#define EXTI_IMR_MR7_Msk                    (0x1UL << EXTI_IMR_MR7_Pos)         /*!< 0x00000080 */
#define EXTI_IMR_MR7                        EXTI_IMR_MR7_Msk                   /*!< Interrupt Mask on line 7 */
#define EXTI_IMR_MR8_Pos                    (8U)                               
#define EXTI_IMR_MR8_Msk                    (0x1UL << EXTI_IMR_MR8_Pos)         /*!< 0x00000100 */
#define EXTI_IMR_MR8                        EXTI_IMR_MR8_Msk                   /*!< Interrupt Mask on line 8 */
#define EXTI_IMR_MR9_Pos                    (9U)                               
#define EXTI_IMR_MR9_Msk                    (0x1UL << EXTI_IMR_MR9_Pos)         /*!< 0x00000200 */
#define EXTI_IMR_MR9                        EXTI_IMR_MR9_Msk                   /*!< Interrupt Mask on line 9 */
#define EXTI_IMR_MR10_Pos                   (10U)                              
#define EXTI_IMR_MR10_Msk                   (0x1UL << EXTI_IMR_MR10_Pos)        /*!< 0x00000400 */
#define EXTI_IMR_MR10                       EXTI_IMR_MR10_Msk                  /*!< Interrupt Mask on line 10 */
#define EXTI_IMR_MR11_Pos                   (11U)                              
#define EXTI_IMR_MR11_Msk                   (0x1UL << EXTI_IMR_MR11_Pos)        /*!< 0x00000800 */
#define EXTI_IMR_MR11                       EXTI_IMR_MR11_Msk                  /*!< Interrupt Mask on line 11 */
#define EXTI_IMR_MR12_Pos                   (12U)                              
#define EXTI_IMR_MR12_Msk                   (0x1UL << EXTI_IMR_MR12_Pos)        /*!< 0x00001000 */
#define EXTI_IMR_MR12                       EXTI_IMR_MR12_Msk                  /*!< Interrupt Mask on line 12 */
#define EXTI_IMR_MR13_Pos                   (13U)                              
#define EXTI_IMR_MR13_Msk                   (0x1UL << EXTI_IMR_MR13_Pos)        /*!< 0x00002000 */
#define EXTI_IMR_MR13                       EXTI_IMR_MR13_Msk                  /*!< Interrupt Mask on line 13 */
#define EXTI_IMR_MR14_Pos                   (14U)                              
#define EXTI_IMR_MR14_Msk                   (0x1UL << EXTI_IMR_MR14_Pos)        /*!< 0x00004000 */
#define EXTI_IMR_MR14                       EXTI_IMR_MR14_Msk                  /*!< Interrupt Mask on line 14 */
#define EXTI_IMR_MR15_Pos                   (15U)                              
#define EXTI_IMR_MR15_Msk                   (0x1UL << EXTI_IMR_MR15_Pos)        /*!< 0x00008000 */
#define EXTI_IMR_MR15                       EXTI_IMR_MR15_Msk                  /*!< Interrupt Mask on line 15 */
#define EXTI_IMR_MR16_Pos                   (16U)                              
#define EXTI_IMR_MR16_Msk                   (0x1UL << EXTI_IMR_MR16_Pos)        /*!< 0x00010000 */
#define EXTI_IMR_MR16                       EXTI_IMR_MR16_Msk                  /*!< Interrupt Mask on line 16 */
#define EXTI_IMR_MR17_Pos                   (17U)                              
#define EXTI_IMR_MR17_Msk                   (0x1UL << EXTI_IMR_MR17_Pos)        /*!< 0x00020000 */
#define EXTI_IMR_MR17                       EXTI_IMR_MR17_Msk                  /*!< Interrupt Mask on line 17 */
#define EXTI_IMR_MR18_Pos                   (18U)                              
#define EXTI_IMR_MR18_Msk                   (0x1UL << EXTI_IMR_MR18_Pos)        /*!< 0x00040000 */
#define EXTI_IMR_MR18                       EXTI_IMR_MR18_Msk                  /*!< Interrupt Mask on line 18 */

#define EXTI_EMR_MR0_Pos                    (0U)                               
#define EXTI_EMR_MR0_Msk                    (0x1UL << EXTI_EMR_MR0_Pos)         /*!< 0x00000001 */
#define EXTI_EMR_MR0                        EXTI_EMR_MR0_Msk                   /*!< Event Mask on line 0 */
#define EXTI_EMR_MR1_Pos                    (1U)                               
#define EXTI_EMR_MR1_Msk                    (0x1UL << EXTI_EMR_MR1_Pos)         /*!< 0x00000002 */
#define EXTI_EMR_MR1                        EXTI_EMR_MR1_Msk                   /*!< Event Mask on line 1 */
#define EXTI_EMR_MR2_Pos                    (2U)                               
#define EXTI_EMR_MR2_Msk                    (0x1UL << EXTI_EMR_MR2_Pos)         /*!< 0x00000004 */
#define EXTI_EMR_MR2                        EXTI_EMR_MR2_Msk                   /*!< Event Mask on line 2 */
#define EXTI_EMR_MR3_Pos                    (3U)                               
#define EXTI_EMR_MR3_Msk                    (0x1UL << EXTI_EMR_MR3_Pos)         /*!< 0x00000008 */
#define EXTI_EMR_MR3                        EXTI_EMR_MR3_Msk                   /*!< Event Mask on line 3 */
#define EXTI_EMR_MR4_Pos                    (4U)                               
#define EXTI_EMR_MR4_Msk                    (0x1UL << EXTI_EMR_MR4_Pos)         /*!< 0x00000010 */
#define EXTI_EMR_MR4                        EXTI_EMR_MR4_Msk                   /*!< Event Mask on line 4 */
#define EXTI_EMR_MR5_Pos                    (5U)                               
#define EXTI_EMR_MR5_Msk                    (0x1UL << EXTI_EMR_MR5_Pos)         /*!< 0x00000020 */
#define EXTI_EMR_MR5                        EXTI_EMR_MR5_Msk                   /*!< Event Mask on line 5 */
#define EXTI_EMR_MR6_Pos                    (6U)                               
#define EXTI_EMR_MR6_Msk                    (0x1UL << EXTI_EMR_MR6_Pos)         /*!< 0x00000040 */
#define EXTI_EMR_MR6                        EXTI_EMR_MR6_Msk                   /*!< Event Mask on line 6 */
#define EXTI_EMR_MR7_Pos                    (7U)                               
#define EXTI_EMR_MR7_Msk                    (0x1UL << EXTI_EMR_MR7_Pos)         /*!< 0x00000080 */
#define EXTI_EMR_MR7                        EXTI_EMR_MR7_Msk                   /*!< Event Mask on line 7 */
#define EXTI_EMR_MR8_Pos                    (8U)                               
#define EXTI_EMR_MR8_Msk                    (0x1UL << EXTI_EMR_MR8_Pos)         /*!< 0x00000100 */
#define EXTI_EMR_MR8                        EXTI_EMR_MR8_Msk                   /*!< Event Mask on line 8 */
#define EXTI_EMR_MR9_Pos                    (9U)                               
#define EXTI_EMR_MR9_Msk                    (0x1UL << EXTI_EMR_MR9_Pos)         /*!< 0x00000200 */
#define EXTI_EMR_MR9                        EXTI_EMR_MR9_Msk                   /*!< Event Mask on line 9 */
#define EXTI_EMR_MR10_Pos                   (10U)                              
#define EXTI_EMR_MR10_Msk                   (0x1UL << EXTI_EMR_MR10_Pos)        /*!< 0x00000400 */
#define EXTI_EMR_MR10                       EXTI_EMR_MR10_Msk                  /*!< Event Mask on line 10 */
#define EXTI_EMR_MR11_Pos                   (11U)                              
#define EXTI_EMR_MR11_Msk                   (0x1UL << EXTI_EMR_MR11_Pos)        /*!< 0x00000800 */
#define EXTI_EMR_MR11                       EXTI_EMR_MR11_Msk                  /*!< Event Mask on line 11 */
#define EXTI_EMR_MR12_Pos                   (12U)                              
#define EXTI_EMR_MR12_Msk                   (0x1UL << EXTI_EMR_MR12_Pos)        /*!< 0x00001000 */
#define EXTI_EMR_MR12                       EXTI_EMR_MR12_Msk                  /*!< Event Mask on line 12 */
#define EXTI_EMR_MR13_Pos                   (13U)                              
#define EXTI_EMR_MR13_Msk                   (0x1UL << EXTI_EMR_MR13_Pos)        /*!< 0x00002000 */
#define EXTI_EMR_MR13                       EXTI_EMR_MR13_Msk                  /*!< Event Mask on line 13 */
#define EXTI_EMR_MR14_Pos                   (14U)                              
#define EXTI_EMR_MR14_Msk                   (0x1UL << EXTI_EMR_MR14_Pos)        /*!< 0x00004000 */
#define EXTI_EMR_MR14                       EXTI_EMR_MR14_Msk                  /*!< Event Mask on line 14 */
#define EXTI_EMR_MR15_Pos                   (15U)                              
#define EXTI_EMR_MR15_Msk                   (0x1UL << EXTI_EMR_MR15_Pos)        /*!< 0x00008000 */
#define EXTI_EMR_MR15                       EXTI_EMR_MR15_Msk                  /*!< Event Mask on line 15 */
#define EXTI_EMR_MR16_Pos                   (16U)                              
#define EXTI_EMR_MR16_Msk                   (0x1UL << EXTI_EMR_MR16_Pos)        /*!< 0x00010000 */
#define EXTI_EMR_MR16                       EXTI_EMR_MR16_Msk                  /*!< Event Mask on line 16 */
#define EXTI_EMR_MR17_Pos                   (17U)                              
#define EXTI_EMR_MR17_Msk                   (0x1UL << EXTI_EMR_MR17_Pos)        /*!< 0x00020000 */
#define EXTI_EMR_MR17                       EXTI_EMR_MR17_Msk                  /*!< Event Mask on line 17 */
#define EXTI_EMR_MR18_Pos                   (18U)                              
#define EXTI_EMR_MR18_Msk                   (0x1UL << EXTI_EMR_MR18_Pos)        /*!< 0x00040000 */
#define EXTI_EMR_MR18                       EXTI_EMR_MR18_Msk                  /*!< Event Mask on line 18 */

#define EXTI_RTSR_TR0_Pos                   (0U)                               
#define EXTI_RTSR_TR0_Msk                   (0x1UL << EXTI_RTSR_TR0_Pos)        /*!< 0x00000001 */
#define EXTI_RTSR_TR0                       EXTI_RTSR_TR0_Msk                  /*!< Rising trigger event configuration bit of line 0 */
#define EXTI_RTSR_TR1_Pos                   (1U)                               
#define EXTI_RTSR_TR1_Msk                   (0x1UL << EXTI_RTSR_TR1_Pos)        /*!< 0x00000002 */
#define EXTI_RTSR_TR1                       EXTI_RTSR_TR1_Msk                  /*!< Rising trigger event configuration bit of line 1 */
#define EXTI_RTSR_TR2_Pos                   (2U)                               
#define EXTI_RTSR_TR2_Msk                   (0x1UL << EXTI_RTSR_TR2_Pos)        /*!< 0x00000004 */
#define EXTI_RTSR_TR2                       EXTI_RTSR_TR2_Msk                  /*!< Rising trigger event configuration bit of line 2 */
#define EXTI_RTSR_TR3_Pos                   (3U)                               
#define EXTI_RTSR_TR3_Msk                   (0x1UL << EXTI_RTSR_TR3_Pos)        /*!< 0x00000008 */
#define EXTI_RTSR_TR3                       EXTI_RTSR_TR3_Msk                  /*!< Rising trigger event configuration bit of line 3 */
#define EXTI_RTSR_TR4_Pos                   (4U)                               
#define EXTI_RTSR_TR4_Msk                   (0x1UL << EXTI_RTSR_TR4_Pos)        /*!< 0x00000010 */
#define EXTI_RTSR_TR4                       EXTI_RTSR_TR4_Msk                  /*!< Rising trigger event configuration bit of line 4 */
#define EXTI_RTSR_TR5_Pos                   (5U)                               
#define EXTI_RTSR_TR5_Msk                   (0x1UL << EXTI_RTSR_TR5_Pos)        /*!< 0x00000020 */
#define EXTI_RTSR_TR5                       EXTI_RTSR_TR5_Msk                  /*!< Rising trigger event configuration bit of line 5 */
#define EXTI_RTSR_TR6_Pos                   (6U)                               
#define EXTI_RTSR_TR6_Msk                   (0x1UL << EXTI_RTSR_TR6_Pos)        /*!< 0x00000040 */
#define EXTI_RTSR_TR6                       EXTI_RTSR_TR6_Msk                  /*!< Rising trigger event configuration bit of line 6 */
#define EXTI_RTSR_TR7_Pos                   (7U)                               
#define EXTI_RTSR_TR7_Msk                   (0x1UL << EXTI_RTSR_TR7_Pos)        /*!< 0x00000080 */
#define EXTI_RTSR_TR7                       EXTI_RTSR_TR7_Msk                  /*!< Rising trigger event configuration bit of line 7 */
#define EXTI_RTSR_TR8_Pos                   (8U)                               
#define EXTI_RTSR_TR8_Msk                   (0x1UL << EXTI_RTSR_TR8_Pos)        /*!< 0x00000100 */
#define EXTI_RTSR_TR8                       EXTI_RTSR_TR8_Msk                  /*!< Rising trigger event configuration bit of line 8 */
#define EXTI_RTSR_TR9_Pos                   (9U)                               
#define EXTI_RTSR_TR9_Msk                   (0x1UL << EXTI_RTSR_TR9_Pos)        /*!< 0x00000200 */
#define EXTI_RTSR_TR9                       EXTI_RTSR_TR9_Msk                  /*!< Rising trigger event configuration bit of line 9 */
#define EXTI_RTSR_TR10_Pos                  (10U)                              
#define EXTI_RTSR_TR10_Msk                  (0x1UL << EXTI_RTSR_TR10_Pos)       /*!< 0x00000400 */
#define EXTI_RTSR_TR10                      EXTI_RTSR_TR10_Msk                 /*!< Rising trigger event configuration bit of line 10 */
#define EXTI_RTSR_TR11_Pos                  (11U)                              
#define EXTI_RTSR_TR11_Msk                  (0x1UL << EXTI_RTSR_TR11_Pos)       /*!< 0x00000800 */
#define EXTI_RTSR_TR11                      EXTI_RTSR_TR11_Msk                 /*!< Rising trigger event configuration bit of line 11 */
#define EXTI_RTSR_TR12_Pos                  (12U)                              
#define EXTI_RTSR_TR12_Msk                  (0x1UL << EXTI_RTSR_TR12_Pos)       /*!< 0x00001000 */
#define EXTI_RTSR_TR12                      EXTI_RTSR_TR12_Msk                 /*!< Rising trigger event configuration bit of line 12 */
#define EXTI_RTSR_TR13_Pos                  (13U)                              
#define EXTI_RTSR_TR13_Msk                  (0x1UL << EXTI_RTSR_TR13_Pos)       /*!< 0x00002000 */
#define EXTI_RTSR_TR13                      EXTI_RTSR_TR13_Msk                 /*!< Rising trigger event configuration bit of line 13 */
#define EXTI_RTSR_TR14_Pos                  (14U)                              
#define EXTI_RTSR_TR14_Msk                  (0x1UL << EXTI_RTSR_TR14_Pos)       /*!< 0x00004000 */
#define EXTI_RTSR_TR14                      EXTI_RTSR_TR14_Msk                 /*!< Rising trigger event configuration bit of line 14 */
#define EXTI_RTSR_TR15_Pos                  (15U)                              
#define EXTI_RTSR_TR15_Msk                  (0x1UL << EXTI_RTSR_TR15_Pos)       /*!< 0x00008000 */
#define EXTI_RTSR_TR15                      EXTI_RTSR_TR15_Msk                 /*!< Rising trigger event configuration bit of line 15 */
#define EXTI_RTSR_TR16_Pos                  (16U)                              
#define EXTI_RTSR_TR16_Msk                  (0x1UL << EXTI_RTSR_TR16_Pos)       /*!< 0x00010000 */
#define EXTI_RTSR_TR16                      EXTI_RTSR_TR16_Msk                 /*!< Rising trigger event configuration bit of line 16 */
#define EXTI_RTSR_TR17_Pos                  (17U)                              
#define EXTI_RTSR_TR17_Msk                  (0x1UL << EXTI_RTSR_TR17_Pos)       /*!< 0x00020000 */
#define EXTI_RTSR_TR17                      EXTI_RTSR_TR17_Msk                 /*!< Rising trigger event configuration bit of line 17 */
#define EXTI_RTSR_TR18_Pos                  (18U)                              
#define EXTI_RTSR_TR18_Msk                  (0x1UL << EXTI_RTSR_TR18_Pos)       /*!< 0x00040000 */
#define EXTI_RTSR_TR18                      EXTI_RTSR_TR18_Msk                 /*!< Rising trigger event configuration bit of line 18 */

#define EXTI_FTSR_TR0_Pos                   (0U)                               
#define EXTI_FTSR_TR0_Msk                   (0x1UL << EXTI_FTSR_TR0_Pos)        /*!< 0x00000001 */
#define EXTI_FTSR_TR0                       EXTI_FTSR_TR0_Msk                  /*!< Falling trigger event configuration bit of line 0 */
#define EXTI_FTSR_TR1_Pos                   (1U)                               
#define EXTI_FTSR_TR1_Msk                   (0x1UL << EXTI_FTSR_TR1_Pos)        /*!< 0x00000002 */
#define EXTI_FTSR_TR1                       EXTI_FTSR_TR1_Msk                  /*!< Falling trigger event configuration bit of line 1 */
#define EXTI_FTSR_TR2_Pos                   (2U)                               
#define EXTI_FTSR_TR2_Msk                   (0x1UL << EXTI_FTSR_TR2_Pos)        /*!< 0x00000004 */
#define EXTI_FTSR_TR2                       EXTI_FTSR_TR2_Msk                  /*!< Falling trigger event configuration bit of line 2 */
#define EXTI_FTSR_TR3_Pos                   (3U)                               
#define EXTI_FTSR_TR3_Msk                   (0x1UL << EXTI_FTSR_TR3_Pos)        /*!< 0x00000008 */
#define EXTI_FTSR_TR3                       EXTI_FTSR_TR3_Msk                  /*!< Falling trigger event configuration bit of line 3 */
#define EXTI_FTSR_TR4_Pos                   (4U)                               
#define EXTI_FTSR_TR4_Msk                   (0x1UL << EXTI_FTSR_TR4_Pos)        /*!< 0x00000010 */
#define EXTI_FTSR_TR4                       EXTI_FTSR_TR4_Msk                  /*!< Falling trigger event configuration bit of line 4 */
#define EXTI_FTSR_TR5_Pos                   (5U)                               
#define EXTI_FTSR_TR5_Msk                   (0x1UL << EXTI_FTSR_TR5_Pos)        /*!< 0x00000020 */
#define EXTI_FTSR_TR5                       EXTI_FTSR_TR5_Msk                  /*!< Falling trigger event configuration bit of line 5 */
#define EXTI_FTSR_TR6_Pos                   (6U)                               
#define EXTI_FTSR_TR6_Msk                   (0x1UL << EXTI_FTSR_TR6_Pos)        /*!< 0x00000040 */
#define EXTI_FTSR_TR6                       EXTI_FTSR_TR6_Msk                  /*!< Falling trigger event configuration bit of line 6 */
#define EXTI_FTSR_TR7_Pos                   (7U)                               
#define EXTI_FTSR_TR7_Msk                   (0x1UL << EXTI_FTSR_TR7_Pos)        /*!< 0x00000080 */
#define EXTI_FTSR_TR7                       EXTI_FTSR_TR7_Msk                  /*!< Falling trigger event configuration bit of line 7 */
#define EXTI_FTSR_TR8_Pos                   (8U)                               
#define EXTI_FTSR_TR8_Msk                   (0x1UL << EXTI_FTSR_TR8_Pos)        /*!< 0x00000100 */
#define EXTI_FTSR_TR8                       EXTI_FTSR_TR8_Msk                  /*!< Falling trigger event configuration bit of line 8 */
#define EXTI_FTSR_TR9_Pos                   (9U)                               
#define EXTI_FTSR_TR9_Msk                   (0x1UL << EXTI_FTSR_TR9_Pos)        /*!< 0x00000200 */
#define EXTI_FTSR_TR9                       EXTI_FTSR_TR9_Msk                  /*!< Falling trigger event configuration bit of line 9 */
#define EXTI_FTSR_TR10_Pos                  (10U)                              
#define EXTI_FTSR_TR10_Msk                  (0x1UL << EXTI_FTSR_TR10_Pos)       /*!< 0x00000400 */
#define EXTI_FTSR_TR10                      EXTI_FTSR_TR10_Msk                 /*!< Falling trigger event configuration bit of line 10 */
#define EXTI_FTSR_TR11_Pos                  (11U)                              
#define EXTI_FTSR_TR11_Msk                  (0x1UL << EXTI_FTSR_TR11_Pos)       /*!< 0x00000800 */
#define EXTI_FTSR_TR11                      EXTI_FTSR_TR11_Msk                 /*!< Falling trigger event configuration bit of line 11 */
#define EXTI_FTSR_TR12_Pos                  (12U)                              
#define EXTI_FTSR_TR12_Msk                  (0x1UL << EXTI_FTSR_TR12_Pos)       /*!< 0x00001000 */
#define EXTI_FTSR_TR12                      EXTI_FTSR_TR12_Msk                 /*!< Falling trigger event configuration bit of line 12 */
#define EXTI_FTSR_TR13_Pos                  (13U)                              
#define EXTI_FTSR_TR13_Msk                  (0x1UL << EXTI_FTSR_TR13_Pos)       /*!< 0x00002000 */
#define EXTI_FTSR_TR13                      EXTI_FTSR_TR13_Msk                 /*!< Falling trigger event configuration bit of line 13 */
#define EXTI_FTSR_TR14_Pos                  (14U)                              
#define EXTI_FTSR_TR14_Msk                  (0x1UL << EXTI_FTSR_TR14_Pos)       /*!< 0x00004000 */
#define EXTI_FTSR_TR14                      EXTI_FTSR_TR14_Msk                 /*!< Falling trigger event configuration bit of line 14 */
#define EXTI_FTSR_TR15_Pos                  (15U)                              
#define EXTI_FTSR_TR15_Msk                  (0x1UL << EXTI_FTSR_TR15_Pos)       /*!< 0x00008000 */
#define EXTI_FTSR_TR15                      EXTI_FTSR_TR15_Msk                 /*!< Falling trigger event configuration bit of line 15 */
#define EXTI_FTSR_TR16_Pos                  (16U)                              
#define EXTI_FTSR_TR16_Msk                  (0x1UL << EXTI_FTSR_TR16_Pos)       /*!< 0x00010000 */
#define EXTI_FTSR_TR16                      EXTI_FTSR_TR16_Msk                 /*!< Falling trigger event configuration bit of line 16 */
#define EXTI_FTSR_TR17_Pos                  (17U)                              
#define EXTI_FTSR_TR17_Msk                  (0x1UL << EXTI_FTSR_TR17_Pos)       /*!< 0x00020000 */
#define EXTI_FTSR_TR17                      EXTI_FTSR_TR17_Msk                 /*!< Falling trigger event configuration bit of line 17 */
#define EXTI_FTSR_TR18_Pos                  (18U)                              
#define EXTI_FTSR_TR18_Msk                  (0x1UL << EXTI_FTSR_TR18_Pos)       /*!< 0x00040000 */
#define EXTI_FTSR_TR18                      EXTI_FTSR_TR18_Msk                 /*!< Falling trigger event configuration bit of line 18 */

#define EXTI_SWIER_SWIER0_Pos               (0U)                               
#define EXTI_SWIER_SWIER0_Msk               (0x1UL << EXTI_SWIER_SWIER0_Pos)    /*!< 0x00000001 */
#define EXTI_SWIER_SWIER0                   EXTI_SWIER_SWIER0_Msk              /*!< Software Interrupt on line 0 */
#define EXTI_SWIER_SWIER1_Pos               (1U)                               
#define EXTI_SWIER_SWIER1_Msk               (0x1UL << EXTI_SWIER_SWIER1_Pos)    /*!< 0x00000002 */
#define EXTI_SWIER_SWIER1                   EXTI_SWIER_SWIER1_Msk              /*!< Software Interrupt on line 1 */
#define EXTI_SWIER_SWIER2_Pos               (2U)                               
#define EXTI_SWIER_SWIER2_Msk               (0x1UL << EXTI_SWIER_SWIER2_Pos)    /*!< 0x00000004 */
#define EXTI_SWIER_SWIER2                   EXTI_SWIER_SWIER2_Msk              /*!< Software Interrupt on line 2 */
#define EXTI_SWIER_SWIER3_Pos               (3U)                               
#define EXTI_SWIER_SWIER3_Msk               (0x1UL << EXTI_SWIER_SWIER3_Pos)    /*!< 0x00000008 */
#define EXTI_SWIER_SWIER3                   EXTI_SWIER_SWIER3_Msk              /*!< Software Interrupt on line 3 */
#define EXTI_SWIER_SWIER4_Pos               (4U)                               
#define EXTI_SWIER_SWIER4_Msk               (0x1UL << EXTI_SWIER_SWIER4_Pos)    /*!< 0x00000010 */
#define EXTI_SWIER_SWIER4                   EXTI_SWIER_SWIER4_Msk              /*!< Software Interrupt on line 4 */
#define EXTI_SWIER_SWIER5_Pos               (5U)                               
#define EXTI_SWIER_SWIER5_Msk               (0x1UL << EXTI_SWIER_SWIER5_Pos)    /*!< 0x00000020 */
#define EXTI_SWIER_SWIER5                   EXTI_SWIER_SWIER5_Msk              /*!< Software Interrupt on line 5 */
#define EXTI_SWIER_SWIER6_Pos               (6U)                               
#define EXTI_SWIER_SWIER6_Msk               (0x1UL << EXTI_SWIER_SWIER6_Pos)    /*!< 0x00000040 */
#define EXTI_SWIER_SWIER6                   EXTI_SWIER_SWIER6_Msk              /*!< Software Interrupt on line 6 */
#define EXTI_SWIER_SWIER7_Pos               (7U)                               
#define EXTI_SWIER_SWIER7_Msk               (0x1UL << EXTI_SWIER_SWIER7_Pos)    /*!< 0x00000080 */
#define EXTI_SWIER_SWIER7                   EXTI_SWIER_SWIER7_Msk              /*!< Software Interrupt on line 7 */
#define EXTI_SWIER_SWIER8_Pos               (8U)                               
#define EXTI_SWIER_SWIER8_Msk               (0x1UL << EXTI_SWIER_SWIER8_Pos)    /*!< 0x00000100 */
#define EXTI_SWIER_SWIER8                   EXTI_SWIER_SWIER8_Msk              /*!< Software Interrupt on line 8 */
#define EXTI_SWIER_SWIER9_Pos               (9U)                               
#define EXTI_SWIER_SWIER9_Msk               (0x1UL << EXTI_SWIER_SWIER9_Pos)    /*!< 0x00000200 */
#define EXTI_SWIER_SWIER9                   EXTI_SWIER_SWIER9_Msk              /*!< Software Interrupt on line 9 */
#define EXTI_SWIER_SWIER10_Pos              (10U)                              
#define EXTI_SWIER_SWIER10_Msk              (0x1UL << EXTI_SWIER_SWIER10_Pos)   /*!< 0x00000400 */
#define EXTI_SWIER_SWIER10                  EXTI_SWIER_SWIER10_Msk             /*!< Software Interrupt on line 10 */
#define EXTI_SWIER_SWIER11_Pos              (11U)                              
#define EXTI_SWIER_SWIER11_Msk              (0x1UL << EXTI_SWIER_SWIER11_Pos)   /*!< 0x00000800 */
#define EXTI_SWIER_SWIER11                  EXTI_SWIER_SWIER11_Msk             /*!< Software Interrupt on line 11 */
#define EXTI_SWIER_SWIER12_Pos              (12U)                              
#define EXTI_SWIER_SWIER12_Msk              (0x1UL << EXTI_SWIER_SWIER12_Pos)   /*!< 0x00001000 */
#define EXTI_SWIER_SWIER12                  EXTI_SWIER_SWIER12_Msk             /*!< Software Interrupt on line 12 */
#define EXTI_SWIER_SWIER13_Pos              (13U)                              
#define EXTI_SWIER_SWIER13_Msk              (0x1UL << EXTI_SWIER_SWIER13_Pos)   /*!< 0x00002000 */
#define EXTI_SWIER_SWIER13                  EXTI_SWIER_SWIER13_Msk             /*!< Software Interrupt on line 13 */
#define EXTI_SWIER_SWIER14_Pos              (14U)                              
#define EXTI_SWIER_SWIER14_Msk              (0x1UL << EXTI_SWIER_SWIER14_Pos)   /*!< 0x00004000 */
#define EXTI_SWIER_SWIER14                  EXTI_SWIER_SWIER14_Msk             /*!< Software Interrupt on line 14 */
#define EXTI_SWIER_SWIER15_Pos              (15U)                              
#define EXTI_SWIER_SWIER15_Msk              (0x1UL << EXTI_SWIER_SWIER15_Pos)   /*!< 0x00008000 */
#define EXTI_SWIER_SWIER15                  EXTI_SWIER_SWIER15_Msk             /*!< Software Interrupt on line 15 */
#define EXTI_SWIER_SWIER16_Pos              (16U)                              
#define EXTI_SWIER_SWIER16_Msk              (0x1UL << EXTI_SWIER_SWIER16_Pos)   /*!< 0x00010000 */
#define EXTI_SWIER_SWIER16                  EXTI_SWIER_SWIER16_Msk             /*!< Software Interrupt on line 16 */
#define EXTI_SWIER_SWIER17_Pos              (17U)                              
#define EXTI_SWIER_SWIER17_Msk              (0x1UL << EXTI_SWIER_SWIER17_Pos)   /*!< 0x00020000 */
#define EXTI_SWIER_SWIER17                  EXTI_SWIER_SWIER17_Msk             /*!< Software Interrupt on line 17 */
#define EXTI_SWIER_SWIER18_Pos              (18U)                              
#define EXTI_SWIER_SWIER18_Msk              (0x1UL << EXTI_SWIER_SWIER18_Pos)   /*!< 0x00040000 */
#define EXTI_SWIER_SWIER18                  EXTI_SWIER_SWIER18_Msk             /*!< Software Interrupt on line 18 */

#define EXTI_PR_PR0_Pos                     (0U)                               
#define EXTI_PR_PR0_Msk                     (0x1UL << EXTI_PR_PR0_Pos)          /*!< 0x00000001 */
#define EXTI_PR_PR0                         EXTI_PR_PR0_Msk                    /*!< Pending bit for line 0 */
#define EXTI_PR_PR1_Pos                     (1U)                               
#define EXTI_PR_PR1_Msk                     (0x1UL << EXTI_PR_PR1_Pos)          /*!< 0x00000002 */
#define EXTI_PR_PR1                         EXTI_PR_PR1_Msk                    /*!< Pending bit for line 1 */
#define EXTI_PR_PR2_Pos                     (2U)                               
#define EXTI_PR_PR2_Msk                     (0x1UL << EXTI_PR_PR2_Pos)          /*!< 0x00000004 */
#define EXTI_PR_PR2                         EXTI_PR_PR2_Msk                    /*!< Pending bit for line 2 */
#define EXTI_PR_PR3_Pos                     (3U)                               
#define EXTI_PR_PR3_Msk                     (0x1UL << EXTI_PR_PR3_Pos)          /*!< 0x00000008 */
#define EXTI_PR_PR3                         EXTI_PR_PR3_Msk                    /*!< Pending bit for line 3 */
#define EXTI_PR_PR4_Pos                     (4U)                               
#define EXTI_PR_PR4_Msk                     (0x1UL << EXTI_PR_PR4_Pos)          /*!< 0x00000010 */
#define EXTI_PR_PR4                         EXTI_PR_PR4_Msk                    /*!< Pending bit for line 4 */
#define EXTI_PR_PR5_Pos                     (5U)                               
#define EXTI_PR_PR5_Msk                     (0x1UL << EXTI_PR_PR5_Pos)          /*!< 0x00000020 */
#define EXTI_PR_PR5                         EXTI_PR_PR5_Msk                    /*!< Pending bit for line 5 */
#define EXTI_PR_PR6_Pos                     (6U)                               
#define EXTI_PR_PR6_Msk                     (0x1UL << EXTI_PR_PR6_Pos)          /*!< 0x00000040 */
#define EXTI_PR_PR6                         EXTI_PR_PR6_Msk                    /*!< Pending bit for line 6 */
#define EXTI_PR_PR7_Pos                     (7U)                               
#define EXTI_PR_PR7_Msk                     (0x1UL << EXTI_PR_PR7_Pos)          /*!< 0x00000080 */
#define EXTI_PR_PR7                         EXTI_PR_PR7_Msk                    /*!< Pending bit for line 7 */
#define EXTI_PR_PR8_Pos                     (8U)                               
#define EXTI_PR_PR8_Msk                     (0x1UL << EXTI_PR_PR8_Pos)          /*!< 0x00000100 */
#define EXTI_PR_PR8                         EXTI_PR_PR8_Msk                    /*!< Pending bit for line 8 */
#define EXTI_PR_PR9_Pos                     (9U)                               
#define EXTI_PR_PR9_Msk                     (0x1UL << EXTI_PR_PR9_Pos)          /*!< 0x00000200 */
#define EXTI_PR_PR9                         EXTI_PR_PR9_Msk                    /*!< Pending bit for line 9 */
#define EXTI_PR_PR10_Pos                    (10U)                              
#define EXTI_PR_PR10_Msk                    (0x1UL << EXTI_PR_PR10_Pos)         /*!< 0x00000400 */
#define EXTI_PR_PR10                        EXTI_PR_PR10_Msk                   /*!< Pending bit for line 10 */
#define EXTI_PR_PR11_Pos                    (11U)                              
#define EXTI_PR_PR11_Msk                    (0x1UL << EXTI_PR_PR11_Pos)         /*!< 0x00000800 */
#define EXTI_PR_PR11                        EXTI_PR_PR11_Msk                   /*!< Pending bit for line 11 */
#define EXTI_PR_PR12_Pos                    (12U)                              
#define EXTI_PR_PR12_Msk                    (0x1UL << EXTI_PR_PR12_Pos)         /*!< 0x00001000 */
#define EXTI_PR_PR12                        EXTI_PR_PR12_Msk                   /*!< Pending bit for line 12 */
#define EXTI_PR_PR13_Pos                    (13U)                              
#define EXTI_PR_PR13_Msk                    (0x1UL << EXTI_PR_PR13_Pos)         /*!< 0x00002000 */
#define EXTI_PR_PR13                        EXTI_PR_PR13_Msk                   /*!< Pending bit for line 13 */
#define EXTI_PR_PR14_Pos                    (14U)                              
#define EXTI_PR_PR14_Msk                    (0x1UL << EXTI_PR_PR14_Pos)         /*!< 0x00004000 */
#define EXTI_PR_PR14                        EXTI_PR_PR14_Msk                   /*!< Pending bit for line 14 */
#define EXTI_PR_PR15_Pos                    (15U)                              
#define EXTI_PR_PR15_Msk                    (0x1UL << EXTI_PR_PR15_Pos)         /*!< 0x00008000 */
#define EXTI_PR_PR15                        EXTI_PR_PR15_Msk                   /*!< Pending bit for line 15 */
#define EXTI_PR_PR16_Pos                    (16U)                              
#define EXTI_PR_PR16_Msk                    (0x1UL << EXTI_PR_PR16_Pos)         /*!< 0x00010000 */
#define EXTI_PR_PR16                        EXTI_PR_PR16_Msk                   /*!< Pending bit for line 16 */
#define EXTI_PR_PR17_Pos                    (17U)                              
#define EXTI_PR_PR17_Msk                    (0x1UL << EXTI_PR_PR17_Pos)         /*!< 0x00020000 */
#define EXTI_PR_PR17                        EXTI_PR_PR17_Msk                   /*!< Pending bit for line 17 */
#define EXTI_PR_PR18_Pos                    (18U)                              
#define EXTI_PR_PR18_Msk                    (0x1UL << EXTI_PR_PR18_Pos)         /*!< 0x00040000 */
#define EXTI_PR_PR18                        EXTI_PR_PR18_Msk                   /*!< Pending bit for line 18 */

#endif /* STM32F103C8_EXTI_H */
