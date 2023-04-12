#include <stdio.h>
#include <string.h>
#include <FreeRTOS.h>
#include <task.h>
#include <bl_gpio.h>

#define GPIO_LED_PIN_B 3
#define GPIO_LED_PIN_R 14
#define GPIO_LED_PIN_G 17

void blink_test(void *param)
{
    uint8_t value = 1;
    uint8_t color = 0;
    while(1) {
        if (color == 0)
        {
                bl_gpio_enable_output(GPIO_LED_PIN_B, 0, 0);
                bl_gpio_output_set(GPIO_LED_PIN_B, value);
                if (value == 0)
			color = 1;
        }
	else if (color == 1)
        {
                bl_gpio_enable_output(GPIO_LED_PIN_R, 0, 0);
                bl_gpio_output_set(GPIO_LED_PIN_R, value);
                if (value == 0)
                        color = 2;
        }
	else if (color == 2)
        {
                bl_gpio_enable_output(GPIO_LED_PIN_G, 0, 0);
                bl_gpio_output_set(GPIO_LED_PIN_G, value);
                if (value == 0)
                        color = 0;
        }
        value = !value;
        vTaskDelay(500);
    }
}

void main(void)
{
    xTaskCreate(blink_test, "blink", 1024, NULL, 15, NULL);
}

