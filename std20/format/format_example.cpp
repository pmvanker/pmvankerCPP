#include <iostream>
#include <format>

// C++20: std::format
// Use case: Type-safe string formatting.
// How to use: std::format("{}", value);
// Methods: format with placeholders.

int main() {
    std::string name = "World";
    int age = 30;

    std::cout << std::format("Hello, {}! Age: {}", name, age) << std::endl;

    double pi = 3.14159;
    std::cout << std::format("Pi: {:.2f}", pi) << std::endl;

    return 0;
}