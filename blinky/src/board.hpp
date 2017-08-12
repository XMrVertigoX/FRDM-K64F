#ifndef BOARD_HPP_
#define BOARD_HPP_

#include <fsl_clock.h>
#include <fsl_gpio.h>
#include <fsl_port.h>

#define RGBLED_RED_GPIO GPIOB
#define RGBLED_RED_GPIO_PORT PORTB
#define RGBLED_RED_GPIO_PIN 22

#define RGBLED_GREEN_GPIO GPIOE
#define RGBLED_GREEN_GPIO_PORT PORTE
#define RGBLED_GREEN_GPIO_PIN 26

#define RGBLED_BLUE_GPIO GPIOB
#define RGBLED_BLUE_GPIO_PORT PORTB
#define RGBLED_BLUE_GPIO_PIN 21

namespace board {

void init();

} /* namespace board */

#endif /* BOARD_HPP_ */
