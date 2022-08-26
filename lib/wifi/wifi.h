#include "esp_event.h"

void wifi_EventHandler(void* arg, esp_event_base_t eventBase, int32_t eventId, void* eventData);
void wifi_InitSoftAp(const char* wifiSsid, const char* wifiPw);