#pragma once

#include "DigitalOutputPin.h"
#include "Pin.h"

namespace Lumen
{
    class AnalogOutputPin: public DigitalOutputPin
    {
        public:
            AnalogOutputPin(uint8_t pin);
            void Set(float value);
    };
}
