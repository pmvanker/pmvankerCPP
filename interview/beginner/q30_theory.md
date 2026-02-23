# Question 30: What is operator overloading?

**What is operator overloading?**
    - **Answer/Explanation:** Operator overloading allows custom implementation of operators for user-defined types.
    - **Code Example:**
      ```cpp
      class Complex {
          Complex operator+(const Complex& other) { /* implementation */ }
      };
      ```
    - **Key Concepts:** Operator functions, syntactic sugar.
    - **Problem-Solving Technique:** Intuitive class interfaces.