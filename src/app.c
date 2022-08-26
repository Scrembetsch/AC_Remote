#include "app.h"

#include "secret.h"

#include "lib_nvs.h"
#include "lib_wifi.h"

#include "esp_log.h"
#include "driver/gpio.h"

#define LED_PIN GPIO_NUM_18

int32_t app_Init()
{
    nvs_InitFlash();
    wifi_InitSoftAp(WIFI_SSID, WIFI_PASSWORD);

    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);

    return 0;
}

int state = 0;

void app_Loop(float dt)
{
    state++;
    if (state % 2 == 0) {  // If button is pressed
        gpio_set_level(LED_PIN, 1);         // Turn the LED on
    } else {
        gpio_set_level(LED_PIN, 0);         // Turn the LED off
    }
    ESP_LOGI("LED", "State: %d", state % 2 == 0);
}

void app_DeInit()
{
    nvs_DeInitFlash();
}
