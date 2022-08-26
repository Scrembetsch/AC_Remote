#include "app.h"

#include "secret.h"

#include "nvs.h"
#include "wifi.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

int32_t app_Init()
{
    nvs_InitFlash();
    wifi_InitSoftAp(WIFI_SSID, WIFI_PASSWORD);

    return true;
}

void app_Loop(float dt)
{
}

void app_DeInit()
{
    nvs_DeInitFlash();
}
