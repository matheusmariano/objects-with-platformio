#include <Arduino.h>
#include <ArduinoSTL.h>
#include "board/Timer.h"

Lumen::TimedAction::TimedAction(unsigned long calledAt, unsigned long interval, void (*callback)())
{
    this->calledAt = calledAt;
    this->interval = interval;
    this->callback = callback;
}

bool Lumen::TimedAction::ShouldRun()
{
    return millis() >= calledAt + interval;
}

void Lumen::TimedAction::Run()
{
    callback();
}

void Lumen::Timer::SetTimeout(unsigned long interval, void (*callback)())
{
    actions.push_back(
        TimedAction(millis(), interval, callback)
    );
}

void Lumen::Timer::Run()
{
    for (auto &action : actions) {
        if (action.ShouldRun()) {
            action.Run();
        }
    }

    actions.erase(
        std::remove_if(
            actions.begin(),
            actions.end(),
            [](TimedAction action) {
                return action.ShouldRun();
            }
        ),
        actions.end()
    );
}
