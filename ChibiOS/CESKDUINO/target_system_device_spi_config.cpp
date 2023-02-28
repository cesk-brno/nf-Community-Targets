//
// Copyright (c) .NET Foundation and Contributors
// See LICENSE file in the project root for full license information.
//

#include <sys_dev_spi_native_target.h>

/////////////////
// SPI1 -- ENC //
/////////////////
SPI_CONFIG_PINS(1, GPIOA, 5, GPIOA, 6, GPIOA, 7, 5)

/////////////////////
// SPI2 -- RTC ND2 //
/////////////////////
SPI_CONFIG_PINS(2, GPIOB, 13, GPIOB, 14, GPIOB, 15, 5)

/////////////////////
// SPI3 -- SD CARD //
/////////////////////
SPI_CONFIG_PINS(3, GPIOC, 10, GPIOC, 11, GPIOC, 12, 5)