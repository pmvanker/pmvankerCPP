# Question 45: Explain template specialization.

**Explain template specialization.**
    - **Answer/Explanation:** Template specialization provides custom implementations for specific types.
    - **Code Example:**
      ```cpp
      template <>
      void print<std::string>(std::string value) { /* custom implementation */ }
      ```
    - **Key Concepts:** Customization, type-specific behavior.
    - **Problem-Solving Technique:** Handling special cases.