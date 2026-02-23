# Question 25: Explain polymorphism in C++.

**Explain polymorphism in C++.**
    - **Answer/Explanation:** Polymorphism allows objects of different classes to be treated as objects of a common base class.
    - **Code Example:**
      ```cpp
      class Shape { virtual void draw() = 0; };
      class Circle : public Shape { void draw() override {} };
      ```
    - **Key Concepts:** Virtual functions, overriding.
    - **Problem-Solving Technique:** Dynamic binding.