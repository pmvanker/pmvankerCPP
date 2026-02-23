# Question 14: What is `constexpr` in C++11?

**What is `constexpr` in C++11?**
    - **Answer/Explanation:** `constexpr` allows computations at compile-time for constants and functions.
    - **Code Example:**
      ```cpp
      constexpr int square(int x) { return x * x; }
      constexpr int result = square(5);
      ```
    - **Key Concepts:** Compile-time evaluation.
    - **Problem-Solving Technique:** Performance optimization.