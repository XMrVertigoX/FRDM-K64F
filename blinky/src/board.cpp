#include <fsl_clock.h>
#include <fsl_gpio.h>
#include <fsl_port.h>

#include "board.hpp"

#define RGBLED_RED_GPIO GPIOB
#define RGBLED_RED_GPIO_PORT PORTB
#define RGBLED_RED_GPIO_PIN 22

#define RGBLED_GREEN_GPIO GPIOE
#define RGBLED_GREEN_GPIO_PORT PORTE
#define RGBLED_GREEN_GPIO_PIN 26

#define RGBLED_BLUE_GPIO GPIOB
#define RGBLED_BLUE_GPIO_PORT PORTB
#define RGBLED_BLUE_GPIO_PIN 21

static const gpio_pin_config_t ledConfig = {kGPIO_DigitalOutput, 0};

namespace board {

void init() {
    initLed();
}

void initLed() {
    CLOCK_EnableClock(kCLOCK_PortB);
    CLOCK_EnableClock(kCLOCK_PortE);

    PORT_SetPinMux(RGBLED_RED_GPIO_PORT, RGBLED_RED_GPIO_PIN, kPORT_MuxAsGpio);
    PORT_SetPinMux(RGBLED_GREEN_GPIO_PORT, RGBLED_GREEN_GPIO_PIN, kPORT_MuxAsGpio);
    PORT_SetPinMux(RGBLED_BLUE_GPIO_PORT, RGBLED_BLUE_GPIO_PIN, kPORT_MuxAsGpio);

    GPIO_PinInit(RGBLED_RED_GPIO, RGBLED_RED_GPIO_PIN, &ledConfig);
    GPIO_PinInit(RGBLED_GREEN_GPIO, RGBLED_GREEN_GPIO_PIN, &ledConfig);
    GPIO_PinInit(RGBLED_BLUE_GPIO, RGBLED_BLUE_GPIO_PIN, &ledConfig);
}

} /* namespace board */
