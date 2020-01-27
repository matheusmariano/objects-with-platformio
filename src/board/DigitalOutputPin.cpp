#include "board/DigitalOutputPin.h"

Lumen::DigitalOutputPin::DigitalOutputPin(uint8_t pin)
{
    this->pin = pin;
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
}

Lumen::DigitalOutputPin::~DigitalOutputPin() {}

uint8_t Lumen::DigitalOutputPin::GetPin()
{
    return pin;
}

void Lumen::DigitalOutputPin::TurnOn()
{
    digitalWrite(pin, HIGH);
}

void Lumen::DigitalOutputPin::TurnOff()
{
    digitalWrite(pin, LOW);
}
