#include "app.h"

#define UPDATES_PER_SECOND 10.0f
#define UPDATE_TIMER (1.0f / UPDATES_PER_SECOND)

void app_main()
{
    if (app_Init() != 0)
    {
        return;
    }

    for (uint32_t i = 0; i < 1000000; i++)
    {
        app_Loop(0.0f);
    }

    app_DeInit();
}