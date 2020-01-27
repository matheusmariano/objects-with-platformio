#pragma once

#include <Arduino.h>

namespace Lumen
{
    struct Pin
    {
        virtual uint8_t GetPin() = 0;
    };
}
