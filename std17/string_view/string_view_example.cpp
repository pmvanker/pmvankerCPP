#include <iostream>
#include <string_view>

// C++17: std::string_view
// Use case: Non-owning string reference.
// How to use: std::string_view sv(str); sv.substr(), etc.
// Methods: substr(), find(), etc.

void print(std::string_view sv) {
    std::cout << sv << std::endl;
}

int main() {
    std::string s = "Hello World";
    std::string_view sv = s; // No copy

    print(sv);
    print(sv.substr(6, 5)); // "World"

    std::cout << "Find 'o': " << sv.find('o') << std::endl;

    return 0;
}