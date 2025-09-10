#ifndef STM32F103C8_GPIO_H
#define STM32F103C8_GPIO_H

#include "STM32F103C8_COMMON.h"


/** 
  * @brief General Purpose I/O
  */

typedef struct
{
  __IO uint32_t CRL;
  __IO uint32_t CRH;
  __IO uint32_t IDR;
  __IO uint32_t ODR;
  __IO uint32_t BSRR;
  __IO uint32_t BRR;
  __IO uint32_t LCKR;
} GPIO_TypeDef;

#define GPIOA_BASE            (APB2PERIPH_BASE + 0x00000800UL)
#define GPIOB_BASE            (APB2PERIPH_BASE + 0x00000C00UL)
#define GPIOC_BASE            (APB2PERIPH_BASE + 0x00001000UL)
#define GPIOD_BASE            (APB2PERIPH_BASE + 0x00001400UL)
#define GPIOE_BASE            (APB2PERIPH_BASE + 0x00001800UL)

#define GPIOA               ((GPIO_TypeDef *)GPIOA_BASE)
#define GPIOB               ((GPIO_TypeDef *)GPIOB_BASE)
#define GPIOC               ((GPIO_TypeDef *)GPIOC_BASE)
#define GPIOD               ((GPIO_TypeDef *)GPIOD_BASE)
#define GPIOE               ((GPIO_TypeDef *)GPIOE_BASE)

#define GPIO_CRL_MODE_Pos                    (0U)                              
#define GPIO_CRL_MODE_Msk                    (0x33333333UL << GPIO_CRL_MODE_Pos) /*!< 0x33333333 */
#define GPIO_CRL_MODE                        GPIO_CRL_MODE_Msk                 /*!< Port x mode bits */

#define GPIO_CRL_MODE0_Pos                   (0U)                              
#define GPIO_CRL_MODE0_Msk                   (0x3UL << GPIO_CRL_MODE0_Pos)      /*!< 0x00000003 */
#define GPIO_CRL_MODE0                       GPIO_CRL_MODE0_Msk                /*!< MODE0[1:0] bits (Port x mode bits, pin 0) */
#define GPIO_CRL_MODE0_0                     (0x1UL << GPIO_CRL_MODE0_Pos)      /*!< 0x00000001 */
#define GPIO_CRL_MODE0_1                     (0x2UL << GPIO_CRL_MODE0_Pos)      /*!< 0x00000002 */

#define GPIO_CRL_MODE1_Pos                   (4U)                              
#define GPIO_CRL_MODE1_Msk                   (0x3UL << GPIO_CRL_MODE1_Pos)      /*!< 0x00000030 */
#define GPIO_CRL_MODE1                       GPIO_CRL_MODE1_Msk                /*!< MODE1[1:0] bits (Port x mode bits, pin 1) */
#define GPIO_CRL_MODE1_0                     (0x1UL << GPIO_CRL_MODE1_Pos)      /*!< 0x00000010 */
#define GPIO_CRL_MODE1_1                     (0x2UL << GPIO_CRL_MODE1_Pos)      /*!< 0x00000020 */

#define GPIO_CRL_MODE2_Pos                   (8U)                              
#define GPIO_CRL_MODE2_Msk                   (0x3UL << GPIO_CRL_MODE2_Pos)      /*!< 0x00000300 */
#define GPIO_CRL_MODE2                       GPIO_CRL_MODE2_Msk                /*!< MODE2[1:0] bits (Port x mode bits, pin 2) */
#define GPIO_CRL_MODE2_0                     (0x1UL << GPIO_CRL_MODE2_Pos)      /*!< 0x00000100 */
#define GPIO_CRL_MODE2_1                     (0x2UL << GPIO_CRL_MODE2_Pos)      /*!< 0x00000200 */

#define GPIO_CRL_MODE3_Pos                   (12U)                             
#define GPIO_CRL_MODE3_Msk                   (0x3UL << GPIO_CRL_MODE3_Pos)      /*!< 0x00003000 */
#define GPIO_CRL_MODE3                       GPIO_CRL_MODE3_Msk                /*!< MODE3[1:0] bits (Port x mode bits, pin 3) */
#define GPIO_CRL_MODE3_0                     (0x1UL << GPIO_CRL_MODE3_Pos)      /*!< 0x00001000 */
#define GPIO_CRL_MODE3_1                     (0x2UL << GPIO_CRL_MODE3_Pos)      /*!< 0x00002000 */

#define GPIO_CRL_MODE4_Pos                   (16U)                             
#define GPIO_CRL_MODE4_Msk                   (0x3UL << GPIO_CRL_MODE4_Pos)      /*!< 0x00030000 */
#define GPIO_CRL_MODE4                       GPIO_CRL_MODE4_Msk                /*!< MODE4[1:0] bits (Port x mode bits, pin 4) */
#define GPIO_CRL_MODE4_0                     (0x1UL << GPIO_CRL_MODE4_Pos)      /*!< 0x00010000 */
#define GPIO_CRL_MODE4_1                     (0x2UL << GPIO_CRL_MODE4_Pos)      /*!< 0x00020000 */

#define GPIO_CRL_MODE5_Pos                   (20U)                             
#define GPIO_CRL_MODE5_Msk                   (0x3UL << GPIO_CRL_MODE5_Pos)      /*!< 0x00300000 */
#define GPIO_CRL_MODE5                       GPIO_CRL_MODE5_Msk                /*!< MODE5[1:0] bits (Port x mode bits, pin 5) */
#define GPIO_CRL_MODE5_0                     (0x1UL << GPIO_CRL_MODE5_Pos)      /*!< 0x00100000 */
#define GPIO_CRL_MODE5_1                     (0x2UL << GPIO_CRL_MODE5_Pos)      /*!< 0x00200000 */

#define GPIO_CRL_MODE6_Pos                   (24U)                             
#define GPIO_CRL_MODE6_Msk                   (0x3UL << GPIO_CRL_MODE6_Pos)      /*!< 0x03000000 */
#define GPIO_CRL_MODE6                       GPIO_CRL_MODE6_Msk                /*!< MODE6[1:0] bits (Port x mode bits, pin 6) */
#define GPIO_CRL_MODE6_0                     (0x1UL << GPIO_CRL_MODE6_Pos)      /*!< 0x01000000 */
#define GPIO_CRL_MODE6_1                     (0x2UL << GPIO_CRL_MODE6_Pos)      /*!< 0x02000000 */

#define GPIO_CRL_MODE7_Pos                   (28U)                             
#define GPIO_CRL_MODE7_Msk                   (0x3UL << GPIO_CRL_MODE7_Pos)      /*!< 0x30000000 */
#define GPIO_CRL_MODE7                       GPIO_CRL_MODE7_Msk                /*!< MODE7[1:0] bits (Port x mode bits, pin 7) */
#define GPIO_CRL_MODE7_0                     (0x1UL << GPIO_CRL_MODE7_Pos)      /*!< 0x10000000 */
#define GPIO_CRL_MODE7_1                     (0x2UL << GPIO_CRL_MODE7_Pos)      /*!< 0x20000000 */

#define GPIO_CRL_CNF_Pos                     (2U)                              
#define GPIO_CRL_CNF_Msk                     (0x33333333UL << GPIO_CRL_CNF_Pos) /*!< 0xCCCCCCCC */
#define GPIO_CRL_CNF                         GPIO_CRL_CNF_Msk                  /*!< Port x configuration bits */

#define GPIO_CRL_CNF0_Pos                    (2U)                              
#define GPIO_CRL_CNF0_Msk                    (0x3UL << GPIO_CRL_CNF0_Pos)       /*!< 0x0000000C */
#define GPIO_CRL_CNF0                        GPIO_CRL_CNF0_Msk                 /*!< CNF0[1:0] bits (Port x configuration bits, pin 0) */
#define GPIO_CRL_CNF0_0                      (0x1UL << GPIO_CRL_CNF0_Pos)       /*!< 0x00000004 */
#define GPIO_CRL_CNF0_1                      (0x2UL << GPIO_CRL_CNF0_Pos)       /*!< 0x00000008 */

#define GPIO_CRL_CNF1_Pos                    (6U)                              
#define GPIO_CRL_CNF1_Msk                    (0x3UL << GPIO_CRL_CNF1_Pos)       /*!< 0x000000C0 */
#define GPIO_CRL_CNF1                        GPIO_CRL_CNF1_Msk                 /*!< CNF1[1:0] bits (Port x configuration bits, pin 1) */
#define GPIO_CRL_CNF1_0                      (0x1UL << GPIO_CRL_CNF1_Pos)       /*!< 0x00000040 */
#define GPIO_CRL_CNF1_1                      (0x2UL << GPIO_CRL_CNF1_Pos)       /*!< 0x00000080 */

#define GPIO_CRL_CNF2_Pos                    (10U)                             
#define GPIO_CRL_CNF2_Msk                    (0x3UL << GPIO_CRL_CNF2_Pos)       /*!< 0x00000C00 */
#define GPIO_CRL_CNF2                        GPIO_CRL_CNF2_Msk                 /*!< CNF2[1:0] bits (Port x configuration bits, pin 2) */
#define GPIO_CRL_CNF2_0                      (0x1UL << GPIO_CRL_CNF2_Pos)       /*!< 0x00000400 */
#define GPIO_CRL_CNF2_1                      (0x2UL << GPIO_CRL_CNF2_Pos)       /*!< 0x00000800 */

#define GPIO_CRL_CNF3_Pos                    (14U)                             
#define GPIO_CRL_CNF3_Msk                    (0x3UL << GPIO_CRL_CNF3_Pos)       /*!< 0x0000C000 */
#define GPIO_CRL_CNF3                        GPIO_CRL_CNF3_Msk                 /*!< CNF3[1:0] bits (Port x configuration bits, pin 3) */
#define GPIO_CRL_CNF3_0                      (0x1UL << GPIO_CRL_CNF3_Pos)       /*!< 0x00004000 */
#define GPIO_CRL_CNF3_1                      (0x2UL << GPIO_CRL_CNF3_Pos)       /*!< 0x00008000 */

#define GPIO_CRL_CNF4_Pos                    (18U)                             
#define GPIO_CRL_CNF4_Msk                    (0x3UL << GPIO_CRL_CNF4_Pos)       /*!< 0x000C0000 */
#define GPIO_CRL_CNF4                        GPIO_CRL_CNF4_Msk                 /*!< CNF4[1:0] bits (Port x configuration bits, pin 4) */
#define GPIO_CRL_CNF4_0                      (0x1UL << GPIO_CRL_CNF4_Pos)       /*!< 0x00040000 */
#define GPIO_CRL_CNF4_1                      (0x2UL << GPIO_CRL_CNF4_Pos)       /*!< 0x00080000 */

#define GPIO_CRL_CNF5_Pos                    (22U)                             
#define GPIO_CRL_CNF5_Msk                    (0x3UL << GPIO_CRL_CNF5_Pos)       /*!< 0x00C00000 */
#define GPIO_CRL_CNF5                        GPIO_CRL_CNF5_Msk                 /*!< CNF5[1:0] bits (Port x configuration bits, pin 5) */
#define GPIO_CRL_CNF5_0                      (0x1UL << GPIO_CRL_CNF5_Pos)       /*!< 0x00400000 */
#define GPIO_CRL_CNF5_1                      (0x2UL << GPIO_CRL_CNF5_Pos)       /*!< 0x00800000 */

#define GPIO_CRL_CNF6_Pos                    (26U)                             
#define GPIO_CRL_CNF6_Msk                    (0x3UL << GPIO_CRL_CNF6_Pos)       /*!< 0x0C000000 */
#define GPIO_CRL_CNF6                        GPIO_CRL_CNF6_Msk                 /*!< CNF6[1:0] bits (Port x configuration bits, pin 6) */
#define GPIO_CRL_CNF6_0                      (0x1UL << GPIO_CRL_CNF6_Pos)       /*!< 0x04000000 */
#define GPIO_CRL_CNF6_1                      (0x2UL << GPIO_CRL_CNF6_Pos)       /*!< 0x08000000 */

#define GPIO_CRL_CNF7_Pos                    (30U)                             
#define GPIO_CRL_CNF7_Msk                    (0x3UL << GPIO_CRL_CNF7_Pos)       /*!< 0xC0000000 */
#define GPIO_CRL_CNF7                        GPIO_CRL_CNF7_Msk                 /*!< CNF7[1:0] bits (Port x configuration bits, pin 7) */
#define GPIO_CRL_CNF7_0                      (0x1UL << GPIO_CRL_CNF7_Pos)       /*!< 0x40000000 */
#define GPIO_CRL_CNF7_1                      (0x2UL << GPIO_CRL_CNF7_Pos)       /*!< 0x80000000 */

#define GPIO_CRH_MODE_Pos                    (0U)                              
#define GPIO_CRH_MODE_Msk                    (0x33333333UL << GPIO_CRH_MODE_Pos) /*!< 0x33333333 */
#define GPIO_CRH_MODE                        GPIO_CRH_MODE_Msk                 /*!< Port x mode bits */

#define GPIO_CRH_MODE8_Pos                   (0U)                              
#define GPIO_CRH_MODE8_Msk                   (0x3UL << GPIO_CRH_MODE8_Pos)      /*!< 0x00000003 */
#define GPIO_CRH_MODE8                       GPIO_CRH_MODE8_Msk                /*!< MODE8[1:0] bits (Port x mode bits, pin 8) */
#define GPIO_CRH_MODE8_0                     (0x1UL << GPIO_CRH_MODE8_Pos)      /*!< 0x00000001 */
#define GPIO_CRH_MODE8_1                     (0x2UL << GPIO_CRH_MODE8_Pos)      /*!< 0x00000002 */

#define GPIO_CRH_MODE9_Pos                   (4U)                              
#define GPIO_CRH_MODE9_Msk                   (0x3UL << GPIO_CRH_MODE9_Pos)      /*!< 0x00000030 */
#define GPIO_CRH_MODE9                       GPIO_CRH_MODE9_Msk                /*!< MODE9[1:0] bits (Port x mode bits, pin 9) */
#define GPIO_CRH_MODE9_0                     (0x1UL << GPIO_CRH_MODE9_Pos)      /*!< 0x00000010 */
#define GPIO_CRH_MODE9_1                     (0x2UL << GPIO_CRH_MODE9_Pos)      /*!< 0x00000020 */

#define GPIO_CRH_MODE10_Pos                  (8U)                              
#define GPIO_CRH_MODE10_Msk                  (0x3UL << GPIO_CRH_MODE10_Pos)     /*!< 0x00000300 */
#define GPIO_CRH_MODE10                      GPIO_CRH_MODE10_Msk               /*!< MODE10[1:0] bits (Port x mode bits, pin 10) */
#define GPIO_CRH_MODE10_0                    (0x1UL << GPIO_CRH_MODE10_Pos)     /*!< 0x00000100 */
#define GPIO_CRH_MODE10_1                    (0x2UL << GPIO_CRH_MODE10_Pos)     /*!< 0x00000200 */

#define GPIO_CRH_MODE11_Pos                  (12U)                             
#define GPIO_CRH_MODE11_Msk                  (0x3UL << GPIO_CRH_MODE11_Pos)     /*!< 0x00003000 */
#define GPIO_CRH_MODE11                      GPIO_CRH_MODE11_Msk               /*!< MODE11[1:0] bits (Port x mode bits, pin 11) */
#define GPIO_CRH_MODE11_0                    (0x1UL << GPIO_CRH_MODE11_Pos)     /*!< 0x00001000 */
#define GPIO_CRH_MODE11_1                    (0x2UL << GPIO_CRH_MODE11_Pos)     /*!< 0x00002000 */

#define GPIO_CRH_MODE12_Pos                  (16U)                             
#define GPIO_CRH_MODE12_Msk                  (0x3UL << GPIO_CRH_MODE12_Pos)     /*!< 0x00030000 */
#define GPIO_CRH_MODE12                      GPIO_CRH_MODE12_Msk               /*!< MODE12[1:0] bits (Port x mode bits, pin 12) */
#define GPIO_CRH_MODE12_0                    (0x1UL << GPIO_CRH_MODE12_Pos)     /*!< 0x00010000 */
#define GPIO_CRH_MODE12_1                    (0x2UL << GPIO_CRH_MODE12_Pos)     /*!< 0x00020000 */

#define GPIO_CRH_MODE13_Pos                  (20U)                             
#define GPIO_CRH_MODE13_Msk                  (0x3UL << GPIO_CRH_MODE13_Pos)     /*!< 0x00300000 */
#define GPIO_CRH_MODE13                      GPIO_CRH_MODE13_Msk               /*!< MODE13[1:0] bits (Port x mode bits, pin 13) */
#define GPIO_CRH_MODE13_0                    (0x1UL << GPIO_CRH_MODE13_Pos)     /*!< 0x00100000 */
#define GPIO_CRH_MODE13_1                    (0x2UL << GPIO_CRH_MODE13_Pos)     /*!< 0x00200000 */

#define GPIO_CRH_MODE14_Pos                  (24U)                             
#define GPIO_CRH_MODE14_Msk                  (0x3UL << GPIO_CRH_MODE14_Pos)     /*!< 0x03000000 */
#define GPIO_CRH_MODE14                      GPIO_CRH_MODE14_Msk               /*!< MODE14[1:0] bits (Port x mode bits, pin 14) */
#define GPIO_CRH_MODE14_0                    (0x1UL << GPIO_CRH_MODE14_Pos)     /*!< 0x01000000 */
#define GPIO_CRH_MODE14_1                    (0x2UL << GPIO_CRH_MODE14_Pos)     /*!< 0x02000000 */

#define GPIO_CRH_MODE15_Pos                  (28U)                             
#define GPIO_CRH_MODE15_Msk                  (0x3UL << GPIO_CRH_MODE15_Pos)     /*!< 0x30000000 */
#define GPIO_CRH_MODE15                      GPIO_CRH_MODE15_Msk               /*!< MODE15[1:0] bits (Port x mode bits, pin 15) */
#define GPIO_CRH_MODE15_0                    (0x1UL << GPIO_CRH_MODE15_Pos)     /*!< 0x10000000 */
#define GPIO_CRH_MODE15_1                    (0x2UL << GPIO_CRH_MODE15_Pos)     /*!< 0x20000000 */

#define GPIO_CRH_CNF_Pos                     (2U)                              
#define GPIO_CRH_CNF_Msk                     (0x33333333UL << GPIO_CRH_CNF_Pos) /*!< 0xCCCCCCCC */
#define GPIO_CRH_CNF                         GPIO_CRH_CNF_Msk                  /*!< Port x configuration bits */

#define GPIO_CRH_CNF8_Pos                    (2U)                              
#define GPIO_CRH_CNF8_Msk                    (0x3UL << GPIO_CRH_CNF8_Pos)       /*!< 0x0000000C */
#define GPIO_CRH_CNF8                        GPIO_CRH_CNF8_Msk                 /*!< CNF8[1:0] bits (Port x configuration bits, pin 8) */
#define GPIO_CRH_CNF8_0                      (0x1UL << GPIO_CRH_CNF8_Pos)       /*!< 0x00000004 */
#define GPIO_CRH_CNF8_1                      (0x2UL << GPIO_CRH_CNF8_Pos)       /*!< 0x00000008 */

#define GPIO_CRH_CNF9_Pos                    (6U)                              
#define GPIO_CRH_CNF9_Msk                    (0x3UL << GPIO_CRH_CNF9_Pos)       /*!< 0x000000C0 */
#define GPIO_CRH_CNF9                        GPIO_CRH_CNF9_Msk                 /*!< CNF9[1:0] bits (Port x configuration bits, pin 9) */
#define GPIO_CRH_CNF9_0                      (0x1UL << GPIO_CRH_CNF9_Pos)       /*!< 0x00000040 */
#define GPIO_CRH_CNF9_1                      (0x2UL << GPIO_CRH_CNF9_Pos)       /*!< 0x00000080 */

#define GPIO_CRH_CNF10_Pos                   (10U)                             
#define GPIO_CRH_CNF10_Msk                   (0x3UL << GPIO_CRH_CNF10_Pos)      /*!< 0x00000C00 */
#define GPIO_CRH_CNF10                       GPIO_CRH_CNF10_Msk                /*!< CNF10[1:0] bits (Port x configuration bits, pin 10) */
#define GPIO_CRH_CNF10_0                     (0x1UL << GPIO_CRH_CNF10_Pos)      /*!< 0x00000400 */
#define GPIO_CRH_CNF10_1                     (0x2UL << GPIO_CRH_CNF10_Pos)      /*!< 0x00000800 */

#define GPIO_CRH_CNF11_Pos                   (14U)                             
#define GPIO_CRH_CNF11_Msk                   (0x3UL << GPIO_CRH_CNF11_Pos)      /*!< 0x0000C000 */
#define GPIO_CRH_CNF11                       GPIO_CRH_CNF11_Msk                /*!< CNF11[1:0] bits (Port x configuration bits, pin 11) */
#define GPIO_CRH_CNF11_0                     (0x1UL << GPIO_CRH_CNF11_Pos)      /*!< 0x00004000 */
#define GPIO_CRH_CNF11_1                     (0x2UL << GPIO_CRH_CNF11_Pos)      /*!< 0x00008000 */

#define GPIO_CRH_CNF12_Pos                   (18U)                             
#define GPIO_CRH_CNF12_Msk                   (0x3UL << GPIO_CRH_CNF12_Pos)      /*!< 0x000C0000 */
#define GPIO_CRH_CNF12                       GPIO_CRH_CNF12_Msk                /*!< CNF12[1:0] bits (Port x configuration bits, pin 12) */
#define GPIO_CRH_CNF12_0                     (0x1UL << GPIO_CRH_CNF12_Pos)      /*!< 0x00040000 */
#define GPIO_CRH_CNF12_1                     (0x2UL << GPIO_CRH_CNF12_Pos)      /*!< 0x00080000 */

#define GPIO_CRH_CNF13_Pos                   (22U)                             
#define GPIO_CRH_CNF13_Msk                   (0x3UL << GPIO_CRH_CNF13_Pos)      /*!< 0x00C00000 */
#define GPIO_CRH_CNF13                       GPIO_CRH_CNF13_Msk                /*!< CNF13[1:0] bits (Port x configuration bits, pin 13) */
#define GPIO_CRH_CNF13_0                     (0x1UL << GPIO_CRH_CNF13_Pos)      /*!< 0x00400000 */
#define GPIO_CRH_CNF13_1                     (0x2UL << GPIO_CRH_CNF13_Pos)      /*!< 0x00800000 */

#define GPIO_CRH_CNF14_Pos                   (26U)                             
#define GPIO_CRH_CNF14_Msk                   (0x3UL << GPIO_CRH_CNF14_Pos)      /*!< 0x0C000000 */
#define GPIO_CRH_CNF14                       GPIO_CRH_CNF14_Msk                /*!< CNF14[1:0] bits (Port x configuration bits, pin 14) */
#define GPIO_CRH_CNF14_0                     (0x1UL << GPIO_CRH_CNF14_Pos)      /*!< 0x04000000 */
#define GPIO_CRH_CNF14_1                     (0x2UL << GPIO_CRH_CNF14_Pos)      /*!< 0x08000000 */

#define GPIO_CRH_CNF15_Pos                   (30U)                             
#define GPIO_CRH_CNF15_Msk                   (0x3UL << GPIO_CRH_CNF15_Pos)      /*!< 0xC0000000 */
#define GPIO_CRH_CNF15                       GPIO_CRH_CNF15_Msk                /*!< CNF15[1:0] bits (Port x configuration bits, pin 15) */
#define GPIO_CRH_CNF15_0                     (0x1UL << GPIO_CRH_CNF15_Pos)      /*!< 0x40000000 */
#define GPIO_CRH_CNF15_1                     (0x2UL << GPIO_CRH_CNF15_Pos)      /*!< 0x80000000 */

#define GPIO_IDR_IDR0_Pos                    (0U)                              
#define GPIO_IDR_IDR0_Msk                    (0x1UL << GPIO_IDR_IDR0_Pos)       /*!< 0x00000001 */
#define GPIO_IDR_IDR0                        GPIO_IDR_IDR0_Msk                 /*!< Port input data, bit 0 */
#define GPIO_IDR_IDR1_Pos                    (1U)                              
#define GPIO_IDR_IDR1_Msk                    (0x1UL << GPIO_IDR_IDR1_Pos)       /*!< 0x00000002 */
#define GPIO_IDR_IDR1                        GPIO_IDR_IDR1_Msk                 /*!< Port input data, bit 1 */
#define GPIO_IDR_IDR2_Pos                    (2U)                              
#define GPIO_IDR_IDR2_Msk                    (0x1UL << GPIO_IDR_IDR2_Pos)       /*!< 0x00000004 */
#define GPIO_IDR_IDR2                        GPIO_IDR_IDR2_Msk                 /*!< Port input data, bit 2 */
#define GPIO_IDR_IDR3_Pos                    (3U)                              
#define GPIO_IDR_IDR3_Msk                    (0x1UL << GPIO_IDR_IDR3_Pos)       /*!< 0x00000008 */
#define GPIO_IDR_IDR3                        GPIO_IDR_IDR3_Msk                 /*!< Port input data, bit 3 */
#define GPIO_IDR_IDR4_Pos                    (4U)                              
#define GPIO_IDR_IDR4_Msk                    (0x1UL << GPIO_IDR_IDR4_Pos)       /*!< 0x00000010 */
#define GPIO_IDR_IDR4                        GPIO_IDR_IDR4_Msk                 /*!< Port input data, bit 4 */
#define GPIO_IDR_IDR5_Pos                    (5U)                              
#define GPIO_IDR_IDR5_Msk                    (0x1UL << GPIO_IDR_IDR5_Pos)       /*!< 0x00000020 */
#define GPIO_IDR_IDR5                        GPIO_IDR_IDR5_Msk                 /*!< Port input data, bit 5 */
#define GPIO_IDR_IDR6_Pos                    (6U)                              
#define GPIO_IDR_IDR6_Msk                    (0x1UL << GPIO_IDR_IDR6_Pos)       /*!< 0x00000040 */
#define GPIO_IDR_IDR6                        GPIO_IDR_IDR6_Msk                 /*!< Port input data, bit 6 */
#define GPIO_IDR_IDR7_Pos                    (7U)                              
#define GPIO_IDR_IDR7_Msk                    (0x1UL << GPIO_IDR_IDR7_Pos)       /*!< 0x00000080 */
#define GPIO_IDR_IDR7                        GPIO_IDR_IDR7_Msk                 /*!< Port input data, bit 7 */
#define GPIO_IDR_IDR8_Pos                    (8U)                              
#define GPIO_IDR_IDR8_Msk                    (0x1UL << GPIO_IDR_IDR8_Pos)       /*!< 0x00000100 */
#define GPIO_IDR_IDR8                        GPIO_IDR_IDR8_Msk                 /*!< Port input data, bit 8 */
#define GPIO_IDR_IDR9_Pos                    (9U)                              
#define GPIO_IDR_IDR9_Msk                    (0x1UL << GPIO_IDR_IDR9_Pos)       /*!< 0x00000200 */
#define GPIO_IDR_IDR9                        GPIO_IDR_IDR9_Msk                 /*!< Port input data, bit 9 */
#define GPIO_IDR_IDR10_Pos                   (10U)                             
#define GPIO_IDR_IDR10_Msk                   (0x1UL << GPIO_IDR_IDR10_Pos)      /*!< 0x00000400 */
#define GPIO_IDR_IDR10                       GPIO_IDR_IDR10_Msk                /*!< Port input data, bit 10 */
#define GPIO_IDR_IDR11_Pos                   (11U)                             
#define GPIO_IDR_IDR11_Msk                   (0x1UL << GPIO_IDR_IDR11_Pos)      /*!< 0x00000800 */
#define GPIO_IDR_IDR11                       GPIO_IDR_IDR11_Msk                /*!< Port input data, bit 11 */
#define GPIO_IDR_IDR12_Pos                   (12U)                             
#define GPIO_IDR_IDR12_Msk                   (0x1UL << GPIO_IDR_IDR12_Pos)      /*!< 0x00001000 */
#define GPIO_IDR_IDR12                       GPIO_IDR_IDR12_Msk                /*!< Port input data, bit 12 */
#define GPIO_IDR_IDR13_Pos                   (13U)                             
#define GPIO_IDR_IDR13_Msk                   (0x1UL << GPIO_IDR_IDR13_Pos)      /*!< 0x00002000 */
#define GPIO_IDR_IDR13                       GPIO_IDR_IDR13_Msk                /*!< Port input data, bit 13 */
#define GPIO_IDR_IDR14_Pos                   (14U)                             
#define GPIO_IDR_IDR14_Msk                   (0x1UL << GPIO_IDR_IDR14_Pos)      /*!< 0x00004000 */
#define GPIO_IDR_IDR14                       GPIO_IDR_IDR14_Msk                /*!< Port input data, bit 14 */
#define GPIO_IDR_IDR15_Pos                   (15U)                             
#define GPIO_IDR_IDR15_Msk                   (0x1UL << GPIO_IDR_IDR15_Pos)      /*!< 0x00008000 */
#define GPIO_IDR_IDR15                       GPIO_IDR_IDR15_Msk                /*!< Port input data, bit 15 */

#define GPIO_ODR_ODR0_Pos                    (0U)                              
#define GPIO_ODR_ODR0_Msk                    (0x1UL << GPIO_ODR_ODR0_Pos)       /*!< 0x00000001 */
#define GPIO_ODR_ODR0                        GPIO_ODR_ODR0_Msk                 /*!< Port output data, bit 0 */
#define GPIO_ODR_ODR1_Pos                    (1U)                              
#define GPIO_ODR_ODR1_Msk                    (0x1UL << GPIO_ODR_ODR1_Pos)       /*!< 0x00000002 */
#define GPIO_ODR_ODR1                        GPIO_ODR_ODR1_Msk                 /*!< Port output data, bit 1 */
#define GPIO_ODR_ODR2_Pos                    (2U)                              
#define GPIO_ODR_ODR2_Msk                    (0x1UL << GPIO_ODR_ODR2_Pos)       /*!< 0x00000004 */
#define GPIO_ODR_ODR2                        GPIO_ODR_ODR2_Msk                 /*!< Port output data, bit 2 */
#define GPIO_ODR_ODR3_Pos                    (3U)                              
#define GPIO_ODR_ODR3_Msk                    (0x1UL << GPIO_ODR_ODR3_Pos)       /*!< 0x00000008 */
#define GPIO_ODR_ODR3                        GPIO_ODR_ODR3_Msk                 /*!< Port output data, bit 3 */
#define GPIO_ODR_ODR4_Pos                    (4U)                              
#define GPIO_ODR_ODR4_Msk                    (0x1UL << GPIO_ODR_ODR4_Pos)       /*!< 0x00000010 */
#define GPIO_ODR_ODR4                        GPIO_ODR_ODR4_Msk                 /*!< Port output data, bit 4 */
#define GPIO_ODR_ODR5_Pos                    (5U)                              
#define GPIO_ODR_ODR5_Msk                    (0x1UL << GPIO_ODR_ODR5_Pos)       /*!< 0x00000020 */
#define GPIO_ODR_ODR5                        GPIO_ODR_ODR5_Msk                 /*!< Port output data, bit 5 */
#define GPIO_ODR_ODR6_Pos                    (6U)                              
#define GPIO_ODR_ODR6_Msk                    (0x1UL << GPIO_ODR_ODR6_Pos)       /*!< 0x00000040 */
#define GPIO_ODR_ODR6                        GPIO_ODR_ODR6_Msk                 /*!< Port output data, bit 6 */
#define GPIO_ODR_ODR7_Pos                    (7U)                              
#define GPIO_ODR_ODR7_Msk                    (0x1UL << GPIO_ODR_ODR7_Pos)       /*!< 0x00000080 */
#define GPIO_ODR_ODR7                        GPIO_ODR_ODR7_Msk                 /*!< Port output data, bit 7 */
#define GPIO_ODR_ODR8_Pos                    (8U)                              
#define GPIO_ODR_ODR8_Msk                    (0x1UL << GPIO_ODR_ODR8_Pos)       /*!< 0x00000100 */
#define GPIO_ODR_ODR8                        GPIO_ODR_ODR8_Msk                 /*!< Port output data, bit 8 */
#define GPIO_ODR_ODR9_Pos                    (9U)                              
#define GPIO_ODR_ODR9_Msk                    (0x1UL << GPIO_ODR_ODR9_Pos)       /*!< 0x00000200 */
#define GPIO_ODR_ODR9                        GPIO_ODR_ODR9_Msk                 /*!< Port output data, bit 9 */
#define GPIO_ODR_ODR10_Pos                   (10U)                             
#define GPIO_ODR_ODR10_Msk                   (0x1UL << GPIO_ODR_ODR10_Pos)      /*!< 0x00000400 */
#define GPIO_ODR_ODR10                       GPIO_ODR_ODR10_Msk                /*!< Port output data, bit 10 */
#define GPIO_ODR_ODR11_Pos                   (11U)                             
#define GPIO_ODR_ODR11_Msk                   (0x1UL << GPIO_ODR_ODR11_Pos)      /*!< 0x00000800 */
#define GPIO_ODR_ODR11                       GPIO_ODR_ODR11_Msk                /*!< Port output data, bit 11 */
#define GPIO_ODR_ODR12_Pos                   (12U)                             
#define GPIO_ODR_ODR12_Msk                   (0x1UL << GPIO_ODR_ODR12_Pos)      /*!< 0x00001000 */
#define GPIO_ODR_ODR12                       GPIO_ODR_ODR12_Msk                /*!< Port output data, bit 12 */
#define GPIO_ODR_ODR13_Pos                   (13U)                             
#define GPIO_ODR_ODR13_Msk                   (0x1UL << GPIO_ODR_ODR13_Pos)      /*!< 0x00002000 */
#define GPIO_ODR_ODR13                       GPIO_ODR_ODR13_Msk                /*!< Port output data, bit 13 */
#define GPIO_ODR_ODR14_Pos                   (14U)                             
#define GPIO_ODR_ODR14_Msk                   (0x1UL << GPIO_ODR_ODR14_Pos)      /*!< 0x00004000 */
#define GPIO_ODR_ODR14                       GPIO_ODR_ODR14_Msk                /*!< Port output data, bit 14 */
#define GPIO_ODR_ODR15_Pos                   (15U)                             
#define GPIO_ODR_ODR15_Msk                   (0x1UL << GPIO_ODR_ODR15_Pos)      /*!< 0x00008000 */
#define GPIO_ODR_ODR15                       GPIO_ODR_ODR15_Msk                /*!< Port output data, bit 15 */

#define GPIO_BSRR_BS0_Pos                    (0U)                              
#define GPIO_BSRR_BS0_Msk                    (0x1UL << GPIO_BSRR_BS0_Pos)       /*!< 0x00000001 */
#define GPIO_BSRR_BS0                        GPIO_BSRR_BS0_Msk                 /*!< Port x Set bit 0 */
#define GPIO_BSRR_BS1_Pos                    (1U)                              
#define GPIO_BSRR_BS1_Msk                    (0x1UL << GPIO_BSRR_BS1_Pos)       /*!< 0x00000002 */
#define GPIO_BSRR_BS1                        GPIO_BSRR_BS1_Msk                 /*!< Port x Set bit 1 */
#define GPIO_BSRR_BS2_Pos                    (2U)                              
#define GPIO_BSRR_BS2_Msk                    (0x1UL << GPIO_BSRR_BS2_Pos)       /*!< 0x00000004 */
#define GPIO_BSRR_BS2                        GPIO_BSRR_BS2_Msk                 /*!< Port x Set bit 2 */
#define GPIO_BSRR_BS3_Pos                    (3U)                              
#define GPIO_BSRR_BS3_Msk                    (0x1UL << GPIO_BSRR_BS3_Pos)       /*!< 0x00000008 */
#define GPIO_BSRR_BS3                        GPIO_BSRR_BS3_Msk                 /*!< Port x Set bit 3 */
#define GPIO_BSRR_BS4_Pos                    (4U)                              
#define GPIO_BSRR_BS4_Msk                    (0x1UL << GPIO_BSRR_BS4_Pos)       /*!< 0x00000010 */
#define GPIO_BSRR_BS4                        GPIO_BSRR_BS4_Msk                 /*!< Port x Set bit 4 */
#define GPIO_BSRR_BS5_Pos                    (5U)                              
#define GPIO_BSRR_BS5_Msk                    (0x1UL << GPIO_BSRR_BS5_Pos)       /*!< 0x00000020 */
#define GPIO_BSRR_BS5                        GPIO_BSRR_BS5_Msk                 /*!< Port x Set bit 5 */
#define GPIO_BSRR_BS6_Pos                    (6U)                              
#define GPIO_BSRR_BS6_Msk                    (0x1UL << GPIO_BSRR_BS6_Pos)       /*!< 0x00000040 */
#define GPIO_BSRR_BS6                        GPIO_BSRR_BS6_Msk                 /*!< Port x Set bit 6 */
#define GPIO_BSRR_BS7_Pos                    (7U)                              
#define GPIO_BSRR_BS7_Msk                    (0x1UL << GPIO_BSRR_BS7_Pos)       /*!< 0x00000080 */
#define GPIO_BSRR_BS7                        GPIO_BSRR_BS7_Msk                 /*!< Port x Set bit 7 */
#define GPIO_BSRR_BS8_Pos                    (8U)                              
#define GPIO_BSRR_BS8_Msk                    (0x1UL << GPIO_BSRR_BS8_Pos)       /*!< 0x00000100 */
#define GPIO_BSRR_BS8                        GPIO_BSRR_BS8_Msk                 /*!< Port x Set bit 8 */
#define GPIO_BSRR_BS9_Pos                    (9U)                              
#define GPIO_BSRR_BS9_Msk                    (0x1UL << GPIO_BSRR_BS9_Pos)       /*!< 0x00000200 */
#define GPIO_BSRR_BS9                        GPIO_BSRR_BS9_Msk                 /*!< Port x Set bit 9 */
#define GPIO_BSRR_BS10_Pos                   (10U)                             
#define GPIO_BSRR_BS10_Msk                   (0x1UL << GPIO_BSRR_BS10_Pos)      /*!< 0x00000400 */
#define GPIO_BSRR_BS10                       GPIO_BSRR_BS10_Msk                /*!< Port x Set bit 10 */
#define GPIO_BSRR_BS11_Pos                   (11U)                             
#define GPIO_BSRR_BS11_Msk                   (0x1UL << GPIO_BSRR_BS11_Pos)      /*!< 0x00000800 */
#define GPIO_BSRR_BS11                       GPIO_BSRR_BS11_Msk                /*!< Port x Set bit 11 */
#define GPIO_BSRR_BS12_Pos                   (12U)                             
#define GPIO_BSRR_BS12_Msk                   (0x1UL << GPIO_BSRR_BS12_Pos)      /*!< 0x00001000 */
#define GPIO_BSRR_BS12                       GPIO_BSRR_BS12_Msk                /*!< Port x Set bit 12 */
#define GPIO_BSRR_BS13_Pos                   (13U)                             
#define GPIO_BSRR_BS13_Msk                   (0x1UL << GPIO_BSRR_BS13_Pos)      /*!< 0x00002000 */
#define GPIO_BSRR_BS13                       GPIO_BSRR_BS13_Msk                /*!< Port x Set bit 13 */
#define GPIO_BSRR_BS14_Pos                   (14U)                             
#define GPIO_BSRR_BS14_Msk                   (0x1UL << GPIO_BSRR_BS14_Pos)      /*!< 0x00004000 */
#define GPIO_BSRR_BS14                       GPIO_BSRR_BS14_Msk                /*!< Port x Set bit 14 */
#define GPIO_BSRR_BS15_Pos                   (15U)                             
#define GPIO_BSRR_BS15_Msk                   (0x1UL << GPIO_BSRR_BS15_Pos)      /*!< 0x00008000 */
#define GPIO_BSRR_BS15                       GPIO_BSRR_BS15_Msk                /*!< Port x Set bit 15 */

#define GPIO_BSRR_BR0_Pos                    (16U)                             
#define GPIO_BSRR_BR0_Msk                    (0x1UL << GPIO_BSRR_BR0_Pos)       /*!< 0x00010000 */
#define GPIO_BSRR_BR0                        GPIO_BSRR_BR0_Msk                 /*!< Port x Reset bit 0 */
#define GPIO_BSRR_BR1_Pos                    (17U)                             
#define GPIO_BSRR_BR1_Msk                    (0x1UL << GPIO_BSRR_BR1_Pos)       /*!< 0x00020000 */
#define GPIO_BSRR_BR1                        GPIO_BSRR_BR1_Msk                 /*!< Port x Reset bit 1 */
#define GPIO_BSRR_BR2_Pos                    (18U)                             
#define GPIO_BSRR_BR2_Msk                    (0x1UL << GPIO_BSRR_BR2_Pos)       /*!< 0x00040000 */
#define GPIO_BSRR_BR2                        GPIO_BSRR_BR2_Msk                 /*!< Port x Reset bit 2 */
#define GPIO_BSRR_BR3_Pos                    (19U)                             
#define GPIO_BSRR_BR3_Msk                    (0x1UL << GPIO_BSRR_BR3_Pos)       /*!< 0x00080000 */
#define GPIO_BSRR_BR3                        GPIO_BSRR_BR3_Msk                 /*!< Port x Reset bit 3 */
#define GPIO_BSRR_BR4_Pos                    (20U)                             
#define GPIO_BSRR_BR4_Msk                    (0x1UL << GPIO_BSRR_BR4_Pos)       /*!< 0x00100000 */
#define GPIO_BSRR_BR4                        GPIO_BSRR_BR4_Msk                 /*!< Port x Reset bit 4 */
#define GPIO_BSRR_BR5_Pos                    (21U)                             
#define GPIO_BSRR_BR5_Msk                    (0x1UL << GPIO_BSRR_BR5_Pos)       /*!< 0x00200000 */
#define GPIO_BSRR_BR5                        GPIO_BSRR_BR5_Msk                 /*!< Port x Reset bit 5 */
#define GPIO_BSRR_BR6_Pos                    (22U)                             
#define GPIO_BSRR_BR6_Msk                    (0x1UL << GPIO_BSRR_BR6_Pos)       /*!< 0x00400000 */
#define GPIO_BSRR_BR6                        GPIO_BSRR_BR6_Msk                 /*!< Port x Reset bit 6 */
#define GPIO_BSRR_BR7_Pos                    (23U)                             
#define GPIO_BSRR_BR7_Msk                    (0x1UL << GPIO_BSRR_BR7_Pos)       /*!< 0x00800000 */
#define GPIO_BSRR_BR7                        GPIO_BSRR_BR7_Msk                 /*!< Port x Reset bit 7 */
#define GPIO_BSRR_BR8_Pos                    (24U)                             
#define GPIO_BSRR_BR8_Msk                    (0x1UL << GPIO_BSRR_BR8_Pos)       /*!< 0x01000000 */
#define GPIO_BSRR_BR8                        GPIO_BSRR_BR8_Msk                 /*!< Port x Reset bit 8 */
#define GPIO_BSRR_BR9_Pos                    (25U)                             
#define GPIO_BSRR_BR9_Msk                    (0x1UL << GPIO_BSRR_BR9_Pos)       /*!< 0x02000000 */
#define GPIO_BSRR_BR9                        GPIO_BSRR_BR9_Msk                 /*!< Port x Reset bit 9 */
#define GPIO_BSRR_BR10_Pos                   (26U)                             
#define GPIO_BSRR_BR10_Msk                   (0x1UL << GPIO_BSRR_BR10_Pos)      /*!< 0x04000000 */
#define GPIO_BSRR_BR10                       GPIO_BSRR_BR10_Msk                /*!< Port x Reset bit 10 */
#define GPIO_BSRR_BR11_Pos                   (27U)                             
#define GPIO_BSRR_BR11_Msk                   (0x1UL << GPIO_BSRR_BR11_Pos)      /*!< 0x08000000 */
#define GPIO_BSRR_BR11                       GPIO_BSRR_BR11_Msk                /*!< Port x Reset bit 11 */
#define GPIO_BSRR_BR12_Pos                   (28U)                             
#define GPIO_BSRR_BR12_Msk                   (0x1UL << GPIO_BSRR_BR12_Pos)      /*!< 0x10000000 */
#define GPIO_BSRR_BR12                       GPIO_BSRR_BR12_Msk                /*!< Port x Reset bit 12 */
#define GPIO_BSRR_BR13_Pos                   (29U)                             
#define GPIO_BSRR_BR13_Msk                   (0x1UL << GPIO_BSRR_BR13_Pos)      /*!< 0x20000000 */
#define GPIO_BSRR_BR13                       GPIO_BSRR_BR13_Msk                /*!< Port x Reset bit 13 */
#define GPIO_BSRR_BR14_Pos                   (30U)                             
#define GPIO_BSRR_BR14_Msk                   (0x1UL << GPIO_BSRR_BR14_Pos)      /*!< 0x40000000 */
#define GPIO_BSRR_BR14                       GPIO_BSRR_BR14_Msk                /*!< Port x Reset bit 14 */
#define GPIO_BSRR_BR15_Pos                   (31U)                             
#define GPIO_BSRR_BR15_Msk                   (0x1UL << GPIO_BSRR_BR15_Pos)      /*!< 0x80000000 */
#define GPIO_BSRR_BR15                       GPIO_BSRR_BR15_Msk                /*!< Port x Reset bit 15 */

#define GPIO_BRR_BR0_Pos                     (0U)                              
#define GPIO_BRR_BR0_Msk                     (0x1UL << GPIO_BRR_BR0_Pos)        /*!< 0x00000001 */
#define GPIO_BRR_BR0                         GPIO_BRR_BR0_Msk                  /*!< Port x Reset bit 0 */
#define GPIO_BRR_BR1_Pos                     (1U)                              
#define GPIO_BRR_BR1_Msk                     (0x1UL << GPIO_BRR_BR1_Pos)        /*!< 0x00000002 */
#define GPIO_BRR_BR1                         GPIO_BRR_BR1_Msk                  /*!< Port x Reset bit 1 */
#define GPIO_BRR_BR2_Pos                     (2U)                              
#define GPIO_BRR_BR2_Msk                     (0x1UL << GPIO_BRR_BR2_Pos)        /*!< 0x00000004 */
#define GPIO_BRR_BR2                         GPIO_BRR_BR2_Msk                  /*!< Port x Reset bit 2 */
#define GPIO_BRR_BR3_Pos                     (3U)                              
#define GPIO_BRR_BR3_Msk                     (0x1UL << GPIO_BRR_BR3_Pos)        /*!< 0x00000008 */
#define GPIO_BRR_BR3                         GPIO_BRR_BR3_Msk                  /*!< Port x Reset bit 3 */
#define GPIO_BRR_BR4_Pos                     (4U)                              
#define GPIO_BRR_BR4_Msk                     (0x1UL << GPIO_BRR_BR4_Pos)        /*!< 0x00000010 */
#define GPIO_BRR_BR4                         GPIO_BRR_BR4_Msk                  /*!< Port x Reset bit 4 */
#define GPIO_BRR_BR5_Pos                     (5U)                              
#define GPIO_BRR_BR5_Msk                     (0x1UL << GPIO_BRR_BR5_Pos)        /*!< 0x00000020 */
#define GPIO_BRR_BR5                         GPIO_BRR_BR5_Msk                  /*!< Port x Reset bit 5 */
#define GPIO_BRR_BR6_Pos                     (6U)                              
#define GPIO_BRR_BR6_Msk                     (0x1UL << GPIO_BRR_BR6_Pos)        /*!< 0x00000040 */
#define GPIO_BRR_BR6                         GPIO_BRR_BR6_Msk                  /*!< Port x Reset bit 6 */
#define GPIO_BRR_BR7_Pos                     (7U)                              
#define GPIO_BRR_BR7_Msk                     (0x1UL << GPIO_BRR_BR7_Pos)        /*!< 0x00000080 */
#define GPIO_BRR_BR7                         GPIO_BRR_BR7_Msk                  /*!< Port x Reset bit 7 */
#define GPIO_BRR_BR8_Pos                     (8U)                              
#define GPIO_BRR_BR8_Msk                     (0x1UL << GPIO_BRR_BR8_Pos)        /*!< 0x00000100 */
#define GPIO_BRR_BR8                         GPIO_BRR_BR8_Msk                  /*!< Port x Reset bit 8 */
#define GPIO_BRR_BR9_Pos                     (9U)                              
#define GPIO_BRR_BR9_Msk                     (0x1UL << GPIO_BRR_BR9_Pos)        /*!< 0x00000200 */
#define GPIO_BRR_BR9                         GPIO_BRR_BR9_Msk                  /*!< Port x Reset bit 9 */
#define GPIO_BRR_BR10_Pos                    (10U)                             
#define GPIO_BRR_BR10_Msk                    (0x1UL << GPIO_BRR_BR10_Pos)       /*!< 0x00000400 */
#define GPIO_BRR_BR10                        GPIO_BRR_BR10_Msk                 /*!< Port x Reset bit 10 */
#define GPIO_BRR_BR11_Pos                    (11U)                             
#define GPIO_BRR_BR11_Msk                    (0x1UL << GPIO_BRR_BR11_Pos)       /*!< 0x00000800 */
#define GPIO_BRR_BR11                        GPIO_BRR_BR11_Msk                 /*!< Port x Reset bit 11 */
#define GPIO_BRR_BR12_Pos                    (12U)                             
#define GPIO_BRR_BR12_Msk                    (0x1UL << GPIO_BRR_BR12_Pos)       /*!< 0x00001000 */
#define GPIO_BRR_BR12                        GPIO_BRR_BR12_Msk                 /*!< Port x Reset bit 12 */
#define GPIO_BRR_BR13_Pos                    (13U)                             
#define GPIO_BRR_BR13_Msk                    (0x1UL << GPIO_BRR_BR13_Pos)       /*!< 0x00002000 */
#define GPIO_BRR_BR13                        GPIO_BRR_BR13_Msk                 /*!< Port x Reset bit 13 */
#define GPIO_BRR_BR14_Pos                    (14U)                             
#define GPIO_BRR_BR14_Msk                    (0x1UL << GPIO_BRR_BR14_Pos)       /*!< 0x00004000 */
#define GPIO_BRR_BR14                        GPIO_BRR_BR14_Msk                 /*!< Port x Reset bit 14 */
#define GPIO_BRR_BR15_Pos                    (15U)                             
#define GPIO_BRR_BR15_Msk                    (0x1UL << GPIO_BRR_BR15_Pos)       /*!< 0x00008000 */
#define GPIO_BRR_BR15                        GPIO_BRR_BR15_Msk                 /*!< Port x Reset bit 15 */

#define GPIO_LCKR_LCK0_Pos                   (0U)                              
#define GPIO_LCKR_LCK0_Msk                   (0x1UL << GPIO_LCKR_LCK0_Pos)      /*!< 0x00000001 */
#define GPIO_LCKR_LCK0                       GPIO_LCKR_LCK0_Msk                /*!< Port x Lock bit 0 */
#define GPIO_LCKR_LCK1_Pos                   (1U)                              
#define GPIO_LCKR_LCK1_Msk                   (0x1UL << GPIO_LCKR_LCK1_Pos)      /*!< 0x00000002 */
#define GPIO_LCKR_LCK1                       GPIO_LCKR_LCK1_Msk                /*!< Port x Lock bit 1 */
#define GPIO_LCKR_LCK2_Pos                   (2U)                              
#define GPIO_LCKR_LCK2_Msk                   (0x1UL << GPIO_LCKR_LCK2_Pos)      /*!< 0x00000004 */
#define GPIO_LCKR_LCK2                       GPIO_LCKR_LCK2_Msk                /*!< Port x Lock bit 2 */
#define GPIO_LCKR_LCK3_Pos                   (3U)                              
#define GPIO_LCKR_LCK3_Msk                   (0x1UL << GPIO_LCKR_LCK3_Pos)      /*!< 0x00000008 */
#define GPIO_LCKR_LCK3                       GPIO_LCKR_LCK3_Msk                /*!< Port x Lock bit 3 */
#define GPIO_LCKR_LCK4_Pos                   (4U)                              
#define GPIO_LCKR_LCK4_Msk                   (0x1UL << GPIO_LCKR_LCK4_Pos)      /*!< 0x00000010 */
#define GPIO_LCKR_LCK4                       GPIO_LCKR_LCK4_Msk                /*!< Port x Lock bit 4 */
#define GPIO_LCKR_LCK5_Pos                   (5U)                              
#define GPIO_LCKR_LCK5_Msk                   (0x1UL << GPIO_LCKR_LCK5_Pos)      /*!< 0x00000020 */
#define GPIO_LCKR_LCK5                       GPIO_LCKR_LCK5_Msk                /*!< Port x Lock bit 5 */
#define GPIO_LCKR_LCK6_Pos                   (6U)                              
#define GPIO_LCKR_LCK6_Msk                   (0x1UL << GPIO_LCKR_LCK6_Pos)      /*!< 0x00000040 */
#define GPIO_LCKR_LCK6                       GPIO_LCKR_LCK6_Msk                /*!< Port x Lock bit 6 */
#define GPIO_LCKR_LCK7_Pos                   (7U)                              
#define GPIO_LCKR_LCK7_Msk                   (0x1UL << GPIO_LCKR_LCK7_Pos)      /*!< 0x00000080 */
#define GPIO_LCKR_LCK7                       GPIO_LCKR_LCK7_Msk                /*!< Port x Lock bit 7 */
#define GPIO_LCKR_LCK8_Pos                   (8U)                              
#define GPIO_LCKR_LCK8_Msk                   (0x1UL << GPIO_LCKR_LCK8_Pos)      /*!< 0x00000100 */
#define GPIO_LCKR_LCK8                       GPIO_LCKR_LCK8_Msk                /*!< Port x Lock bit 8 */
#define GPIO_LCKR_LCK9_Pos                   (9U)                              
#define GPIO_LCKR_LCK9_Msk                   (0x1UL << GPIO_LCKR_LCK9_Pos)      /*!< 0x00000200 */
#define GPIO_LCKR_LCK9                       GPIO_LCKR_LCK9_Msk                /*!< Port x Lock bit 9 */
#define GPIO_LCKR_LCK10_Pos                  (10U)                             
#define GPIO_LCKR_LCK10_Msk                  (0x1UL << GPIO_LCKR_LCK10_Pos)     /*!< 0x00000400 */
#define GPIO_LCKR_LCK10                      GPIO_LCKR_LCK10_Msk               /*!< Port x Lock bit 10 */
#define GPIO_LCKR_LCK11_Pos                  (11U)                             
#define GPIO_LCKR_LCK11_Msk                  (0x1UL << GPIO_LCKR_LCK11_Pos)     /*!< 0x00000800 */
#define GPIO_LCKR_LCK11                      GPIO_LCKR_LCK11_Msk               /*!< Port x Lock bit 11 */
#define GPIO_LCKR_LCK12_Pos                  (12U)                             
#define GPIO_LCKR_LCK12_Msk                  (0x1UL << GPIO_LCKR_LCK12_Pos)     /*!< 0x00001000 */
#define GPIO_LCKR_LCK12                      GPIO_LCKR_LCK12_Msk               /*!< Port x Lock bit 12 */
#define GPIO_LCKR_LCK13_Pos                  (13U)                             
#define GPIO_LCKR_LCK13_Msk                  (0x1UL << GPIO_LCKR_LCK13_Pos)     /*!< 0x00002000 */
#define GPIO_LCKR_LCK13                      GPIO_LCKR_LCK13_Msk               /*!< Port x Lock bit 13 */
#define GPIO_LCKR_LCK14_Pos                  (14U)                             
#define GPIO_LCKR_LCK14_Msk                  (0x1UL << GPIO_LCKR_LCK14_Pos)     /*!< 0x00004000 */
#define GPIO_LCKR_LCK14                      GPIO_LCKR_LCK14_Msk               /*!< Port x Lock bit 14 */
#define GPIO_LCKR_LCK15_Pos                  (15U)                             
#define GPIO_LCKR_LCK15_Msk                  (0x1UL << GPIO_LCKR_LCK15_Pos)     /*!< 0x00008000 */
#define GPIO_LCKR_LCK15                      GPIO_LCKR_LCK15_Msk               /*!< Port x Lock bit 15 */
#define GPIO_LCKR_LCKK_Pos                   (16U)                             
#define GPIO_LCKR_LCKK_Msk                   (0x1UL << GPIO_LCKR_LCKK_Pos)      /*!< 0x00010000 */
#define GPIO_LCKR_LCKK                       GPIO_LCKR_LCKK_Msk                /*!< Lock key */

#endif /* STM32F103C8_GPIO_H */
