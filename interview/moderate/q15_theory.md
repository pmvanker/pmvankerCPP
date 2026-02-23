# Question 15: Explain the `noexcept` specifier.

**Explain the `noexcept` specifier.**
    - **Answer/Explanation:** `noexcept` indicates that a function won't throw exceptions, enabling optimizations.
    - **Code Example:**
      ```cpp
      void func() noexcept { /* no exceptions */ }
      ```
    - **Key Concepts:** Exception safety, optimization.
    - **Problem-Solving Technique:** Guaranteeing no-throw behavior.