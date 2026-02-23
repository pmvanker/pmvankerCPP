# Question 13: Explain the concept of scope in C++.

**Explain the concept of scope in C++.**
    - **Answer/Explanation:** Scope determines the visibility and lifetime of variables. Types include global, local, block, etc.
    - **Code Example:**
      ```cpp
      int global = 10;  // global scope
      void func() {
          int local = 5;  // local scope
          if (true) {
              int block = 1;  // block scope
          }
      }
      ```
    - **Key Concepts:** Variable lifetime, name resolution.
    - **Problem-Solving Technique:** Avoiding naming conflicts.