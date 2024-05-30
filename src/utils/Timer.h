#ifndef TIMER_H
#define TIMER_H

#include <chrono>

/**
 * @class Timer
 * @brief Utility class for measuring elapsed time.
 * 
 * This class provides a simple interface to measure elapsed time using
 * the high-resolution clock.
 */
class Timer {
public:
    Timer();

    /**
     * @brief Resets the timer to the current time.
     */
    void reset();

    /**
     * @brief Returns the elapsed time in milliseconds since the timer was last reset.
     * 
     * @return Elapsed time in milliseconds.
     */
    double elapsed() const;

private:
    std::chrono::time_point<std::chrono::high_resolution_clock> mStart;
};

#endif // TIMER_H
