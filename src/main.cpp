/**
 * Проект создан в рамках изучения программирования контроллеров ESP32 с использованием C++.
 * Цель: написать класс для работы с GPIO.
 * The project was created as part of the study of programming ESP32 controllers using C++.
 * Purpose: Write a class for working with GPIO.
 * 
 */



#include "main.h"

#define LOG_LEVEL_LOCAL ESP_LOG_VERBOSE
#include "esp_log.h"
#define LOG_TAG "MAIN"

static Main my_main;

extern "C" void app_main(void)
{
    vTaskDelay(7000 / portTICK_PERIOD_MS);
    ESP_ERROR_CHECK(my_main.setup());

    while (true)
    {
        my_main.run();
    }
}

esp_err_t Main::setup(void)
{
    esp_err_t status{ESP_OK};
    // vTaskDelay(7000 / portTICK_PERIOD_MS);
    ESP_LOGD(LOG_TAG, "Setup!");
    return status;
}

void Main::run(void)
{
    ESP_LOGI(LOG_TAG, "Hello, World!");
    vTaskDelay(1000 / portTICK_PERIOD_MS);
}