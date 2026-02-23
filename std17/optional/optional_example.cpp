#include <iostream>
#include <optional>

// C++17: std::optional
// Use case: Represent optional values without pointers.
// How to use: std::optional<Type> opt = value; if (opt) { use *opt; }
// Methods: has_value(), value(), value_or(default).

std::optional<int> find_value(int key) {
    if (key == 42) return 100;
    return std::nullopt;
}

int main() {
    auto opt = find_value(42);
    if (opt.has_value()) {
        std::cout << "Found: " << opt.value() << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    // With value_or
    int val = find_value(0).value_or(-1);
    std::cout << "Value or default: " << val << std::endl;

    return 0;
}