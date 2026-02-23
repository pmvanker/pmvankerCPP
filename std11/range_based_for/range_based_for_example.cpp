#include <iostream>
#include <vector>
#include <array>

// C++11: Range-based for loop
// Use case: Simplified iteration over containers, arrays, or any range.
// How to use: for (auto& element : container) { }
// Methods: Element can be auto, const auto&, etc. for modification or not.

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << "Vector: ";
    for (auto& elem : vec) {
        elem *= 2; // modify
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::array<int, 5> arr = {10, 20, 30, 40, 50};
    std::cout << "Array: ";
    for (const auto& elem : arr) { // const to not modify
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Custom range
    int raw_arr[] = {100, 200, 300};
    for (auto elem : raw_arr) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}