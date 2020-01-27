#include "peripherals/LED.h"

Lumen::LED::LED(uint8_t pin)
{
    this->pin = new DigitalOutputPin(pin);
}

Lumen::LED::LED(DigitalOutputPin* pin)
{
    this->pin = pin;
}

Lumen::LED::~LED()
{
    delete pin;
}

void Lumen::LED::TurnOn()
{
    pin->TurnOn();
}

void Lumen::LED::TurnOff()
{
    pin->TurnOff();
}
