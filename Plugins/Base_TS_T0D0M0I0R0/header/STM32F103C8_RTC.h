#ifndef STM32F103C8_RTC_H
#define STM32F103C8_RTC_H

#include "STM32F103C8_COMMON.h"

/** 
  * @brief Real-Time Clock
  */

typedef struct
{
  __IO uint32_t CRH;
  __IO uint32_t CRL;
  __IO uint32_t PRLH;
  __IO uint32_t PRLL;
  __IO uint32_t DIVH;
  __IO uint32_t DIVL;
  __IO uint32_t CNTH;
  __IO uint32_t CNTL;
  __IO uint32_t ALRH;
  __IO uint32_t ALRL;
} RTC_TypeDef;

#define RTC_BASE              (APB1PERIPH_BASE + 0x00002800UL)

#define RTC                   ((RTC_TypeDef *)RTC_BASE)

#define RTC_BKP_NUMBER 10

#define RTC_CRH_SECIE_Pos                   (0U)                               
#define RTC_CRH_SECIE_Msk                   (0x1UL << RTC_CRH_SECIE_Pos)        /*!< 0x00000001 */
#define RTC_CRH_SECIE                       RTC_CRH_SECIE_Msk                  /*!< Second Interrupt Enable */
#define RTC_CRH_ALRIE_Pos                   (1U)                               
#define RTC_CRH_ALRIE_Msk                   (0x1UL << RTC_CRH_ALRIE_Pos)        /*!< 0x00000002 */
#define RTC_CRH_ALRIE                       RTC_CRH_ALRIE_Msk                  /*!< Alarm Interrupt Enable */
#define RTC_CRH_OWIE_Pos                    (2U)                               
#define RTC_CRH_OWIE_Msk                    (0x1UL << RTC_CRH_OWIE_Pos)         /*!< 0x00000004 */
#define RTC_CRH_OWIE                        RTC_CRH_OWIE_Msk                   /*!< OverfloW Interrupt Enable */

#define RTC_CRL_SECF_Pos                    (0U)                               
#define RTC_CRL_SECF_Msk                    (0x1UL << RTC_CRL_SECF_Pos)         /*!< 0x00000001 */
#define RTC_CRL_SECF                        RTC_CRL_SECF_Msk                   /*!< Second Flag */
#define RTC_CRL_ALRF_Pos                    (1U)                               
#define RTC_CRL_ALRF_Msk                    (0x1UL << RTC_CRL_ALRF_Pos)         /*!< 0x00000002 */
#define RTC_CRL_ALRF                        RTC_CRL_ALRF_Msk                   /*!< Alarm Flag */
#define RTC_CRL_OWF_Pos                     (2U)                               
#define RTC_CRL_OWF_Msk                     (0x1UL << RTC_CRL_OWF_Pos)          /*!< 0x00000004 */
#define RTC_CRL_OWF                         RTC_CRL_OWF_Msk                    /*!< OverfloW Flag */
#define RTC_CRL_RSF_Pos                     (3U)                               
#define RTC_CRL_RSF_Msk                     (0x1UL << RTC_CRL_RSF_Pos)          /*!< 0x00000008 */
#define RTC_CRL_RSF                         RTC_CRL_RSF_Msk                    /*!< Registers Synchronized Flag */
#define RTC_CRL_CNF_Pos                     (4U)                               
#define RTC_CRL_CNF_Msk                     (0x1UL << RTC_CRL_CNF_Pos)          /*!< 0x00000010 */
#define RTC_CRL_CNF                         RTC_CRL_CNF_Msk                    /*!< Configuration Flag */
#define RTC_CRL_RTOFF_Pos                   (5U)                               
#define RTC_CRL_RTOFF_Msk                   (0x1UL << RTC_CRL_RTOFF_Pos)        /*!< 0x00000020 */
#define RTC_CRL_RTOFF                       RTC_CRL_RTOFF_Msk                  /*!< RTC operation OFF */

#define RTC_PRLH_PRL_Pos                    (0U)                               
#define RTC_PRLH_PRL_Msk                    (0xFUL << RTC_PRLH_PRL_Pos)         /*!< 0x0000000F */
#define RTC_PRLH_PRL                        RTC_PRLH_PRL_Msk                   /*!< RTC Prescaler Reload Value High */

#define RTC_PRLL_PRL_Pos                    (0U)                               
#define RTC_PRLL_PRL_Msk                    (0xFFFFUL << RTC_PRLL_PRL_Pos)      /*!< 0x0000FFFF */
#define RTC_PRLL_PRL                        RTC_PRLL_PRL_Msk                   /*!< RTC Prescaler Reload Value Low */

#define RTC_DIVH_RTC_DIV_Pos                (0U)                               
#define RTC_DIVH_RTC_DIV_Msk                (0xFUL << RTC_DIVH_RTC_DIV_Pos)     /*!< 0x0000000F */
#define RTC_DIVH_RTC_DIV                    RTC_DIVH_RTC_DIV_Msk               /*!< RTC Clock Divider High */

#define RTC_DIVL_RTC_DIV_Pos                (0U)                               
#define RTC_DIVL_RTC_DIV_Msk                (0xFFFFUL << RTC_DIVL_RTC_DIV_Pos)  /*!< 0x0000FFFF */
#define RTC_DIVL_RTC_DIV                    RTC_DIVL_RTC_DIV_Msk               /*!< RTC Clock Divider Low */

#define RTC_CNTH_RTC_CNT_Pos                (0U)                               
#define RTC_CNTH_RTC_CNT_Msk                (0xFFFFUL << RTC_CNTH_RTC_CNT_Pos)  /*!< 0x0000FFFF */
#define RTC_CNTH_RTC_CNT                    RTC_CNTH_RTC_CNT_Msk               /*!< RTC Counter High */

#define RTC_CNTL_RTC_CNT_Pos                (0U)                               
#define RTC_CNTL_RTC_CNT_Msk                (0xFFFFUL << RTC_CNTL_RTC_CNT_Pos)  /*!< 0x0000FFFF */
#define RTC_CNTL_RTC_CNT                    RTC_CNTL_RTC_CNT_Msk               /*!< RTC Counter Low */

#define RTC_ALRH_RTC_ALR_Pos                (0U)                               
#define RTC_ALRH_RTC_ALR_Msk                (0xFFFFUL << RTC_ALRH_RTC_ALR_Pos)  /*!< 0x0000FFFF */
#define RTC_ALRH_RTC_ALR                    RTC_ALRH_RTC_ALR_Msk               /*!< RTC Alarm High */

#define RTC_ALRL_RTC_ALR_Pos                (0U)                               
#define RTC_ALRL_RTC_ALR_Msk                (0xFFFFUL << RTC_ALRL_RTC_ALR_Pos)  /*!< 0x0000FFFF */
#define RTC_ALRL_RTC_ALR                    RTC_ALRL_RTC_ALR_Msk               /*!< RTC Alarm Low */

#endif /* STM32F103C8_RTC_H */
