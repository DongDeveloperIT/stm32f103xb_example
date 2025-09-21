
#ifndef PORT_IP_TYPES_H
#define PORT_IP_TYPES_H

#if defined(__cplusplus)
extern "C" {
#endif

/*==================================================================================================
*                                          INCLUDE FILES
==================================================================================================*/
#include "STM32F103C8_GPIO.h"

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/*!
 * @brief Type of a port levels representation.
 */
typedef uint8 Port_Ip_PortPinsLevelType;

/*!
 * @brief 
 */
typedef enum
{
    PORT_INTERNAL_PULL_DOWN_ENABLED      = 0U,  /*!< internal pull-down resistor is enabled.     */
    PORT_INTERNAL_PULL_UP_ENABLED        = 1U,  /*!< internal pull-up resistor is enabled.       */
    PORT_INTERNAL_PULL_NOT_ENABLED       = 2U   /*!< internal pull-down/up resistor is disabled. */
} Port_Ip_PortPullConfig;

/*!
 * @brief Configures the Pin output muxing selection
 */
typedef enum
{
    PORT_MUX_AS_GPIO            = 0U,   /*!< corresponding pin is configured as GPIO */
    PORT_MUX_ALT1               = 1U,   /*!< chip-specific                           */
    PORT_MUX_ALT2               = 2U,   /*!< chip-specific                           */
    PORT_MUX_ALT3               = 3U,   /*!< chip-specific                           */
    PORT_MUX_ALT4               = 4U,   /*!< chip-specific                           */
    PORT_MUX_ALT5               = 5U,   /*!< chip-specific                           */
    PORT_MUX_ALT6               = 6U,   /*!< chip-specific                           */
    PORT_MUX_ALT7               = 7U,   /*!< chip-specific                           */
    PORT_MUX_ALT8               = 8U,   /*!< chip-specific                           */
    PORT_MUX_ALT9               = 9U,   /*!< chip-specific                           */
    PORT_MUX_ALT10              = 10U,  /*!< chip-specific                           */
    PORT_MUX_ALT11              = 11U,  /*!< chip-specific                           */
    PORT_MUX_ALT12              = 12U,  /*!< chip-specific                           */
    PORT_MUX_ALT13              = 13U,  /*!< chip-specific                           */
    PORT_MUX_ALT14              = 14U,  /*!< chip-specific                           */
    PORT_MUX_ALT15              = 15U,  /*!< chip-specific                           */
    PORT_MUX_NOT_AVAILABLE      = 16U   /*!< chip-specific                           */
} Port_Ip_PortMux;

typedef enum
{
   PORT_SUCCESS = 0x00U,
   PORT_ERROR   = 0x01U
}Port_Ip_PortStatusType;

/*!
 * @brief Configures port direction.
 */
typedef enum
{
    PORT_IN = 0U,         /**< @brief Sets port pin as input. */
    PORT_OUT = 1U,        /**< @brief Sets port pin as output. */
    PORT_IN_OUT = 2U,     /**< @brief Sets port pin as bidirectional. */
    PORT_HI_Z = 3U        /**< @brief Sets port pin as high_z. */
} Port_Ip_PortDirectionType;

/*!
 * @brief Defines the converter configuration
 *
 */
typedef struct
{
    GPIO_TypeDef                   *base;                   /*!< The main GPIO base pointer.                               */
    uint32                         pinPortIdx;              /*!< Port pin number.                                           */
    Port_Ip_PortPullConfig         pullConfig;              /*!< Internal resistor pull feature selection.                  */
} Port_Ip_PinSettingsConfig;

/** PORT - Register Layout Typedef */
typedef struct {
  __IO  uint32 MSCR[16];
} Port_Ip_PortType;

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/

#if defined(__cplusplus)
}
#endif

/** @} */

#endif /* PORT_IP_Types_H */
