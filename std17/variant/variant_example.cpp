#include <iostream>
#include <variant>

// C++17: std::variant
// Use case: Type-safe union for multiple types.
// How to use: std::variant<Type1, Type2> v; v = val; std::visit(visitor, v);
// Methods: std::get<Type>(v), std::holds_alternative<Type>(v), std::visit.

void print_visitor(const auto& val) { std::cout << val << std::endl; }

int main() {
    std::variant<int, double, std::string> v;
    v = 42;
    std::cout << "Int: " << std::get<int>(v) << std::endl;

    v = 3.14;
    std::cout << "Double: " << std::get<double>(v) << std::endl;

    v = "hello";
    std::cout << "String: " << std::get<std::string>(v) << std::endl;

    // Visit
    std::visit([](const auto& val) { std::cout << "Visited: " << val << std::endl; }, v);

    return 0;
}