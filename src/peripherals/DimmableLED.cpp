#include "peripherals/DimmableLED.h"

Lumen::DimmableLED::DimmableLED(uint8_t pin) : LED(pin)
{
    this->pin = new AnalogOutputPin(pin);
}

Lumen::DimmableLED::DimmableLED(AnalogOutputPin* pin) : LED(pin)
{
    this->pin = pin;
}

Lumen::DimmableLED::~DimmableLED()
{
    delete pin;
}

void Lumen::DimmableLED::Set(float value)
{
    pin->Set(value);
}
