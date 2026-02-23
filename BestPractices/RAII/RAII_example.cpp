#include <iostream>
#include <memory>

// RAII: Resource Acquisition Is Initialization
// Good practice: Use classes to manage resources, ensuring cleanup.
// Bad practice: Manual new/delete, prone to leaks.

class FileHandler {
public:
    FileHandler(const std::string& filename) {
        // Simulate opening file
        std::cout << "Opening file: " << filename << std::endl;
    }
    ~FileHandler() {
        // Cleanup
        std::cout << "Closing file" << std::endl;
    }
    void write(const std::string& data) {
        std::cout << "Writing: " << data << std::endl;
    }
};

void bad_practice() {
    FileHandler* fh = new FileHandler("test.txt");
    fh->write("data");
    // Forgot delete! Leak.
}

void good_practice() {
    FileHandler fh("test.txt"); // RAII
    fh.write("data");
    // Automatic cleanup
}

int main() {
    std::cout << "Bad practice (leak):" << std::endl;
    bad_practice();

    std::cout << "Good practice (RAII):" << std::endl;
    good_practice();

    return 0;
}