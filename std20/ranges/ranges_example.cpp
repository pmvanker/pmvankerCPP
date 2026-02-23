#include <iostream>
#include <vector>
#include <algorithm>

// C++20: Ranges
// Use case: More expressive and composable algorithms.
// How to use: std::ranges::sort(range), std::ranges::find, etc.
// Methods: Work with ranges directly, support projections.

int main() {
    std::vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6};

    // Sort with ranges
    std::ranges::sort(vec);
    std::cout << "Sorted: ";
    for (auto& e : vec) std::cout << e << " ";
    std::cout << std::endl;

    // Find with ranges
    auto it = std::ranges::find(vec, 5);
    if (it != vec.end()) {
        std::cout << "Found 5 at position: " << std::distance(vec.begin(), it) << std::endl;
    }

    // Transform with ranges (C++20)
    std::vector<int> squared(vec.size());
    std::ranges::transform(vec, squared.begin(), [](int x) { return x * x; });
    std::cout << "Squared: ";
    for (auto& e : squared) std::cout << e << " ";
    std::cout << std::endl;

    return 0;
}