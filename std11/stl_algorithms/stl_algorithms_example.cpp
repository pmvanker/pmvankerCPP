#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

// C++ STL Algorithms
// Use case: Perform operations on ranges/containers without loops.
// How to use: #include <algorithm>, std::algorithm_name(begin, end, ...)
// Methods: sort, find, transform, accumulate, for_each, etc.

int main() {
    std::vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6};

    // Sort
    std::sort(vec.begin(), vec.end());
    std::cout << "Sorted: ";
    for (auto& e : vec) std::cout << e << " ";
    std::cout << std::endl;

    // Find
    auto it = std::find(vec.begin(), vec.end(), 5);
    if (it != vec.end()) {
        std::cout << "Found 5 at position: " << std::distance(vec.begin(), it) << std::endl;
    }

    // Transform
    std::vector<int> squared(vec.size());
    std::transform(vec.begin(), vec.end(), squared.begin(), [](int x) { return x * x; });
    std::cout << "Squared: ";
    for (auto& e : squared) std::cout << e << " ";
    std::cout << std::endl;

    // Accumulate (sum)
    int sum = std::accumulate(vec.begin(), vec.end(), 0);
    std::cout << "Sum: " << sum << std::endl;

    // For each
    std::cout << "Doubled: ";
    std::for_each(vec.begin(), vec.end(), [](int& x) { x *= 2; std::cout << x << " "; });
    std::cout << std::endl;

    return 0;
}