#include "board.hpp"

// clang-format off

#define BOARD_DEBUG_UART_TYPE     DEBUG_CONSOLE_DEVICE_TYPE_UART
#define BOARD_DEBUG_UART_BASEADDR UART0_BASE
#define BOARD_DEBUG_UART_CLKSRC   SYS_CLK
// #define BOARD_UART_IRQ            UART0_RX_TX_IRQn
// #define BOARD_UART_IRQ_HANDLER    UART0_RX_TX_IRQHandler
#define BOARD_DEBUG_UART_BAUDRATE (115200)

// clang-format on

static const gpio_pin_config_t redLedConfig   = {kGPIO_DigitalOutput, 1};
static const gpio_pin_config_t greenLedConfig = {kGPIO_DigitalOutput, 1};
static const gpio_pin_config_t blueLedConfig  = {kGPIO_DigitalOutput, 1};

static const uint32_t uart0_rxPin = 16;
static const uint32_t uart0_txPin = 17;

void board::initLeds() {
    CLOCK_EnableClock(kCLOCK_PortB);
    CLOCK_EnableClock(kCLOCK_PortE);

    PORT_SetPinMux(LED_RED_GPIO_PORT, LED_RED_GPIO_PIN, kPORT_MuxAsGpio);
    PORT_SetPinMux(LED_GREEN_GPIO_PORT, LED_GREEN_GPIO_PIN, kPORT_MuxAsGpio);
    PORT_SetPinMux(LED_BLUE_GPIO_PORT, LED_BLUE_GPIO_PIN, kPORT_MuxAsGpio);

    GPIO_PinInit(LED_RED_GPIO, LED_RED_GPIO_PIN, &redLedConfig);
    GPIO_PinInit(LED_GREEN_GPIO, LED_GREEN_GPIO_PIN, &greenLedConfig);
    GPIO_PinInit(LED_BLUE_GPIO, LED_BLUE_GPIO_PIN, &blueLedConfig);
}

void board::initDebugConsole() {
    uint32_t uartClkSrcFreq = CLOCK_GetCoreSysClkFreq();

    CLOCK_EnableClock(kCLOCK_PortB);

    PORT_SetPinMux(PORTB, uart0_rxPin, kPORT_MuxAlt3);
    PORT_SetPinMux(PORTB, uart0_txPin, kPORT_MuxAlt3);

    DbgConsole_Init(BOARD_DEBUG_UART_BASEADDR, BOARD_DEBUG_UART_BAUDRATE, BOARD_DEBUG_UART_TYPE, uartClkSrcFreq);
}
