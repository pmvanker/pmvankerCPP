# Question 4: Explain the `const` keyword in C++.

**Explain the `const` keyword in C++.**
   - **Answer/Explanation:** `const` is used to declare constants or to prevent modification of variables. It can be applied to variables, pointers, and member functions.
   - **Code Example:**
     ```cpp
     const int x = 10;  // constant variable
     const int* ptr = &x;  // pointer to constant
     int const* ptr2 = &x;  // same as above
     ```
   - **Key Concepts:** Constants, immutability.
   - **Problem-Solving Technique:** Ensuring data integrity.