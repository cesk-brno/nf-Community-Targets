//
// Copyright (c) .NET Foundation and Contributors
// See LICENSE file in the project root for full license information.
//

#include "target_system_io_ports_config.h"
#include <sys_io_ser_native_target.h>


UART_CONFIG_PINS(1, GPIOB, GPIOB, 6, 7, 7)
UART_INIT(1)
UART_UNINIT(1)


UART_CONFIG_PINS(2, GPIOA, GPIOA, 2, 3, 7)
UART_INIT(2)
UART_UNINIT(2)

UART_CONFIG_PINS(4, GPIOA, GPIOA, 0, 1, 8)
UART_INIT(4)
UART_UNINIT(4)


UART_CONFIG_PINS(6, GPIOC, GPIOC, 6, 7, 8)
UART_INIT(6)
UART_UNINIT(6)
