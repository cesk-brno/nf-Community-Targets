//
// Copyright (c) .NET Foundation and Contributors
// See LICENSE file in the project root for full license information.
//

#ifndef BOARD_H
#define BOARD_H

/*
 * Board identifier.
 */
#define BOARD_CESKDUINO
#define BOARD_NAME "Ceskduino"

#define BOARD_OTG_NOVBUSSENS

/*
 * Board oscillators-related settings.
 * NOTE: LSE not fitted.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK 32768U
#endif

#if !defined(STM32_HSECLK)
#define STM32_HSECLK 25000000U
#endif

/*
 * Board voltages.
 * Required for performance limits calculation.
 */
#define STM32_VDD 300U

/*
 * MCU type as defined in the ST header.
 */
#define STM32F405xx

/*
 * IO pins assignments.
 */
#define GPIOA_RS232_TX    0U  // COM3 (uFramework)
#define GPIOA_RS232_RX    1U  // COM3 (uFramework)
#define GPIOA_RS485_TX   2U  // BUTTONS RS485 (COM2 uFramework)
#define GPIOA_RS485_RX   3U  // BUTTONS RS485 (COM2 uFramework)
#define GPIOA_ENC_INT     4U  // ENC28J60
#define GPIOA_ENC_SCK     5U  // ENC28J60
#define GPIOA_READER_WAKE    6U  // READER WAKEUP
#define GPIOA_ENC_MOSI    7U  // ENC28J60
#define GPIOA_ENC_CLK     8U  // ENC28J60 CLOCK SIGNAL 25MHZ
#define GPIOA_VBUS        9U  // USB_VBUS
#define GPIOA_LED_BLUE         10U // BLUE LED
#define GPIOA_OTG_FS_DM   11U // USB D-
#define GPIOA_OTG_FS_DP   12U // USB D+
#define GPIOA_JTMS_SWDIO  13U // JTAG
#define GPIOA_JTCK_SWCLK  14U // JTAG
#define GPIOA_JTDI        15U // JTAG

#define GPIOB_MICROSD_CS   0U
#define GPIOB_MICROSD_PWR  1U
#define GPIOB_HEADERS      2U
#define GPIOB_JTDO         3U // JTAG
#define GPIOB_ENC_MISO     4U
#define GPIOB_MICROSD_INS  5U
#define GPIOB_READER_TX    6U
#define GPIOB_READER_RX    7U
#define GPIOB_DISP_BUSY    8U
#define GPIOB_RTC_CS       9U
#define GPIOB_READER_TAG   10U
#define GPIOB_SWITCH1      11U
#define GPIOB_READER_DIR   12U
#define GPIOB_RTC_SCK      13U
#define GPIOB_RTC_MISO     14U
#define GPIOB_RTC_MOSI     15U

#define GPIOC_LED_A        0U
#define GPIOC_LED_B        1U
#define GPIOC_LED_C        2U
#define GPIOC_LED_D        3U
#define GPIOC_WD_OLD       4U
#define GPIOC_WD_SIG       5U
#define GPIOC_DISP_TX      6U
#define GPIOC_DISP_RX      7U
#define GPIOC_ENC_CS       8U
#define GPIOC_EMPTY1       9U
#define GPIOC_SD_SCK       10U
#define GPIOC_SD_MISO      11U
#define GPIOC_SD_MOSI      12U
#define GPIOC_LED_WHITE    13U
#define GPIOC_SWITCH1      14U
#define GPIOC_ENC_PWR      15U

#define GPIOD_PIN0         0U
#define GPIOD_PIN1         1U
#define GPIOD_ENC_RESET    2U
#define GPIOD_PIN3         3U
#define GPIOD_PIN4         4U
#define GPIOD_PIN5         5U
#define GPIOD_PIN6         6U
#define GPIOD_PIN7         7U
#define GPIOD_PIN8         8U
#define GPIOD_PIN9         9U
#define GPIOD_PIN10        10U
#define GPIOD_PIN11        11U
#define GPIOD_PIN12        12U
#define GPIOD_PIN13        13U
#define GPIOD_PIN14        14U
#define GPIOD_PIN15        15U

#define GPIOE_PIN0         0U
#define GPIOE_PIN1         1U
#define GPIOE_PIN2         2U
#define GPIOE_PIN3         3U
#define GPIOE_PIN4         4U
#define GPIOE_PIN5         5U
#define GPIOE_PIN6         6U
#define GPIOE_PIN7         7U
#define GPIOE_PIN8         8U
#define GPIOE_PIN9         9U
#define GPIOE_PIN10        10U
#define GPIOE_PIN11        11U
#define GPIOE_PIN12        12U
#define GPIOE_PIN13        13U
#define GPIOE_PIN14        14U
#define GPIOE_PIN15        15U



#define GPIOH_OSC_IN       0U
#define GPIOH_OSC_OUT      1U
#define GPIOH_PIN2         2U
#define GPIOH_PIN3         3U
#define GPIOH_PIN4         4U
#define GPIOH_PIN5         5U
#define GPIOH_PIN6         6U
#define GPIOH_PIN7         7U
#define GPIOH_PIN8         8U
#define GPIOH_PIN9         9U
#define GPIOH_PIN10         10U
#define GPIOH_PIN11         11U
#define GPIOH_PIN12         12U
#define GPIOH_PIN13         13U
#define GPIOH_PIN14         14U
#define GPIOH_PIN15         15U

/*
 * IO lines assignments.
 */
#define LINE_LED                   PAL_LINE(GPIOA, 10U)
#define LINE_PWR_LED               PAL_LINE(GPIOC, 13U)

// #define LINE_OTG_FS_DM             PAL_LINE(GPIOA, 11U)
// #define LINE_OTG_FS_DP             PAL_LINE(GPIOA, 12U)

// #define LINE_ETH_SCK               PAL_LINE(GPIOA, 5U)
// #define LINE_ETH_MISO              PAL_LINE(GPIOB, 4U)
// #define LINE_ETH_MOSI              PAL_LINE(GPIOA, 6U)

// #define LINE_SD_SCK                PAL_LINE(GPIOC, 10U)
// #define LINE_SD_MISO               PAL_LINE(GPIOC, 11U)
// #define LINE_SD_MOSI               PAL_LINE(GPIOC, 12U)
#define LINE_SD_DETECT             PAL_LINE(GPIOB, 5U)

// #define LINE_OSC_IN                 PAL_LINE(GPIOH, 0U)
// #define LINE_OSC_OUT                PAL_LINE(GPIOH, 1U)

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)      (0U << ((n)*2U))
#define PIN_MODE_OUTPUT(n)     (1U << ((n)*2U))
#define PIN_MODE_ALTERNATE(n)  (2U << ((n)*2U))
#define PIN_MODE_ANALOG(n)     (3U << ((n)*2U))
#define PIN_ODR_LOW(n)         (0U << (n))
#define PIN_ODR_HIGH(n)        (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)  (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n) (1U << (n))
#define PIN_OSPEED_VERYLOW(n)  (0U << ((n)*2U))
#define PIN_OSPEED_LOW(n)      (1U << ((n)*2U))
#define PIN_OSPEED_MEDIUM(n)   (2U << ((n)*2U))
#define PIN_OSPEED_HIGH(n)     (3U << ((n)*2U))
#define PIN_PUPDR_FLOATING(n)  (0U << ((n)*2U))
#define PIN_PUPDR_PULLUP(n)    (1U << ((n)*2U))
#define PIN_PUPDR_PULLDOWN(n)  (2U << ((n)*2U))
#define PIN_AFIO_AF(n, v)      ((v) << (((n) % 8U) * 4U))

/*
    GPIOA setup:
    PA0  GPIOA_RS232_TX    (alternate 8)
    PA1  GPIOA_RS232_RX    (alternate 8)
    PA2  GPIOA_RS485_TX   (alternate 7)
    PA3  GPIOA_RS485_RX   (alternate 7)
    PA4  GPIOA_ENC_INT     (input)
    PA5  GPIOA_ENC_SCK     (alternate 5)
    PA6  GPIOA_READER_WAKE          (input)
    PA7  GPIOA_ENC_MOSI    (alternate 5)
    PA8  GPIOA_ENC_CLK     (alternate 0)
    PA9  GPIOA_VBUS        (input)
    PA10 GPIOA_LED_BLUE         (output)
    PA11 GPIOA_OTG_FS_DM   (alternate 10)
    PA12 GPIOA_OTG_FS_DP   (alternate 10)
    PA13 GPIOA_JTMS_SWDIO  (alternate 0)
    PA14 GPIOA_JTCK_SWCLK  (alternate 0)
    PA15 GPIOA_JTDI        (alternate 0)
*/
#define VAL_GPIOA_MODER        (PIN_MODE_ALTERNATE(GPIOA_RS232_TX) | \
                                PIN_MODE_ALTERNATE(GPIOA_RS232_RX) | \
                                PIN_MODE_ALTERNATE(GPIOA_RS485_TX) | \
                                PIN_MODE_ALTERNATE(GPIOA_RS485_RX) | \
                                PIN_MODE_INPUT(GPIOA_ENC_INT) | \
                                PIN_MODE_ALTERNATE(GPIOA_ENC_SCK) | \
                                PIN_MODE_OUTPUT(GPIOA_READER_WAKE) | \
                                PIN_MODE_ALTERNATE(GPIOA_ENC_MOSI) | \
                                PIN_MODE_ALTERNATE(GPIOA_ENC_CLK) | \
                                PIN_MODE_INPUT(GPIOA_VBUS) | \
                                PIN_MODE_OUTPUT(GPIOA_LED_BLUE) | \
                                PIN_MODE_ALTERNATE(GPIOA_OTG_FS_DM) | \
                                PIN_MODE_ALTERNATE(GPIOA_OTG_FS_DP) | \
                                PIN_MODE_INPUT(GPIOA_JTMS_SWDIO) | \
                                PIN_MODE_INPUT(GPIOA_JTCK_SWCLK) | \
                                PIN_MODE_INPUT(GPIOA_JTDI))
#define VAL_GPIOA_OTYPER       (PIN_OTYPE_PUSHPULL(GPIOA_RS232_TX) | \
                                PIN_OTYPE_PUSHPULL(GPIOA_RS232_RX) | \
                                PIN_OTYPE_PUSHPULL(GPIOA_RS485_TX) | \
                                PIN_OTYPE_PUSHPULL(GPIOA_RS485_RX) | \
                                PIN_OTYPE_PUSHPULL(GPIOA_ENC_INT) | \
                                PIN_OTYPE_PUSHPULL(GPIOA_ENC_SCK) | \
                                PIN_OTYPE_PUSHPULL(GPIOA_READER_WAKE) | \
                                PIN_OTYPE_PUSHPULL(GPIOA_ENC_MOSI) | \
                                PIN_OTYPE_PUSHPULL(GPIOA_ENC_CLK) | \
                                PIN_OTYPE_PUSHPULL(GPIOA_VBUS) | \
                                PIN_OTYPE_PUSHPULL(GPIOA_LED_BLUE) | \
                                PIN_OTYPE_PUSHPULL(GPIOA_OTG_FS_DM) | \
                                PIN_OTYPE_PUSHPULL(GPIOA_OTG_FS_DP) | \
                                PIN_OTYPE_PUSHPULL(GPIOA_JTMS_SWDIO) | \
                                PIN_OTYPE_PUSHPULL(GPIOA_JTCK_SWCLK) | \
                                PIN_OTYPE_PUSHPULL(GPIOA_JTDI))
#define VAL_GPIOA_OSPEEDR      (PIN_OSPEED_HIGH(GPIOA_RS232_TX) | \
                                PIN_OSPEED_HIGH(GPIOA_RS232_RX) | \
                                PIN_OSPEED_HIGH(GPIOA_RS485_TX) | \
                                PIN_OSPEED_HIGH(GPIOA_RS485_RX) | \
                                PIN_OSPEED_HIGH(GPIOA_ENC_INT) | \
                                PIN_OSPEED_HIGH(GPIOA_ENC_SCK) | \
                                PIN_OSPEED_HIGH(GPIOA_READER_WAKE) | \
                                PIN_OSPEED_HIGH(GPIOA_ENC_MOSI) | \
                                PIN_OSPEED_HIGH(GPIOA_ENC_CLK) | \
                                PIN_OSPEED_HIGH(GPIOA_VBUS) | \
                                PIN_OSPEED_HIGH(GPIOA_LED_BLUE) | \
                                PIN_OSPEED_HIGH(GPIOA_OTG_FS_DM) | \
                                PIN_OSPEED_HIGH(GPIOA_OTG_FS_DP) | \
                                PIN_OSPEED_HIGH(GPIOA_JTMS_SWDIO) | \
                                PIN_OSPEED_HIGH(GPIOA_JTCK_SWCLK) | \
                                PIN_OSPEED_HIGH(GPIOA_JTDI))
#define VAL_GPIOA_PUPDR        (PIN_PUPDR_FLOATING(GPIOA_RS232_TX) | \
                                PIN_PUPDR_FLOATING(GPIOA_RS232_RX) | \
                                PIN_PUPDR_FLOATING(GPIOA_RS485_TX) | \
                                PIN_PUPDR_FLOATING(GPIOA_RS485_RX) | \
                                PIN_PUPDR_FLOATING(GPIOA_ENC_INT) | \
                                PIN_PUPDR_FLOATING(GPIOA_ENC_SCK) | \
                                PIN_PUPDR_PULLUP(GPIOA_READER_WAKE) | \
                                PIN_PUPDR_FLOATING(GPIOA_ENC_MOSI) | \
                                PIN_PUPDR_FLOATING(GPIOA_ENC_CLK) | \
                                PIN_PUPDR_FLOATING(GPIOA_VBUS) | \
                                PIN_PUPDR_PULLUP(GPIOA_LED_BLUE) | \
                                PIN_PUPDR_FLOATING(GPIOA_OTG_FS_DM) | \
                                PIN_PUPDR_FLOATING(GPIOA_OTG_FS_DP) | \
                                PIN_PUPDR_FLOATING(GPIOA_JTMS_SWDIO) | \
                                PIN_PUPDR_FLOATING(GPIOA_JTCK_SWCLK) | \
                                PIN_PUPDR_FLOATING(GPIOA_JTDI))
#define VAL_GPIOA_ODR          (PIN_ODR_LOW(GPIOA_RS232_TX) | \
                                PIN_ODR_LOW(GPIOA_RS232_RX) | \
                                PIN_ODR_LOW(GPIOA_RS485_TX) | \
                                PIN_ODR_LOW(GPIOA_RS485_RX) | \
                                PIN_ODR_LOW(GPIOA_ENC_INT) | \
                                PIN_ODR_LOW(GPIOA_ENC_SCK) | \
                                PIN_ODR_LOW(GPIOA_READER_WAKE) | \
                                PIN_ODR_LOW(GPIOA_ENC_MOSI) | \
                                PIN_ODR_LOW(GPIOA_ENC_CLK) | \
                                PIN_ODR_LOW(GPIOA_VBUS) | \
                                PIN_ODR_LOW(GPIOA_LED_BLUE) | \
                                PIN_ODR_HIGH(GPIOA_OTG_FS_DM) | \
                                PIN_ODR_HIGH(GPIOA_OTG_FS_DP) | \
                                PIN_ODR_LOW(GPIOA_JTMS_SWDIO) | \
                                PIN_ODR_LOW(GPIOA_JTCK_SWCLK) | \
                                PIN_ODR_LOW(GPIOA_JTDI))
#define VAL_GPIOA_AFRL         (PIN_AFIO_AF(GPIOA_RS232_TX, 8U) | \
                                PIN_AFIO_AF(GPIOA_RS232_RX, 8U) | \
                                PIN_AFIO_AF(GPIOA_RS485_TX, 7U) | \
                                PIN_AFIO_AF(GPIOA_RS485_RX, 7U) | \
                                PIN_AFIO_AF(GPIOA_ENC_INT, 0U) | \
                                PIN_AFIO_AF(GPIOA_ENC_SCK, 5U) | \
                                PIN_AFIO_AF(GPIOA_READER_WAKE, 0U) | \
                                PIN_AFIO_AF(GPIOA_ENC_MOSI, 5U))
#define VAL_GPIOA_AFRH         (PIN_AFIO_AF(GPIOA_ENC_CLK, 5U) | \
                                PIN_AFIO_AF(GPIOA_VBUS, 0U) | \
                                PIN_AFIO_AF(GPIOA_LED_BLUE, 0U) | \
                                PIN_AFIO_AF(GPIOA_OTG_FS_DM, 10U) | \
                                PIN_AFIO_AF(GPIOA_OTG_FS_DP, 10U) | \
                                PIN_AFIO_AF(GPIOA_JTMS_SWDIO, 0U) | \
                                PIN_AFIO_AF(GPIOA_JTCK_SWCLK, 0U) | \
                                PIN_AFIO_AF(GPIOA_JTDI, 0U))
                                

/*
 * GPIOB setup: 
    PB0  GPIOB_MICROSD_CS   (output)
    PB1  GPIOB_MICROSD_PWR (input)
    PB2  GPIOB_HEADERS        (output)    
    PB3  GPIOB_JTDO         (alternate 0)
    PB4  GPIOB_ENC_MISO     (alternate 5)
    PB5  GPIOB_MICROSD_INS  (input)
    PB6  GPIOB_READER_TX    (alternate 7)
    PB7  GPIOB_READER_RX    (alternate 7)
    PB8  GPIOB_DISP_BUSY           (input)
    PB9  GPIOB_RTC_CS           (input)
    PB10 GPIOB_READER_TAG          (input)
    PB11 GPIOB_SWITCH1      (input)
    PB12 GPIOB_READER_DIR           (input)
    PB13 GPIOB_RTC_SCK          (input)
    PB14 GPIOB_RTC_MISO          (input)
    PB15 GPIOB_RTC_MOSI          (input)
*/

#define VAL_GPIOB_MODER        (PIN_MODE_OUTPUT(GPIOB_MICROSD_CS) | \
                                PIN_MODE_INPUT(GPIOB_MICROSD_PWR) | \
                                PIN_MODE_OUTPUT(GPIOB_HEADERS) | \
                                PIN_MODE_OUTPUT(GPIOB_JTDO) | \
                                PIN_MODE_ALTERNATE(GPIOB_ENC_MISO) | \
                                PIN_MODE_INPUT(GPIOB_MICROSD_INS) | \
                                PIN_MODE_ALTERNATE(GPIOB_READER_TX) | \
                                PIN_MODE_ALTERNATE(GPIOB_READER_RX) | \
                                PIN_MODE_INPUT(GPIOB_DISP_BUSY) | \
                                PIN_MODE_OUTPUT(GPIOB_RTC_CS) | \
                                PIN_MODE_INPUT(GPIOB_READER_TAG) | \
                                PIN_MODE_INPUT(GPIOB_SWITCH1) | \
                                PIN_MODE_OUTPUT(GPIOB_READER_DIR) | \
                                PIN_MODE_ALTERNATE(GPIOB_RTC_SCK) | \
                                PIN_MODE_ALTERNATE(GPIOB_RTC_MISO) | \
                                PIN_MODE_ALTERNATE(GPIOB_RTC_MOSI))
#define VAL_GPIOB_OTYPER       (PIN_OTYPE_PUSHPULL(GPIOB_MICROSD_CS) | \
                                PIN_OTYPE_PUSHPULL(GPIOB_MICROSD_PWR) | \
                                PIN_OTYPE_PUSHPULL(GPIOB_HEADERS) | \
                                PIN_OTYPE_PUSHPULL(GPIOB_JTDO) | \
                                PIN_OTYPE_PUSHPULL(GPIOB_ENC_MISO) | \
                                PIN_OTYPE_PUSHPULL(GPIOB_MICROSD_INS) | \
                                PIN_OTYPE_PUSHPULL(GPIOB_READER_TX) | \
                                PIN_OTYPE_PUSHPULL(GPIOB_READER_RX) | \
                                PIN_OTYPE_PUSHPULL(GPIOB_DISP_BUSY) | \
                                PIN_OTYPE_PUSHPULL(GPIOB_RTC_CS) | \
                                PIN_OTYPE_PUSHPULL(GPIOB_READER_TAG) | \
                                PIN_OTYPE_PUSHPULL(GPIOB_SWITCH1) | \
                                PIN_OTYPE_PUSHPULL(GPIOB_READER_DIR) | \
                                PIN_OTYPE_PUSHPULL(GPIOB_RTC_SCK) | \
                                PIN_OTYPE_PUSHPULL(GPIOB_RTC_MISO) | \
                                PIN_OTYPE_PUSHPULL(GPIOB_RTC_MOSI))
#define VAL_GPIOB_OSPEEDR      (PIN_OSPEED_HIGH(GPIOB_MICROSD_CS) | \
                                PIN_OSPEED_HIGH(GPIOB_MICROSD_PWR) | \
                                PIN_OSPEED_HIGH(GPIOB_HEADERS) | \
                                PIN_OSPEED_HIGH(GPIOB_JTDO) | \
                                PIN_OSPEED_HIGH(GPIOB_ENC_MISO) | \
                                PIN_OSPEED_HIGH(GPIOB_MICROSD_INS) | \
                                PIN_OSPEED_HIGH(GPIOB_READER_TX) | \
                                PIN_OSPEED_HIGH(GPIOB_READER_RX) | \
                                PIN_OSPEED_HIGH(GPIOB_DISP_BUSY) | \
                                PIN_OSPEED_HIGH(GPIOB_RTC_CS) | \
                                PIN_OSPEED_HIGH(GPIOB_READER_TAG) | \
                                PIN_OSPEED_HIGH(GPIOB_SWITCH1) | \
                                PIN_OSPEED_HIGH(GPIOB_READER_DIR) | \
                                PIN_OSPEED_HIGH(GPIOB_RTC_SCK) | \
                                PIN_OSPEED_HIGH(GPIOB_RTC_MISO) | \
                                PIN_OSPEED_HIGH(GPIOB_RTC_MOSI))
#define VAL_GPIOB_PUPDR        (PIN_PUPDR_FLOATING(GPIOB_MICROSD_CS) | \
                                PIN_PUPDR_PULLUP(GPIOB_MICROSD_PWR) | \
                                PIN_PUPDR_PULLDOWN(GPIOB_HEADERS) | \
                                PIN_PUPDR_FLOATING(GPIOB_JTDO) | \
                                PIN_PUPDR_FLOATING(GPIOB_ENC_MISO) | \
                                PIN_PUPDR_PULLUP(GPIOB_MICROSD_INS) | \
                                PIN_PUPDR_PULLUP(GPIOB_READER_TX) | \
                                PIN_PUPDR_PULLUP(GPIOB_READER_RX) | \
                                PIN_PUPDR_FLOATING(GPIOB_DISP_BUSY) | \
                                PIN_PUPDR_PULLUP(GPIOB_RTC_CS) | \
                                PIN_PUPDR_PULLUP(GPIOB_READER_TAG) | \
                                PIN_PUPDR_PULLDOWN(GPIOB_SWITCH1) | \
                                PIN_PUPDR_PULLUP(GPIOB_READER_DIR) | \
                                PIN_PUPDR_FLOATING(GPIOB_RTC_SCK) | \
                                PIN_PUPDR_FLOATING(GPIOB_RTC_MISO) | \
                                PIN_PUPDR_FLOATING(GPIOB_RTC_MOSI))
#define VAL_GPIOB_ODR          (PIN_ODR_LOW(GPIOB_MICROSD_CS) | \
                                PIN_ODR_HIGH(GPIOB_MICROSD_PWR) | \
                                PIN_ODR_HIGH(GPIOB_HEADERS) | \
                                PIN_ODR_LOW(GPIOB_JTDO) | \
                                PIN_ODR_LOW(GPIOB_ENC_MISO) | \
                                PIN_ODR_LOW(GPIOB_MICROSD_INS) | \
                                PIN_ODR_LOW(GPIOB_READER_TX) | \
                                PIN_ODR_LOW(GPIOB_READER_RX) | \
                                PIN_ODR_LOW(GPIOB_DISP_BUSY) | \
                                PIN_ODR_LOW(GPIOB_RTC_CS) | \
                                PIN_ODR_LOW(GPIOB_READER_TAG) | \
                                PIN_ODR_LOW(GPIOB_SWITCH1) | \
                                PIN_ODR_LOW(GPIOB_READER_DIR) | \
                                PIN_ODR_LOW(GPIOB_RTC_SCK) | \
                                PIN_ODR_LOW(GPIOB_RTC_MISO) | \
                                PIN_ODR_LOW(GPIOB_RTC_MOSI))
#define VAL_GPIOB_AFRL         (PIN_AFIO_AF(GPIOB_MICROSD_CS, 0U) | \
                                PIN_AFIO_AF(GPIOB_MICROSD_PWR, 0U) | \
                                PIN_AFIO_AF(GPIOB_HEADERS, 0U) | \
                                PIN_AFIO_AF(GPIOB_JTDO, 0U) | \
                                PIN_AFIO_AF(GPIOB_ENC_MISO, 5U) | \
                                PIN_AFIO_AF(GPIOB_MICROSD_INS, 0U) | \
                                PIN_AFIO_AF(GPIOB_READER_TX, 7U)| \
                                PIN_AFIO_AF(GPIOB_READER_RX, 7U))
#define VAL_GPIOB_AFRH         (PIN_AFIO_AF(GPIOB_DISP_BUSY, 0U) | \
                                PIN_AFIO_AF(GPIOB_RTC_CS, 0U) | \
                                PIN_AFIO_AF(GPIOB_READER_TAG, 0U) | \
                                PIN_AFIO_AF(GPIOB_SWITCH1, 0U) | \
                                PIN_AFIO_AF(GPIOB_READER_DIR, 0U) | \
                                PIN_AFIO_AF(GPIOB_RTC_SCK, 5U) | \
                                PIN_AFIO_AF(GPIOB_RTC_MISO, 5U) | \
                                PIN_AFIO_AF(GPIOB_RTC_MOSI, 5U))


/*
 * GPIOC setup:
    PC0  GPIOC_LED_A           (analog PP Hi PU Lo)
    PC1  GPIOC_LED_B           (analog PP Hi PU Lo)
    PC2  GPIOC_LED_C           (analog PP Hi PU Lo)
    PC3  GPIOC_LED_D           (analog PP Hi PU Lo)
    PC4  GPIOC_WD_OLD           (analog PP Hi PU Lo)
    PC5  GPIOC_WD_SIG           (analog PP Hi PU Lo)
    PC6  GPIOC_DISP_TX    (alternate 7)
    PC7  GPIOC_DISP_RX    (alternate 7)
    PC8  GPIOC_ENC_CS       (input))
    PC9  GPIOC_EMPTY1       (pullup high)
    PC10 GPIOC_SD_SCK     (alternate 6)
    PC11 GPIOC_SD_MISO    (alternate 6)
    PC12 GPIOC_SD_MOSI    (alternate 6)
    PC13 GPIOC_LED_WHITE    (output)
    PC14 GPIOC_SWITCH1      (input)
    PC15 GPIOC_ENC_PWR (output)
 */
#define VAL_GPIOC_MODER        (PIN_MODE_OUTPUT(GPIOC_LED_A) | \
                                PIN_MODE_OUTPUT(GPIOC_LED_B) | \
                                PIN_MODE_OUTPUT(GPIOC_LED_C) | \
                                PIN_MODE_OUTPUT(GPIOC_LED_D) | \
                                PIN_MODE_OUTPUT(GPIOC_WD_OLD) | \
                                PIN_MODE_OUTPUT(GPIOC_WD_SIG) | \
                                PIN_MODE_ALTERNATE(GPIOC_DISP_TX) | \
                                PIN_MODE_ALTERNATE(GPIOC_DISP_RX) | \
                                PIN_MODE_OUTPUT(GPIOC_ENC_CS) | \
                                PIN_MODE_INPUT(GPIOC_EMPTY1) | \
                                PIN_MODE_ALTERNATE(GPIOC_SD_SCK) | \
                                PIN_MODE_ALTERNATE(GPIOC_SD_MISO) | \
                                PIN_MODE_ALTERNATE(GPIOC_SD_MOSI) | \
                                PIN_MODE_OUTPUT(GPIOC_LED_WHITE) | \
                                PIN_MODE_INPUT(GPIOC_SWITCH1) | \
                                PIN_MODE_OUTPUT(GPIOC_ENC_PWR))
#define VAL_GPIOC_OTYPER       (PIN_OTYPE_PUSHPULL(GPIOC_LED_A) | \
                                PIN_OTYPE_PUSHPULL(GPIOC_LED_B) | \
                                PIN_OTYPE_PUSHPULL(GPIOC_LED_C) | \
                                PIN_OTYPE_PUSHPULL(GPIOC_LED_D) | \
                                PIN_OTYPE_PUSHPULL(GPIOC_WD_OLD) | \
                                PIN_OTYPE_PUSHPULL(GPIOC_WD_SIG) | \
                                PIN_OTYPE_PUSHPULL(GPIOC_DISP_TX) | \
                                PIN_OTYPE_PUSHPULL(GPIOC_DISP_RX) | \
                                PIN_OTYPE_PUSHPULL(GPIOC_ENC_CS) | \
                                PIN_OTYPE_PUSHPULL(GPIOC_EMPTY1) | \
                                PIN_OTYPE_PUSHPULL(GPIOC_SD_SCK) | \
                                PIN_OTYPE_PUSHPULL(GPIOC_SD_MISO) | \
                                PIN_OTYPE_PUSHPULL(GPIOC_SD_MOSI) | \
                                PIN_OTYPE_PUSHPULL(GPIOC_LED_WHITE) | \
                                PIN_OTYPE_PUSHPULL(GPIOC_SWITCH1) | \
                                PIN_OTYPE_PUSHPULL(GPIOC_ENC_PWR))
#define VAL_GPIOC_OSPEEDR      (PIN_OSPEED_HIGH(GPIOC_LED_A) | \
                                PIN_OSPEED_HIGH(GPIOC_LED_B) | \
                                PIN_OSPEED_HIGH(GPIOC_LED_C) | \
                                PIN_OSPEED_HIGH(GPIOC_LED_D) | \
                                PIN_OSPEED_HIGH(GPIOC_WD_OLD) | \
                                PIN_OSPEED_HIGH(GPIOC_WD_SIG) | \
                                PIN_OSPEED_HIGH(GPIOC_DISP_TX) | \
                                PIN_OSPEED_HIGH(GPIOC_DISP_RX) | \
                                PIN_OSPEED_HIGH(GPIOC_ENC_CS) | \
                                PIN_OSPEED_HIGH(GPIOC_EMPTY1) | \
                                PIN_OSPEED_HIGH(GPIOC_SD_SCK) | \
                                PIN_OSPEED_HIGH(GPIOC_SD_MISO) | \
                                PIN_OSPEED_HIGH(GPIOC_SD_MOSI) | \
                                PIN_OSPEED_HIGH(GPIOC_LED_WHITE) | \
                                PIN_OSPEED_HIGH(GPIOC_SWITCH1) | \
                                PIN_OSPEED_HIGH(GPIOC_ENC_PWR))
#define VAL_GPIOC_PUPDR        (PIN_PUPDR_FLOATING(GPIOC_LED_A) | \
                                PIN_PUPDR_FLOATING(GPIOC_LED_B) | \
                                PIN_PUPDR_FLOATING(GPIOC_LED_C) | \
                                PIN_PUPDR_FLOATING(GPIOC_LED_D) | \
                                PIN_PUPDR_FLOATING(GPIOC_WD_OLD) | \
                                PIN_PUPDR_FLOATING(GPIOC_WD_SIG) | \
                                PIN_PUPDR_FLOATING(GPIOC_DISP_TX) | \
                                PIN_PUPDR_FLOATING(GPIOC_DISP_RX) | \
                                PIN_PUPDR_FLOATING(GPIOC_ENC_CS) | \
                                PIN_PUPDR_PULLUP(GPIOC_EMPTY1) | \
                                PIN_PUPDR_FLOATING(GPIOC_SD_SCK) | \
                                PIN_PUPDR_FLOATING(GPIOC_SD_MISO) | \
                                PIN_PUPDR_FLOATING(GPIOC_SD_MOSI) | \
                                PIN_PUPDR_FLOATING(GPIOC_LED_WHITE) | \
                                PIN_PUPDR_PULLDOWN(GPIOC_SWITCH1)| \
                                PIN_PUPDR_PULLUP(GPIOC_ENC_PWR))
#define VAL_GPIOC_ODR          (PIN_ODR_LOW(GPIOC_LED_A) | \
                                PIN_ODR_LOW(GPIOC_LED_B) | \
                                PIN_ODR_LOW(GPIOC_LED_C) | \
                                PIN_ODR_LOW(GPIOC_LED_D) | \
                                PIN_ODR_LOW(GPIOC_WD_OLD) | \
                                PIN_ODR_LOW(GPIOC_WD_SIG) | \
                                PIN_ODR_LOW(GPIOC_DISP_TX) | \
                                PIN_ODR_LOW(GPIOC_DISP_RX) | \
                                PIN_ODR_LOW(GPIOC_ENC_CS) | \
                                PIN_ODR_LOW(GPIOC_EMPTY1) | \
                                PIN_ODR_LOW(GPIOC_SD_SCK) | \
                                PIN_ODR_LOW(GPIOC_SD_MISO) | \
                                PIN_ODR_LOW(GPIOC_SD_MOSI) | \
                                PIN_ODR_HIGH(GPIOC_LED_WHITE) | \
                                PIN_ODR_LOW(GPIOC_SWITCH1) | \
                                PIN_ODR_LOW(GPIOC_ENC_PWR))                           
#define VAL_GPIOC_AFRL         (PIN_AFIO_AF(GPIOC_LED_A, 0U) | \
                                PIN_AFIO_AF(GPIOC_LED_B, 0U) | \
                                PIN_AFIO_AF(GPIOC_LED_C, 0U) | \
                                PIN_AFIO_AF(GPIOC_LED_D, 0U) | \
                                PIN_AFIO_AF(GPIOC_WD_OLD, 0U) | \
                                PIN_AFIO_AF(GPIOC_WD_SIG, 0U) | \
                                PIN_AFIO_AF(GPIOC_DISP_RX, 8U) | \
                                PIN_AFIO_AF(GPIOC_DISP_RX, 8U))
#define VAL_GPIOC_AFRH         (PIN_AFIO_AF(GPIOC_ENC_CS, 0U) | \
                                PIN_AFIO_AF(GPIOC_EMPTY1, 0U) | \
                                PIN_AFIO_AF(GPIOC_SD_SCK, 6U) | \
                                PIN_AFIO_AF(GPIOC_SD_MISO, 6U) | \
                                PIN_AFIO_AF(GPIOC_SD_MOSI, 6U) | \
                                PIN_AFIO_AF(GPIOC_LED_WHITE, 0U) | \
                                PIN_AFIO_AF(GPIOC_SWITCH1, 0U) | \
                                PIN_AFIO_AF(GPIOC_ENC_PWR, 0U))

/*
 * GPIOD setup:
 *
 * PD0  - PIN0                      (input pullup).
 * PD1  - PIN1                      (input pullup).
 * PD2  - GPIOD_ENC_RESET           (output pullup).
 * PD3  - PIN3                      (input pullup).
 * PD4  - PIN4                      (input pullup).
 * PD5  - PIN5                      (input pullup).
 * PD6  - PIN6                      (input pullup).
 * PD7  - PIN7                      (input pullup).
 * PD8  - PIN8                      (input pullup).
 * PD9  - PIN9                      (input pullup).
 * PD10 - PIN10                     (input pullup).
 * PD11 - PIN11                     (input pullup).
 * PD12 - PIN12                     (input pullup).
 * PD13 - PIN13                     (input pullup).
 * PD14 - PIN14                     (input pullup).
 * PD15 - PIN15                     (input pullup).
 */
#define VAL_GPIOD_MODER             (PIN_MODE_INPUT(GPIOD_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN1) |           \
                                     PIN_MODE_OUTPUT(GPIOD_ENC_RESET) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN15))
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOD_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_ENC_RESET) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN15))
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_HIGH(GPIOD_PIN0) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN1) |          \
                                     PIN_OSPEED_HIGH(GPIOD_ENC_RESET) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN14) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN15))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_PULLUP(GPIOD_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN1) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_ENC_RESET) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN15))
#define VAL_GPIOD_ODR               (PIN_ODR_HIGH(GPIOD_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOD_ENC_RESET) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN15))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(GPIOD_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_ENC_RESET, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN7, 0U))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF(GPIOD_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN15, 0U))

    

/*
 * GPIOE setup:
 *
 * PE0  - PIN0                      (input pullup).
 * PE1  - PIN1                      (input pullup).
 * PE2  - PIN2                      (input pullup).
 * PE3  - PIN3                      (input pullup).
 * PE4  - PIN4                      (input pullup).
 * PE5  - PIN5                      (input pullup).
 * PE6  - PIN6                      (input pullup).
 * PE7  - PIN7                      (input pullup).
 * PE8  - PIN8                      (input pullup).
 * PE9  - PIN9                      (input pullup).
 * PE10 - PIN10                     (input pullup).
 * PE11 - PIN11                     (input pullup).
 * PE12 - PIN12                     (input pullup).
 * PE13 - PIN13                     (input pullup).
 * PE14 - PIN14                     (input pullup).
 * PE15 - PIN15                     (input pullup).
 */
#define VAL_GPIOE_MODER             (PIN_MODE_INPUT(GPIOE_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN15))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOE_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN15))
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_HIGH(GPIOE_PIN0) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN1) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN14) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN15))
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_PULLUP(GPIOE_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN15))
#define VAL_GPIOE_ODR               (PIN_ODR_HIGH(GPIOE_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN15))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(GPIOE_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN7, 0U))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(GPIOE_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN15, 0U))

/*
 * GPIOH setup:
 *
 * PH0  - OSC_IN                    (input floating).
 * PH1  - OSC_OUT                   (input floating).
 * PH2  - PIN2                      (input pullup).
 * PH3  - PIN3                      (input pullup).
 * PH4  - PIN4                      (input pullup).
 * PH5  - PIN5                      (input pullup).
 * PH6  - PIN6                      (input pullup).
 * PH7  - PIN7                      (input pullup).
 * PH8  - PIN8                      (input pullup).
 * PH9  - PIN9                      (input pullup).
 * PH10 - PIN10                     (input pullup).
 * PH11 - PIN11                     (input pullup).
 * PH12 - PIN12                     (input pullup).
 * PH13 - PIN13                     (input pullup).
 * PH14 - PIN14                     (input pullup).
 * PH15 - PIN15                     (input pullup).
 */
#define VAL_GPIOH_MODER             (PIN_MODE_ALTERNATE(GPIOH_OSC_IN) |         \
                                     PIN_MODE_ALTERNATE(GPIOH_OSC_OUT) |        \
                                     PIN_MODE_INPUT(GPIOH_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN15))
#define VAL_GPIOH_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOH_OSC_IN) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOH_OSC_OUT) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN15))
#define VAL_GPIOH_OSPEEDR           (PIN_OSPEED_HIGH(GPIOH_OSC_IN) |        \
                                     PIN_OSPEED_HIGH(GPIOH_OSC_OUT) |       \
                                     PIN_OSPEED_HIGH(GPIOH_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOH_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOH_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOH_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOH_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOH_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOH_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOH_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOH_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOH_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOH_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOH_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOH_PIN14) |         \
                                     PIN_OSPEED_HIGH(GPIOH_PIN15))
#define VAL_GPIOH_PUPDR             (PIN_PUPDR_FLOATING(GPIOH_OSC_IN) |     \
                                     PIN_PUPDR_FLOATING(GPIOH_OSC_OUT) |    \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN15))
#define VAL_GPIOH_ODR               (PIN_ODR_LOW(GPIOH_OSC_IN) |           \
                                     PIN_ODR_LOW(GPIOH_OSC_OUT) |          \
                                     PIN_ODR_HIGH(GPIOH_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN15))
#define VAL_GPIOH_AFRL              (PIN_AFIO_AF(GPIOH_OSC_IN, 0U) |        \
                                     PIN_AFIO_AF(GPIOH_OSC_OUT, 0U) |       \
                                     PIN_AFIO_AF(GPIOH_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN7, 0U))
#define VAL_GPIOH_AFRH              (PIN_AFIO_AF(GPIOH_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN15, 0U))


#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C"
{
#endif
    void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif // FROM_ASM_

#endif // BOARD_H
