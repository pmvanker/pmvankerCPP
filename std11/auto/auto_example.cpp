#include <iostream>
#include <vector>
#include <string>

// C++11: auto keyword for automatic type deduction
// Use case: Simplifies code by letting the compiler deduce the type, especially useful with complex types like iterators.
// How to use: auto variable_name = expression;
// Methods: Type is deduced at compile time. No runtime overhead.

int main() {
    auto i = 42; // int
    auto d = 3.14; // double
    auto s = std::string("Hello"); // std::string
    auto v = std::vector<int>{1, 2, 3}; // std::vector<int>

    std::cout << "i: " << i << ", d: " << d << ", s: " << s << std::endl;
    for (auto& elem : v) { // auto in range-based for
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}