#include <iostream>
#include <concepts>

// C++20: Concepts
// Use case: Constrain template parameters.
// How to use: template<typename T> requires std::integral<T> void func(T t)
// Methods: std::integral, std::floating_point, etc.

template<typename T>
requires std::integral<T>
void print_integral(T value) {
    std::cout << "Integral: " << value << std::endl;
}

template<typename T>
requires std::floating_point<T>
void print_floating(T value) {
    std::cout << "Floating: " << value << std::endl;
}

int main() {
    print_integral(42);
    print_floating(3.14);
    // print_integral(3.14); // error, not integral

    return 0;
}