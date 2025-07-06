#pragma once

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

class Main final
{
private:
    /* data */
public:
    // Main final(/* args */);
    // ~Main final();

    esp_err_t setup(void);
    void run(void);
};

// Main final::Main final(/* args */)
// {
// }

// Main final::~Main final()
// {
// }

