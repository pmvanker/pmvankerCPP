# Question 47: Explain structured bindings in C++17.

**Explain structured bindings in C++17.**
    - **Answer/Explanation:** Structured bindings decompose aggregates into individual variables.
    - **Code Example:**
      ```cpp
      auto [x, y] = std::pair<int, int>(1, 2);
      ```
    - **Key Concepts:** Tuple unpacking.
    - **Problem-Solving Technique:** Simplifying destructuring.