#include <iostream>
#include <vector>
#include <span>

// C++20: std::span
// Use case: Non-owning view of contiguous data.
// How to use: std::span<int> s(arr, size); s[0], etc.
// Methods: size(), data(), subspan().

void print(std::span<int> s) {
    for (auto& e : s) std::cout << e << " ";
    std::cout << std::endl;
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::span<int> s(vec); // View of vector

    print(s);
    print(s.subspan(1, 3)); // 2, 3, 4

    int arr[] = {10, 20, 30};
    std::span<int> s2(arr, 3);
    print(s2);

    return 0;
}