#include "board.hpp"

static const gpio_pin_config_t redLedConfig   = {kGPIO_DigitalOutput, 1};
static const gpio_pin_config_t greenLedConfig = {kGPIO_DigitalOutput, 1};
static const gpio_pin_config_t blueLedConfig  = {kGPIO_DigitalOutput, 1};

static void initLed() {
    CLOCK_EnableClock(kCLOCK_PortB);
    CLOCK_EnableClock(kCLOCK_PortE);

    PORT_SetPinMux(RGBLED_RED_GPIO_PORT, RGBLED_RED_GPIO_PIN, kPORT_MuxAsGpio);
    PORT_SetPinMux(RGBLED_GREEN_GPIO_PORT, RGBLED_GREEN_GPIO_PIN, kPORT_MuxAsGpio);
    PORT_SetPinMux(RGBLED_BLUE_GPIO_PORT, RGBLED_BLUE_GPIO_PIN, kPORT_MuxAsGpio);

    GPIO_PinInit(RGBLED_RED_GPIO, RGBLED_RED_GPIO_PIN, &redLedConfig);
    GPIO_PinInit(RGBLED_GREEN_GPIO, RGBLED_GREEN_GPIO_PIN, &greenLedConfig);
    GPIO_PinInit(RGBLED_BLUE_GPIO, RGBLED_BLUE_GPIO_PIN, &blueLedConfig);
}

void board::init() {
    initLed();
}
