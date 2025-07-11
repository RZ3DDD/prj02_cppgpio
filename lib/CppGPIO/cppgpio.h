#ifndef CPPGPIO_
#define CPPGPIO_

#include "driver/gpio.h"

namespace CPPGPIO
{

class GpioBase
{
protected:
    const gpio_num_t _pin;
    const bool _inverted_logic = false;
    const gpio_config_t _cfg;

public:
    constexpr GpioBase(const gpio_num_t pin,
            const gpio_config_t& config,
            const bool invert_logic = false) :
        _pin{pin},
        _cfg{config},
        _inverted_logic{invert_logic}
    {

    }
    
    
    virtual bool state(void) = 0; // Чистая вирт.функция. Должна быть переопр. в произв.классах.
    virtual esp_err_t set(const bool state) = 0;

    [[nodiscard]] esp_err_t init(void);

};

class GpioOutput : public GpioBase
{
    bool _state = false;
}




} // namespace CPPGPIO




#endif //CPPGPIO_
