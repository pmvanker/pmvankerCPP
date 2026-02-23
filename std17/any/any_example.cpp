#include <iostream>
#include <any>

// C++17: std::any
// Use case: Store any type safely.
// How to use: std::any a = value; T val = std::any_cast<T>(a);
// Methods: has_value(), type(), reset().

int main() {
    std::any a = 42;
    std::cout << "Int: " << std::any_cast<int>(a) << std::endl;

    a = std::string("hello");
    std::cout << "String: " << std::any_cast<std::string>(a) << std::endl;

    if (a.has_value()) {
        std::cout << "Type: " << a.type().name() << std::endl;
    }

    a.reset(); // Clear
    std::cout << "Has value: " << a.has_value() << std::endl;

    return 0;
}