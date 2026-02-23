#include <iostream>

// C++11: enum class - scoped enumerations
// Use case: Strongly typed enums that don't pollute global namespace, prevent implicit conversions.
// How to use: enum class EnumName { Value1, Value2 };
// Methods: Access as EnumName::Value1, no implicit int conversion.

enum class Color { Red, Green, Blue };
enum class Status { Ok, Error };

void printColor(Color c) {
    switch (c) {
        case Color::Red: std::cout << "Red" << std::endl; break;
        case Color::Green: std::cout << "Green" << std::endl; break;
        case Color::Blue: std::cout << "Blue" << std::endl; break;
    }
}

int main() {
    Color c = Color::Green;
    printColor(c);

    // No implicit conversion
    // int i = Color::Red; // error
    int i = static_cast<int>(Color::Red); // explicit cast
    std::cout << "Underlying value: " << i << std::endl;

    return 0;
}