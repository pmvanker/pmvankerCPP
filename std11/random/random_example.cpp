#include <iostream>
#include <random>

// C++11: std::random
// Use case: Generate random numbers.
// How to use: std::random_device rd; std::mt19937 gen(rd()); std::uniform_int_distribution<> dist(1, 100); dist(gen);
// Methods: Various distributions and engines.

int main() {
    std::random_device rd; // Seed
    std::mt19937 gen(rd()); // Mersenne Twister engine

    std::uniform_int_distribution<> int_dist(1, 100);
    std::cout << "Random int: " << int_dist(gen) << std::endl;

    std::uniform_real_distribution<> real_dist(0.0, 1.0);
    std::cout << "Random real: " << real_dist(gen) << std::endl;

    std::normal_distribution<> norm_dist(0.0, 1.0);
    std::cout << "Normal: " << norm_dist(gen) << std::endl;

    return 0;
}