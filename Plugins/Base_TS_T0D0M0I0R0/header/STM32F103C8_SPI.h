#ifndef STM32F103C8_SPI_H
#define STM32F103C8_SPI_H

#include "STM32F103C8_COMMON.h"

/** 
  * @brief Serial Peripheral Interface
  */

typedef struct
{
  __IO uint32_t CR1;
  __IO uint32_t CR2;
  __IO uint32_t SR;
  __IO uint32_t DR;
  __IO uint32_t CRCPR;
  __IO uint32_t RXCRCR;
  __IO uint32_t TXCRCR;
  __IO uint32_t I2SCFGR;
} SPI_TypeDef;

#define SPI1_BASE             (APB2PERIPH_BASE + 0x00003000UL)
#define SPI2_BASE             (APB1PERIPH_BASE + 0x00003800UL)

#define SPI1                ((SPI_TypeDef *)SPI1_BASE)
#define SPI2                ((SPI_TypeDef *)SPI2_BASE)

#define SPI_CR1_CPHA_Pos                    (0U)                               
#define SPI_CR1_CPHA_Msk                    (0x1UL << SPI_CR1_CPHA_Pos)         /*!< 0x00000001 */
#define SPI_CR1_CPHA                        SPI_CR1_CPHA_Msk                   /*!< Clock Phase */
#define SPI_CR1_CPOL_Pos                    (1U)                               
#define SPI_CR1_CPOL_Msk                    (0x1UL << SPI_CR1_CPOL_Pos)         /*!< 0x00000002 */
#define SPI_CR1_CPOL                        SPI_CR1_CPOL_Msk                   /*!< Clock Polarity */
#define SPI_CR1_MSTR_Pos                    (2U)                               
#define SPI_CR1_MSTR_Msk                    (0x1UL << SPI_CR1_MSTR_Pos)         /*!< 0x00000004 */
#define SPI_CR1_MSTR                        SPI_CR1_MSTR_Msk                   /*!< Master Selection */

#define SPI_CR1_BR_Pos                      (3U)                               
#define SPI_CR1_BR_Msk                      (0x7UL << SPI_CR1_BR_Pos)           /*!< 0x00000038 */
#define SPI_CR1_BR                          SPI_CR1_BR_Msk                     /*!< BR[2:0] bits (Baud Rate Control) */
#define SPI_CR1_BR_0                        (0x1UL << SPI_CR1_BR_Pos)           /*!< 0x00000008 */
#define SPI_CR1_BR_1                        (0x2UL << SPI_CR1_BR_Pos)           /*!< 0x00000010 */
#define SPI_CR1_BR_2                        (0x4UL << SPI_CR1_BR_Pos)           /*!< 0x00000020 */

#define SPI_CR1_SPE_Pos                     (6U)                               
#define SPI_CR1_SPE_Msk                     (0x1UL << SPI_CR1_SPE_Pos)          /*!< 0x00000040 */
#define SPI_CR1_SPE                         SPI_CR1_SPE_Msk                    /*!< SPI Enable */
#define SPI_CR1_LSBFIRST_Pos                (7U)                               
#define SPI_CR1_LSBFIRST_Msk                (0x1UL << SPI_CR1_LSBFIRST_Pos)     /*!< 0x00000080 */
#define SPI_CR1_LSBFIRST                    SPI_CR1_LSBFIRST_Msk               /*!< Frame Format */
#define SPI_CR1_SSI_Pos                     (8U)                               
#define SPI_CR1_SSI_Msk                     (0x1UL << SPI_CR1_SSI_Pos)          /*!< 0x00000100 */
#define SPI_CR1_SSI                         SPI_CR1_SSI_Msk                    /*!< Internal slave select */
#define SPI_CR1_SSM_Pos                     (9U)                               
#define SPI_CR1_SSM_Msk                     (0x1UL << SPI_CR1_SSM_Pos)          /*!< 0x00000200 */
#define SPI_CR1_SSM                         SPI_CR1_SSM_Msk                    /*!< Software slave management */
#define SPI_CR1_RXONLY_Pos                  (10U)                              
#define SPI_CR1_RXONLY_Msk                  (0x1UL << SPI_CR1_RXONLY_Pos)       /*!< 0x00000400 */
#define SPI_CR1_RXONLY                      SPI_CR1_RXONLY_Msk                 /*!< Receive only */
#define SPI_CR1_DFF_Pos                     (11U)                              
#define SPI_CR1_DFF_Msk                     (0x1UL << SPI_CR1_DFF_Pos)          /*!< 0x00000800 */
#define SPI_CR1_DFF                         SPI_CR1_DFF_Msk                    /*!< Data Frame Format */
#define SPI_CR1_CRCNEXT_Pos                 (12U)                              
#define SPI_CR1_CRCNEXT_Msk                 (0x1UL << SPI_CR1_CRCNEXT_Pos)      /*!< 0x00001000 */
#define SPI_CR1_CRCNEXT                     SPI_CR1_CRCNEXT_Msk                /*!< Transmit CRC next */
#define SPI_CR1_CRCEN_Pos                   (13U)                              
#define SPI_CR1_CRCEN_Msk                   (0x1UL << SPI_CR1_CRCEN_Pos)        /*!< 0x00002000 */
#define SPI_CR1_CRCEN                       SPI_CR1_CRCEN_Msk                  /*!< Hardware CRC calculation enable */
#define SPI_CR1_BIDIOE_Pos                  (14U)                              
#define SPI_CR1_BIDIOE_Msk                  (0x1UL << SPI_CR1_BIDIOE_Pos)       /*!< 0x00004000 */
#define SPI_CR1_BIDIOE                      SPI_CR1_BIDIOE_Msk                 /*!< Output enable in bidirectional mode */
#define SPI_CR1_BIDIMODE_Pos                (15U)                              
#define SPI_CR1_BIDIMODE_Msk                (0x1UL << SPI_CR1_BIDIMODE_Pos)     /*!< 0x00008000 */
#define SPI_CR1_BIDIMODE                    SPI_CR1_BIDIMODE_Msk               /*!< Bidirectional data mode enable */

#define SPI_CR2_RXDMAEN_Pos                 (0U)                               
#define SPI_CR2_RXDMAEN_Msk                 (0x1UL << SPI_CR2_RXDMAEN_Pos)      /*!< 0x00000001 */
#define SPI_CR2_RXDMAEN                     SPI_CR2_RXDMAEN_Msk                /*!< Rx Buffer DMA Enable */
#define SPI_CR2_TXDMAEN_Pos                 (1U)                               
#define SPI_CR2_TXDMAEN_Msk                 (0x1UL << SPI_CR2_TXDMAEN_Pos)      /*!< 0x00000002 */
#define SPI_CR2_TXDMAEN                     SPI_CR2_TXDMAEN_Msk                /*!< Tx Buffer DMA Enable */
#define SPI_CR2_SSOE_Pos                    (2U)                               
#define SPI_CR2_SSOE_Msk                    (0x1UL << SPI_CR2_SSOE_Pos)         /*!< 0x00000004 */
#define SPI_CR2_SSOE                        SPI_CR2_SSOE_Msk                   /*!< SS Output Enable */
#define SPI_CR2_ERRIE_Pos                   (5U)                               
#define SPI_CR2_ERRIE_Msk                   (0x1UL << SPI_CR2_ERRIE_Pos)        /*!< 0x00000020 */
#define SPI_CR2_ERRIE                       SPI_CR2_ERRIE_Msk                  /*!< Error Interrupt Enable */
#define SPI_CR2_RXNEIE_Pos                  (6U)                               
#define SPI_CR2_RXNEIE_Msk                  (0x1UL << SPI_CR2_RXNEIE_Pos)       /*!< 0x00000040 */
#define SPI_CR2_RXNEIE                      SPI_CR2_RXNEIE_Msk                 /*!< RX buffer Not Empty Interrupt Enable */
#define SPI_CR2_TXEIE_Pos                   (7U)                               
#define SPI_CR2_TXEIE_Msk                   (0x1UL << SPI_CR2_TXEIE_Pos)        /*!< 0x00000080 */
#define SPI_CR2_TXEIE                       SPI_CR2_TXEIE_Msk                  /*!< Tx buffer Empty Interrupt Enable */

#define SPI_SR_RXNE_Pos                     (0U)                               
#define SPI_SR_RXNE_Msk                     (0x1UL << SPI_SR_RXNE_Pos)          /*!< 0x00000001 */
#define SPI_SR_RXNE                         SPI_SR_RXNE_Msk                    /*!< Receive buffer Not Empty */
#define SPI_SR_TXE_Pos                      (1U)                               
#define SPI_SR_TXE_Msk                      (0x1UL << SPI_SR_TXE_Pos)           /*!< 0x00000002 */
#define SPI_SR_TXE                          SPI_SR_TXE_Msk                     /*!< Transmit buffer Empty */
#define SPI_SR_CHSIDE_Pos                   (2U)                               
#define SPI_SR_CHSIDE_Msk                   (0x1UL << SPI_SR_CHSIDE_Pos)        /*!< 0x00000004 */
#define SPI_SR_CHSIDE                       SPI_SR_CHSIDE_Msk                  /*!< Channel side */
#define SPI_SR_UDR_Pos                      (3U)                               
#define SPI_SR_UDR_Msk                      (0x1UL << SPI_SR_UDR_Pos)           /*!< 0x00000008 */
#define SPI_SR_UDR                          SPI_SR_UDR_Msk                     /*!< Underrun flag */
#define SPI_SR_CRCERR_Pos                   (4U)                               
#define SPI_SR_CRCERR_Msk                   (0x1UL << SPI_SR_CRCERR_Pos)        /*!< 0x00000010 */
#define SPI_SR_CRCERR                       SPI_SR_CRCERR_Msk                  /*!< CRC Error flag */
#define SPI_SR_MODF_Pos                     (5U)                               
#define SPI_SR_MODF_Msk                     (0x1UL << SPI_SR_MODF_Pos)          /*!< 0x00000020 */
#define SPI_SR_MODF                         SPI_SR_MODF_Msk                    /*!< Mode fault */
#define SPI_SR_OVR_Pos                      (6U)                               
#define SPI_SR_OVR_Msk                      (0x1UL << SPI_SR_OVR_Pos)           /*!< 0x00000040 */
#define SPI_SR_OVR                          SPI_SR_OVR_Msk                     /*!< Overrun flag */
#define SPI_SR_BSY_Pos                      (7U)                               
#define SPI_SR_BSY_Msk                      (0x1UL << SPI_SR_BSY_Pos)           /*!< 0x00000080 */
#define SPI_SR_BSY                          SPI_SR_BSY_Msk                     /*!< Busy flag */

#define SPI_DR_DR_Pos                       (0U)                               
#define SPI_DR_DR_Msk                       (0xFFFFUL << SPI_DR_DR_Pos)         /*!< 0x0000FFFF */
#define SPI_DR_DR                           SPI_DR_DR_Msk                      /*!< Data Register */

#define SPI_CRCPR_CRCPOLY_Pos               (0U)                               
#define SPI_CRCPR_CRCPOLY_Msk               (0xFFFFUL << SPI_CRCPR_CRCPOLY_Pos) /*!< 0x0000FFFF */
#define SPI_CRCPR_CRCPOLY                   SPI_CRCPR_CRCPOLY_Msk              /*!< CRC polynomial register */

#define SPI_RXCRCR_RXCRC_Pos                (0U)                               
#define SPI_RXCRCR_RXCRC_Msk                (0xFFFFUL << SPI_RXCRCR_RXCRC_Pos)  /*!< 0x0000FFFF */
#define SPI_RXCRCR_RXCRC                    SPI_RXCRCR_RXCRC_Msk               /*!< Rx CRC Register */

#define SPI_TXCRCR_TXCRC_Pos                (0U)                               
#define SPI_TXCRCR_TXCRC_Msk                (0xFFFFUL << SPI_TXCRCR_TXCRC_Pos)  /*!< 0x0000FFFF */
#define SPI_TXCRCR_TXCRC                    SPI_TXCRCR_TXCRC_Msk               /*!< Tx CRC Register */

#define SPI_I2SCFGR_I2SMOD_Pos              (11U)                              
#define SPI_I2SCFGR_I2SMOD_Msk              (0x1UL << SPI_I2SCFGR_I2SMOD_Pos)   /*!< 0x00000800 */
#define SPI_I2SCFGR_I2SMOD                  SPI_I2SCFGR_I2SMOD_Msk             /*!< I2S mode selection */

#endif /* STM32F103C8_SPI_H */
