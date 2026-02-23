# Question 8: What are move semantics in C++11?

**What are move semantics in C++11?**
    - **Answer/Explanation:** Move semantics allow transferring ownership of resources instead of copying.
    - **Code Example:**
      ```cpp
      class MyClass {
          MyClass(MyClass&& other) noexcept { /* move */ }
      };
      ```
    - **Key Concepts:** Rvalue references, efficiency.
    - **Problem-Solving Technique:** Optimizing resource transfers.