#pragma once

#include "board/DigitalOutputPin.h"

namespace Lumen
{
    class LED
    {
        protected:
            DigitalOutputPin* pin;
        public:
            LED(uint8_t pin);
            LED(DigitalOutputPin* pin);
            ~LED();
            void TurnOn();
            void TurnOff();
    };
}
