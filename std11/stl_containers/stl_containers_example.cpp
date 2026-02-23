#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>

// C++ STL Containers
// Use case: Efficient data storage and manipulation.
// How to use: #include <container>, Container<Type> c; c.method()
// Methods: vector: push_back, size, operator[]; map: insert, find, operator[]; unordered_map: same but hash-based; set: insert, find.

int main() {
    // Vector: dynamic array
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    std::cout << "Vector: ";
    for (auto& e : vec) std::cout << e << " ";
    std::cout << std::endl;

    // Map: ordered associative
    std::map<std::string, int> m;
    m["one"] = 1;
    m["two"] = 2;
    m.insert({"three", 3});
    std::cout << "Map: ";
    for (auto& p : m) std::cout << p.first << ":" << p.second << " ";
    std::cout << std::endl;

    // Unordered_map: hash-based
    std::unordered_map<std::string, int> um;
    um["apple"] = 10;
    um["banana"] = 20;
    std::cout << "Unordered map apple: " << um["apple"] << std::endl;

    // Set: unique elements
    std::set<int> s = {3, 1, 4, 1, 5};
    std::cout << "Set: ";
    for (auto& e : s) std::cout << e << " ";
    std::cout << std::endl;

    return 0;
}