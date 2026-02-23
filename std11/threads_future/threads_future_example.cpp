#include <iostream>
#include <thread>
#include <future>
#include <chrono>

// C++11: Threads and std::future
// Use case: Asynchronous execution, parallel processing.
// How to use: std::thread t(func, args); t.join(); auto fut = std::async(func, args); fut.get();
// Methods: std::future::get() blocks and returns result, wait() waits without getting.

int compute(int x) {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    return x * x;
}

void worker(int id) {
    std::cout << "Worker " << id << " starting" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "Worker " << id << " done" << std::endl;
}

int main() {
    // Thread
    std::thread t1(worker, 1);
    std::thread t2(worker, 2);
    t1.join();
    t2.join();

    // Future with async
    auto fut1 = std::async(std::launch::async, compute, 5);
    auto fut2 = std::async(std::launch::async, compute, 10);

    std::cout << "Computing in background..." << std::endl;
    int res1 = fut1.get(); // blocks
    int res2 = fut2.get();
    std::cout << "Results: " << res1 << ", " << res2 << std::endl;

    return 0;
}