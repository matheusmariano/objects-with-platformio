#pragma once

#include "Pin.h"

namespace Lumen
{
    class DigitalOutputPin: public Pin
    {
        protected:
            uint8_t pin;
        public:
            DigitalOutputPin(uint8_t pin);
            virtual ~DigitalOutputPin();
            virtual uint8_t GetPin();
            virtual void TurnOn();
            virtual void TurnOff();
    };
}
