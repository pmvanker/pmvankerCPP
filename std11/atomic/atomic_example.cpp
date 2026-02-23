#include <iostream>
#include <atomic>
#include <thread>

// C++11: std::atomic
// Use case: Lock-free operations on shared variables.
// How to use: std::atomic<int> a; a.store(42); a.load();
// Methods: load(), store(), exchange(), compare_exchange_weak/strong().

std::atomic<int> counter(0);

void increment() {
    for (int i = 0; i < 1000; ++i) {
        counter.fetch_add(1); // Atomic increment
    }
}

int main() {
    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    std::cout << "Counter: " << counter.load() << std::endl; // 2000

    return 0;
}