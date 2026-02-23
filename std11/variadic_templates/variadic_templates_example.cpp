#include <iostream>

// C++11: Variadic templates
// Use case: Functions or classes that accept a variable number of arguments, like printf or tuple.
// How to use: template<typename... Args> void func(Args... args)
// Methods: Expand with ... , sizeof...(Args) for count.

template<typename... Args>
void print(Args... args) {
    (std::cout << ... << args) << std::endl; // fold expression (C++17)
}

template<typename T, typename... Args>
void print_old(T first, Args... rest) {
    std::cout << first;
    if constexpr (sizeof...(rest) > 0) {
        std::cout << ", ";
        print_old(rest...);
    } else {
        std::cout << std::endl;
    }
}

template<typename... Args>
size_t count_args(Args... args) {
    return sizeof...(Args);
}

int main() {
    print(1, 2.5, "hello", 'c'); // C++17 fold
    print_old(1, 2.5, "hello", 'c'); // recursive

    std::cout << "Number of args: " << count_args(1, 2, 3, 4, 5) << std::endl;

    return 0;
}