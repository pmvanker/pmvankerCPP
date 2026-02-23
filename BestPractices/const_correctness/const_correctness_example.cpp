#include <iostream>

// Const Correctness
// Good practice: Use const for immutable data.
// Bad practice: Mutable where not needed.

class GoodClass {
public:
    void set_value(int v) { value = v; }
    int get_value() const { return value; } // const method
    void print() const { std::cout << value << std::endl; }
private:
    int value;
};

void bad_function(int& x) {
    x = 10; // Modifies
}

void good_function(const int& x) {
    // x = 10; // Error
    std::cout << x << std::endl;
}

int main() {
    const int c = 5;
    good_function(c); // OK

    GoodClass obj;
    obj.set_value(42);
    obj.print(); // const method

    return 0;
}