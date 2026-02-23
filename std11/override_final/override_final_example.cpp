#include <iostream>

// C++11: override and final specifiers
// Use case: override ensures method overrides a base virtual, final prevents further overriding.
// How to use: virtual ReturnType func(params) override; class Derived final : Base
// Methods: Compiler error if not actually overriding or trying to override final.

class Base {
public:
    virtual void func() { std::cout << "Base func" << std::endl; }
    virtual void another() { std::cout << "Base another" << std::endl; }
};

class Derived : public Base {
public:
    void func() override { std::cout << "Derived func" << std::endl; } // ensures override
    // void another() override { } // would error if not virtual in base
};

class FinalDerived final : public Derived {
public:
    void func() override { std::cout << "FinalDerived func" << std::endl; }
};

// class MoreDerived : public FinalDerived { } // error, final

int main() {
    Base* b = new Derived();
    b->func();
    delete b;

    b = new FinalDerived();
    b->func();
    delete b;

    return 0;
}