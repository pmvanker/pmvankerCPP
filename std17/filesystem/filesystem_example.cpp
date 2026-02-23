#include <iostream>
#include <filesystem>

// C++17: Filesystem
// Use case: File and directory operations.
// How to use: std::filesystem::path, exists, create_directory, etc.
// Methods: Cross-platform path handling.

namespace fs = std::filesystem;

int main() {
    fs::path p = "example.txt";

    // Check if exists
    if (fs::exists(p)) {
        std::cout << p << " exists" << std::endl;
    } else {
        std::cout << p << " does not exist" << std::endl;
    }

    // Create directory
    fs::create_directory("test_dir");
    std::cout << "Created directory: test_dir" << std::endl;

    // List directory
    for (const auto& entry : fs::directory_iterator(".")) {
        std::cout << entry.path() << std::endl;
    }

    return 0;
}