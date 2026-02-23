#include <iostream>
#include <vector>
#include <algorithm>

// C++11: Lambda expressions
// Use case: Define anonymous functions inline, useful for callbacks, custom comparators in algorithms.
// How to use: [capture](parameters) -> return_type { body }
// Capture modes: [] no capture, [&] by reference, [=] by value, [x,&y] specific.
// Methods: Can be stored in auto variables, passed to functions expecting callables.

int main() {
    auto lambda = [](int x, int y) { return x + y; };
    std::cout << "Lambda result: " << lambda(3, 4) << std::endl;

    std::vector<int> v = {3, 1, 4, 1, 5};
    std::sort(v.begin(), v.end(), [](int a, int b) { return a > b; }); // descending sort
    std::cout << "Sorted descending: ";
    for (auto& elem : v) std::cout << elem << " ";
    std::cout << std::endl;

    int factor = 2;
    auto multiplier = [factor](int x) { return x * factor; }; // capture by value
    std::cout << "Multiplied: " << multiplier(5) << std::endl;

    return 0;
}