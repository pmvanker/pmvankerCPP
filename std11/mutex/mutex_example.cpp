#include <iostream>
#include <thread>
#include <mutex>

// C++11: std::mutex
// Use case: Synchronize access to shared data.
// How to use: std::mutex mtx; std::lock_guard<std::mutex> lock(mtx); // RAII lock
// Methods: lock(), unlock(), try_lock().

std::mutex mtx;
int shared = 0;

void increment() {
    std::lock_guard<std::mutex> lock(mtx); // RAII
    ++shared;
    std::cout << "Incremented to: " << shared << std::endl;
}

int main() {
    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    std::cout << "Final: " << shared << std::endl;

    return 0;
}