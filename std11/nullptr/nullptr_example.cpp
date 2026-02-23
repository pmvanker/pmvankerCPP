#include <iostream>

// C++11: nullptr - typed null pointer constant
// Use case: Type-safe replacement for NULL or 0 in pointer contexts.
// How to use: PointerType ptr = nullptr;
// Methods: Can be assigned to any pointer type, overloads distinguish from int.

void func(int* p) { std::cout << "int* overload" << std::endl; }
void func(double* p) { std::cout << "double* overload" << std::endl; }
void func(int i) { std::cout << "int overload" << std::endl; }

int main() {
    int* ip = nullptr;
    double* dp = nullptr;

    func(ip); // calls int*
    func(dp); // calls double*
    // func(nullptr); // ambiguous, removed

    if (ip == nullptr) {
        std::cout << "ip is null" << std::endl;
    }

    return 0;
}