#include <iostream>

// C++11: constexpr - compile-time evaluation
// Use case: Define constants and functions evaluated at compile time, useful for metaprogramming and performance.
// How to use: constexpr Type var = value; constexpr ReturnType func(params) { body }
// Methods: Must be evaluable at compile time, can be used in template parameters.

constexpr int factorial(int n) {
    return n <= 1 ? 1 : n * factorial(n - 1);
}

constexpr int fib(int n) {
    return n <= 1 ? n : fib(n - 1) + fib(n - 2);
}

int main() {
    constexpr int fact5 = factorial(5); // computed at compile time
    constexpr int fib10 = fib(10);

    std::cout << "Factorial 5: " << fact5 << std::endl;
    std::cout << "Fibonacci 10: " << fib10 << std::endl;

    int arr[fact5]; // can use in array size
    std::cout << "Array size: " << sizeof(arr) / sizeof(int) << std::endl;

    return 0;
}