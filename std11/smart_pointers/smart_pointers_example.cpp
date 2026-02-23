#include <iostream>
#include <memory>

// C++11: Smart pointers - unique_ptr, shared_ptr, weak_ptr
// Use case: Automatic memory management to prevent leaks. unique_ptr for exclusive ownership, shared_ptr for shared ownership, weak_ptr to break cycles.
// How to use: std::unique_ptr<Type> ptr = std::make_unique<Type>(args); std::shared_ptr<Type> ptr = std::make_shared<Type>(args);
// Methods: get() to access raw pointer, reset() to release, use_count() for shared_ptr.

class MyClass {
public:
    MyClass(int val) : value(val) { std::cout << "Constructed: " << value << std::endl; }
    ~MyClass() { std::cout << "Destructed: " << value << std::endl; }
    void show() { std::cout << "Value: " << value << std::endl; }
private:
    int value;
};

int main() {
    // unique_ptr: exclusive ownership
    auto uptr = std::make_unique<MyClass>(10);
    uptr->show();

    // shared_ptr: shared ownership
    auto sptr1 = std::make_shared<MyClass>(20);
    auto sptr2 = sptr1; // shared ownership
    std::cout << "Use count: " << sptr1.use_count() << std::endl;
    sptr1->show();

    // weak_ptr: non-owning reference
    std::weak_ptr<MyClass> wptr = sptr1;
    if (auto locked = wptr.lock()) {
        locked->show();
    }

    return 0;
}