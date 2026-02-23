# Question 41: Explain the `std::optional` class.

**Explain the `std::optional` class.**
    - **Answer/Explanation:** `std::optional` represents a value that may or may not be present.
    - **Code Example:**
      ```cpp
      #include <optional>
      std::optional<int> opt = 10;
      if (opt) { std::cout << *opt; }
      ```
    - **Key Concepts:** Nullable types.
    - **Problem-Solving Technique:** Handling optional values.