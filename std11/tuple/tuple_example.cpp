#include <iostream>
#include <tuple>

// C++11: std::tuple
// Use case: Group multiple values of different types.
// How to use: std::tuple<Type1, Type2> t = std::make_tuple(val1, val2); auto [a, b] = t;
// Methods: std::get<index>(t), std::tie, structured bindings (C++17).

int main() {
    // Create tuple
    auto t = std::make_tuple(1, 3.14, "hello");
    std::cout << "Tuple: " << std::get<0>(t) << ", " << std::get<1>(t) << ", " << std::get<2>(t) << std::endl;

    // Unpack with tie
    int i; double d; std::string s;
    std::tie(i, d, s) = t;
    std::cout << "Unpacked: " << i << ", " << d << ", " << s << std::endl;

    // Structured bindings (C++17)
    auto [x, y, z] = t;
    std::cout << "Structured: " << x << ", " << y << ", " << z << std::endl;

    return 0;
}