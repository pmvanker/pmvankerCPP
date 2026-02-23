#include <iostream>
#include <vector>

// Exception Safety
// Good practice: Strong guarantee - operations are atomic.
// Bad practice: Partial changes on exceptions.

class SafeVector {
public:
    void add_safe(int val) {
        temp = data; // Copy
        temp.push_back(val);
        data = std::move(temp); // Commit
    }
    void print() {
        for (auto& e : data) std::cout << e << " ";
        std::cout << std::endl;
    }
private:
    std::vector<int> data;
    std::vector<int> temp;
};

void bad_add(std::vector<int>& vec, int val) {
    vec.push_back(val);
    // If exception here, vec is modified
    throw std::runtime_error("error");
}

void good_add(SafeVector& sv, int val) {
    sv.add_safe(val); // No partial changes
}

int main() {
    SafeVector sv;
    try {
        good_add(sv, 1);
        sv.print();
    } catch (...) {
        std::cout << "Exception handled safely" << std::endl;
    }

    return 0;
}