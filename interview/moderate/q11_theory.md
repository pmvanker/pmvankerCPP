# Question 11: Explain variadic templates.

**Explain variadic templates.**
    - **Answer/Explanation:** Variadic templates allow functions/classes to accept a variable number of arguments.
    - **Code Example:**
      ```cpp
      template <typename... Args>
      void print(Args... args) { (std::cout << ... << args); }
      ```
    - **Key Concepts:** Parameter packs, fold expressions.
    - **Problem-Solving Technique:** Variable argument handling.