#include <iostream>

// C++14: Generic Lambdas
// Use case: Lambdas with auto parameters for templates.
// How to use: [](auto x, auto y) { return x + y; }
// Methods: Deduce types automatically.

int main() {
    auto add = [](auto x, auto y) { return x + y; };
    std::cout << "Int add: " << add(1, 2) << std::endl;
    std::cout << "Double add: " << add(1.5, 2.5) << std::endl;
    std::cout << "String add: " << add(std::string("Hello"), std::string(" World")) << std::endl;

    return 0;
}