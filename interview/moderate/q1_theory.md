# Question 1: Explain virtual functions and pure virtual functions.

**Explain virtual functions and pure virtual functions.**
    - **Answer/Explanation:** Virtual functions enable polymorphism, pure virtual functions make a class abstract.
    - **Code Example:**
      ```cpp
      class Base {
          virtual void func() = 0;  // pure virtual
      };
      class Derived : public Base {
          void func() override {}
      };
      ```
    - **Key Concepts:** Polymorphism, abstract classes.
    - **Problem-Solving Technique:** Interface design.