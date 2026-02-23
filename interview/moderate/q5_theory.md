# Question 5: Explain the `override` and `final` keywords.

**Explain the `override` and `final` keywords.**
    - **Answer/Explanation:** `override` ensures a function overrides a virtual base function, `final` prevents further overriding.
    - **Code Example:**
      ```cpp
      class Base {
          virtual void func() {}
      };
      class Derived : public Base {
          void func() override final {}
      };
      ```
    - **Key Concepts:** Polymorphism control.
    - **Problem-Solving Technique:** Preventing accidental overrides.