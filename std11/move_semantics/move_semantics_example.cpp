#include <iostream>
#include <vector>
#include <string>

// C++11: Move semantics - rvalue references and std::move
// Use case: Efficiently transfer resources from temporary objects, avoiding copies.
// How to use: Type&& for rvalue reference, std::move(expr) to cast lvalue to rvalue.
// Methods: Move constructor: Class(Class&& other), move assignment: operator=(Class&& other)

class MyVector {
public:
    MyVector(size_t size) : data(new int[size]), sz(size) { std::cout << "Constructor" << std::endl; }
    ~MyVector() { delete[] data; std::cout << "Destructor" << std::endl; }

    // Copy constructor (expensive)
    MyVector(const MyVector& other) : data(new int[other.sz]), sz(other.sz) {
        std::copy(other.data, other.data + sz, data);
        std::cout << "Copy constructor" << std::endl;
    }

    // Move constructor (efficient)
    MyVector(MyVector&& other) noexcept : data(other.data), sz(other.sz) {
        other.data = nullptr;
        other.sz = 0;
        std::cout << "Move constructor" << std::endl;
    }

    void show() { std::cout << "Size: " << sz << std::endl; }

private:
    int* data;
    size_t sz;
};

int main() {
    MyVector v1(1000000);
    MyVector v2 = std::move(v1); // move, not copy
    v2.show();

    std::vector<std::string> vec = {"Hello", "World"};
    std::string s = std::move(vec[0]); // move string
    std::cout << "Moved string: " << s << std::endl;

    return 0;
}