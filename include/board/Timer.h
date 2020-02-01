#pragma once

#include <vector>

namespace Lumen
{
    class TimedAction
    {
        protected:
            unsigned long calledAt;
            unsigned long interval;
            void (*callback)();

        public:
            TimedAction(
                unsigned long calledAt,
                unsigned long interval,
                void (*callback)()
            );
            bool ShouldRun();
            void Run();
    };

    class Timer
    {
        protected:
            std::vector<TimedAction> actions;
        public:
            void SetTimeout(unsigned long interval, void (*callback)());
            void Run();
    };
}
