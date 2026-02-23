# Question 22: What is the difference between `struct` and `class` in C++?

**What is the difference between `struct` and `class` in C++?**
    - **Answer/Explanation:** By default, members of `struct` are public, while in `class` they are private. Both can have methods.
    - **Code Example:**
      ```cpp
      struct Point { int x, y; };
      class Circle { private: int radius; };
      ```
    - **Key Concepts:** Access specifiers, encapsulation.
    - **Problem-Solving Technique:** Choosing appropriate data structure.