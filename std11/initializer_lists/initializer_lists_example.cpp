#include <iostream>
#include <vector>
#include <initializer_list>

// C++11: Initializer lists
// Use case: Uniform initialization syntax, pass lists to constructors.
// How to use: Type var{val1, val2}; or constructor(std::initializer_list<Type> list)
// Methods: std::initializer_list provides begin(), end(), size().

class MyContainer {
public:
    MyContainer(std::initializer_list<int> list) {
        for (auto elem : list) {
            data.push_back(elem);
        }
    }
    void show() {
        for (auto& elem : data) std::cout << elem << " ";
        std::cout << std::endl;
    }
private:
    std::vector<int> data;
};

int main() {
    std::vector<int> vec{1, 2, 3, 4}; // uniform init
    std::cout << "Vector: ";
    for (auto& e : vec) std::cout << e << " ";
    std::cout << std::endl;

    MyContainer cont{5, 6, 7, 8};
    cont.show();

    // Function with initializer_list
    auto sum = [](std::initializer_list<int> list) {
        int total = 0;
        for (int e : list) total += e;
        return total;
    };
    std::cout << "Sum: " << sum({1, 2, 3, 4, 5}) << std::endl;

    return 0;
}