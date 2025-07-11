#include "cppgpio.h"

namespace CPPGPIO

{

[[nodiscard]] esp_err_t GpioBase::init(void)
{
    esp_err_t status{ESP_OK};
    status |= gpio_config(&_cfg);
    
    return status;
}



} // namespace CPPGPIO