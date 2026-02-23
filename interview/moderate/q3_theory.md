# Question 3: Explain the diamond problem in multiple inheritance.

**Explain the diamond problem in multiple inheritance.**
    - **Answer/Explanation:** When a class inherits from two classes that have a common base, ambiguity arises.
    - **Code Example:**
      ```cpp
      class A { int x; };
      class B : public A {};
      class C : public A {};
      class D : public B, public C {};  // D has two copies of x
      ```
    - **Key Concepts:** Ambiguity, virtual inheritance.
    - **Problem-Solving Technique:** Using virtual base classes.