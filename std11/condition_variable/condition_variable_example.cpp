#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

// C++11: std::condition_variable
// Use case: Wait for events between threads.
// How to use: std::condition_variable cv; cv.wait(lock, predicate); cv.notify_one();
// Methods: wait(), wait_for(), notify_one(), notify_all().

std::mutex mtx;
std::condition_variable cv;
bool ready = false;

void worker() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return ready; }); // Wait until ready
    std::cout << "Worker: Processing" << std::endl;
}

int main() {
    std::thread t(worker);

    std::this_thread::sleep_for(std::chrono::seconds(1));
    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;
    }
    cv.notify_one(); // Wake worker

    t.join();

    return 0;
}