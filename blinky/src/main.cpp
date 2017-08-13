#include <FreeRTOS.h>
#include <task.h>

#include <SEGGER_RTT.h>

#include "board.hpp"

#define LOG(...) SEGGER_RTT_printf(0, __VA_ARGS__)

static void taskFunction(void *params) {
    (void)params;

    for (;;) {
        GPIO_TogglePinsOutput(RGBLED_GREEN_GPIO, (1 << RGBLED_GREEN_GPIO_PIN));
        vTaskDelay(500);
    }
}

int main() {
    LOG("%s\n", __PRETTY_FUNCTION__);

    board::init();

    xTaskCreate(taskFunction, NULL, configMINIMAL_STACK_SIZE, NULL, (tskIDLE_PRIORITY + 1), NULL);

    vTaskStartScheduler();

    return (0);
}
