#include "Timer.h"

Timer::Timer() {
    reset();
}

void Timer::reset() {
    mStart = std::chrono::high_resolution_clock::now();
}

double Timer::elapsed() const {
    auto now = std::chrono::high_resolution_clock::now();
    return std::chrono::duration_cast<std::chrono::milliseconds>(now - mStart).count();
}
