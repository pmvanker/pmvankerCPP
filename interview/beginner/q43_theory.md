# Question 43: Explain function templates.

**Explain function templates.**
    - **Answer/Explanation:** Function templates define functions that can work with different data types.
    - **Code Example:**
      ```cpp
      template <typename T>
      void print(T value) { std::cout << value; }
      ```
    - **Key Concepts:** Type deduction, overloading.
    - **Problem-Solving Technique:** Generic functions.