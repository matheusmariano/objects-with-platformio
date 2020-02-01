#include <Arduino.h>
#include <ArduinoSTL.h>
#include "board/Timer.h"
#include "peripherals/LED.h"

auto timer = Lumen::Timer();
auto led = Lumen::LED(13);

void BlinkLED()
{
    led.TurnOn();

    timer.SetTimeout(500, []() {
        led.TurnOff();

        timer.SetTimeout(500, []() {
            BlinkLED();
        });
    });
}

void setup()
{
    BlinkLED();
}

void loop()
{
    timer.Run();
    delay(50);
}
