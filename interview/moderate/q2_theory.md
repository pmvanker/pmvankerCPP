# Question 2: What is multiple inheritance in C++?

**What is multiple inheritance in C++?**
    - **Answer/Explanation:** A class can inherit from multiple base classes, but can lead to diamond problem.
    - **Code Example:**
      ```cpp
      class A {};
      class B {};
      class C : public A, public B {};
      ```
    - **Key Concepts:** Multiple base classes, ambiguity.
    - **Problem-Solving Technique:** Virtual inheritance.