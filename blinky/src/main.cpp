#include <FreeRTOS.h>
#include <task.h>

#include <SEGGER_RTT.h>

#include "board.hpp"

static void taskFunction(void *params) {
    (void)params;

    PRINTF("Setup\r\n");

    for (;;) {
        PRINTF("Loop\r\n");
        GPIO_TogglePinsOutput(LED_GREEN_GPIO, (1 << LED_GREEN_GPIO_PIN));
        vTaskDelay(500);
    }
}

int main() {
    board::initDebugConsole();
    board::initLed();

    PRINTF("Application started\r\n");

    xTaskCreate(taskFunction, NULL, configMINIMAL_STACK_SIZE, NULL, (tskIDLE_PRIORITY + 1), NULL);

    vTaskStartScheduler();
}
