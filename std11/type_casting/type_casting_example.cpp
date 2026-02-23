#include <iostream>

// C++ Type Casting
// Modern C++ prefers explicit casts over C-style (type)value.
// static_cast: Safe conversions, compile-time.
// dynamic_cast: Runtime type checking for inheritance.
// const_cast: Remove/add const.
// reinterpret_cast: Low-level, dangerous.

class Base {
public:
    virtual void show() { std::cout << "Base" << std::endl; }
};

class Derived : public Base {
public:
    void show() override { std::cout << "Derived" << std::endl; }
};

int main() {
    // static_cast: For related types, numeric conversions.
    double d = 3.14;
    int i = static_cast<int>(d); // 3
    std::cout << "static_cast double to int: " << i << std::endl;

    Base* b = new Derived();
    Derived* d_ptr = static_cast<Derived*>(b); // Safe if known
    d_ptr->show();

    // dynamic_cast: For polymorphic types, returns nullptr if invalid.
    Base* b2 = new Base();
    Derived* d_ptr2 = dynamic_cast<Derived*>(b2); // nullptr
    if (d_ptr2) d_ptr2->show(); else std::cout << "Invalid cast" << std::endl;

    // const_cast: Modify constness.
    const int ci = 10;
    int* pi = const_cast<int*>(&ci);
    *pi = 20; // Undefined behavior, but compiles
    std::cout << "const_cast: " << ci << std::endl; // May or may not change

    // reinterpret_cast: Bit-level reinterpretation, dangerous.
    int num = 42;
    char* str = reinterpret_cast<char*>(&num);
    std::cout << "reinterpret_cast int to char*: " << *str << std::endl;

    delete b;
    delete b2;

    return 0;
}