# Question 31: Explain the `decltype` specifier.

**Explain the `decltype` specifier.**
    - **Answer/Explanation:** `decltype` deduces the type of an expression.
    - **Code Example:**
      ```cpp
      int x = 10;
      decltype(x) y = 20;  // int
      ```
    - **Key Concepts:** Type deduction.
    - **Problem-Solving Technique:** Generic type handling.