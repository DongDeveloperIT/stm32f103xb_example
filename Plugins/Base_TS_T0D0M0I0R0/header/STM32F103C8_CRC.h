#ifndef STM32F103C8_CRC_H
#define STM32F103C8_CRC_H

#include "STM32F103C8_COMMON.h"


/** 
  * @brief CRC calculation unit 
  */

typedef struct
{
  __IO uint32_t DR;           /*!< CRC Data register,                           Address offset: 0x00 */
  __IO uint8_t  IDR;          /*!< CRC Independent data register,               Address offset: 0x04 */
  uint8_t       RESERVED0;    /*!< Reserved,                                    Address offset: 0x05 */
  uint16_t      RESERVED1;    /*!< Reserved,                                    Address offset: 0x06 */  
  __IO uint32_t CR;           /*!< CRC Control register,                        Address offset: 0x08 */ 
} CRC_TypeDef;

#define CRC_BASE              (AHBPERIPH_BASE + 0x00003000UL)

#define CRC                 ((CRC_TypeDef *)CRC_BASE)

#define CRC_DR_DR_Pos                       (0U)                               
#define CRC_DR_DR_Msk                       (0xFFFFFFFFUL << CRC_DR_DR_Pos)     /*!< 0xFFFFFFFF */
#define CRC_DR_DR                           CRC_DR_DR_Msk                      /*!< Data register bits */

#define CRC_IDR_IDR_Pos                     (0U)                               
#define CRC_IDR_IDR_Msk                     (0xFFUL << CRC_IDR_IDR_Pos)         /*!< 0x000000FF */
#define CRC_IDR_IDR                         CRC_IDR_IDR_Msk                    /*!< General-purpose 8-bit data register bits */

#define CRC_CR_RESET_Pos                    (0U)                               
#define CRC_CR_RESET_Msk                    (0x1UL << CRC_CR_RESET_Pos)         /*!< 0x00000001 */
#define CRC_CR_RESET                        CRC_CR_RESET_Msk                   /*!< RESET bit */

#endif /* STM32F103C8_CRC_H */
