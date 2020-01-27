#include "board/AnalogOutputPin.h"

Lumen::AnalogOutputPin::AnalogOutputPin(uint8_t pin) : DigitalOutputPin(pin)
{
    this->pin = pin;
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
}

void Lumen::AnalogOutputPin::Set(float value)
{
    analogWrite(pin, 255 * value);
}
