#include <iostream>
#include <vector>
#include <algorithm>

// More STL Algorithms
// Use case: Advanced operations on ranges.
// How to use: std::copy, std::merge, std::unique, etc.

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4};
    std::vector<int> vec2 = {2, 4, 6, 8};
    std::vector<int> result;

    // Copy
    std::copy(vec1.begin(), vec1.end(), std::back_inserter(result));
    std::cout << "Copied: ";
    for (auto& e : result) std::cout << e << " ";
    std::cout << std::endl;

    // Merge sorted ranges
    std::vector<int> merged;
    std::merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), std::back_inserter(merged));
    std::cout << "Merged: ";
    for (auto& e : merged) std::cout << e << " ";
    std::cout << std::endl;

    // Unique (remove duplicates)
    std::vector<int> dup = {1, 1, 2, 2, 3};
    auto it = std::unique(dup.begin(), dup.end());
    dup.resize(std::distance(dup.begin(), it));
    std::cout << "Unique: ";
    for (auto& e : dup) std::cout << e << " ";
    std::cout << std::endl;

    return 0;
}