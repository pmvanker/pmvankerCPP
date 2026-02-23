#include <iostream>
#include <memory>

// C++14: std::make_unique
// Use case: Safely create unique_ptr without explicit new.
// How to use: std::make_unique<Type>(args)
// Methods: Exception-safe, preferred over new Type.

class MyClass {
public:
    MyClass(int val) : value(val) { std::cout << "Constructed: " << value << std::endl; }
    ~MyClass() { std::cout << "Destructed: " << value << std::endl; }
    void show() { std::cout << "Value: " << value << std::endl; }
private:
    int value;
};

int main() {
    // C++11 way (still works)
    // std::unique_ptr<MyClass> up1(new MyClass(10));

    // C++14 way: make_unique
    auto up = std::make_unique<MyClass>(10);
    up->show();

    // For arrays (C++14)
    auto arr = std::make_unique<int[]>(5);
    for (int i = 0; i < 5; ++i) arr[i] = i * 10;
    std::cout << "Array: ";
    for (int i = 0; i < 5; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}