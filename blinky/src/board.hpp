#ifndef BOARD_HPP_
#define BOARD_HPP_

#include <fsl_clock.h>
#include <fsl_common.h>
#include <fsl_debug_console.h>
#include <fsl_gpio.h>
#include <fsl_port.h>

#define LED_RED_GPIO GPIOB
#define LED_RED_GPIO_PORT PORTB
#define LED_RED_GPIO_PIN 22

#define LED_GREEN_GPIO GPIOE
#define LED_GREEN_GPIO_PORT PORTE
#define LED_GREEN_GPIO_PIN 26

#define LED_BLUE_GPIO GPIOB
#define LED_BLUE_GPIO_PORT PORTB
#define LED_BLUE_GPIO_PIN 21

/* The UART to use for debug messages. */
#define BOARD_DEBUG_UART_TYPE DEBUG_CONSOLE_DEVICE_TYPE_UART
#define BOARD_DEBUG_UART_BASEADDR (uint32_t) UART0
#define BOARD_DEBUG_UART_CLKSRC SYS_CLK
#define BOARD_DEBUG_UART_CLK_FREQ CLOCK_GetCoreSysClkFreq()
#define BOARD_UART_IRQ UART0_RX_TX_IRQn
#define BOARD_UART_IRQ_HANDLER UART0_RX_TX_IRQHandler

#ifndef BOARD_DEBUG_UART_BAUDRATE
#define BOARD_DEBUG_UART_BAUDRATE 115200
#endif /* BOARD_DEBUG_UART_BAUDRATE */

namespace board {

void initLed();
void initDebugConsole();

} /* namespace board */

#endif /* BOARD_HPP_ */
