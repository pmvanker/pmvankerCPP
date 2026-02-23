# Question 33: Explain references in C++.

**Explain references in C++.**
    - **Answer/Explanation:** References are aliases for existing variables, must be initialized and cannot be null.
    - **Code Example:**
      ```cpp
      int x = 10;
      int& ref = x;
      ref = 20;  // modifies x
      ```
    - **Key Concepts:** Aliases, safer pointers.
    - **Problem-Solving Technique:** Parameter passing.