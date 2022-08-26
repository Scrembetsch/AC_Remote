#ifndef APP_H
#define APP_H

#include <stdint.h>

int32_t app_Init();
void app_Loop(float dt);
void app_DeInit();

#endif  // APP_H