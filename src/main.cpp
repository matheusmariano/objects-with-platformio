#include <Arduino.h>
#include "peripherals/LED.h"

auto * led = new Lumen::LED(13);

void setup()
{
}

void loop()
{
    led->TurnOn();
}
