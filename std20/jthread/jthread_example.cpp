#include <iostream>
#include <thread>

// C++20: std::jthread
// Use case: Joining thread automatically.
// How to use: std::jthread t(func); // Joins on destruction
// Methods: join(), detach(), request_stop().

void worker(std::stop_token st) {
    while (!st.stop_requested()) {
        std::cout << "Working..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    std::cout << "Stopped" << std::endl;
}

int main() {
    std::jthread t(worker); // Auto-joins
    std::this_thread::sleep_for(std::chrono::seconds(1));
    t.request_stop(); // Signal stop

    return 0; // t joins here
}