#include "main.hpp"

void taskFunction(void *params) {
    __UNUSED(params);

    TickType_t ticks;

    PRINTF("Setup (%s)... ", __FUNCTION__);
    PRINTF("OK\r\n");

    for (;;) {
        ticks = xTaskGetTickCount();

        PRINTF("Ticks: %u\r\n", ticks);

        switch (ticks % 3) {
            case 0: {
                GPIO_TogglePinsOutput(LED_RED_GPIO, (1 << LED_RED_GPIO_PIN));
            } break;
            case 1: {
                GPIO_TogglePinsOutput(LED_GREEN_GPIO, (1 << LED_GREEN_GPIO_PIN));
            } break;
            case 2: {
                GPIO_TogglePinsOutput(LED_BLUE_GPIO, (1 << LED_BLUE_GPIO_PIN));
            } break;
            default: break;
        }

        vTaskDelay(500);
    }
}

extern "C" int main() {
    board::initDebugConsole();
    board::initLeds();

    PRINTF("Application started\r\n");

    PRINTF("Creating tasks... ");
    xTaskCreate(taskFunction, NULL, configMINIMAL_STACK_SIZE, NULL, (tskIDLE_PRIORITY + 1), NULL);
    PRINTF("OK\r\n");

    vTaskStartScheduler();
}
