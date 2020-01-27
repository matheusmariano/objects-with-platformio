#pragma once

#include "LED.h"
#include "board/AnalogOutputPin.h"

namespace Lumen
{
    class DimmableLED: public LED
    {
        protected:
            AnalogOutputPin* pin;
        public:
            DimmableLED(uint8_t pin);
            DimmableLED(AnalogOutputPin* pin);
            ~DimmableLED();
            void Set(float value);
    };
}
