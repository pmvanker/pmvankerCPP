#include <iostream>
#include <chrono>
#include <thread>

// C++11: Chrono library for time and durations
// Use case: Precise time measurements, delays, clocks.
// How to use: #include <chrono>, auto start = std::chrono::steady_clock::now();
// Methods: now(), duration_cast, count() for ticks.

int main() {
    // Measure time
    auto start = std::chrono::steady_clock::now();
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    auto end = std::chrono::steady_clock::now();

    auto duration = end - start;
    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(duration);
    std::cout << "Slept for: " << ms.count() << " ms" << std::endl;

    // Durations
    using namespace std::chrono_literals;
    auto dur = 5s + 300ms; // C++14 literals
    std::cout << "Duration: " << std::chrono::duration_cast<std::chrono::milliseconds>(dur).count() << " ms" << std::endl;

    // Current time
    auto now = std::chrono::system_clock::now();
    auto time_t = std::chrono::system_clock::to_time_t(now);
    std::cout << "Current time: " << std::ctime(&time_t);

    return 0;
}