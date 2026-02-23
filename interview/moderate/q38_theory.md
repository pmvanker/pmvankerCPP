# Question 38: What are concepts in C++20?

**What are concepts in C++20?**
    - **Answer/Explanation:** Concepts constrain template parameters with requirements.
    - **Code Example:**
      ```cpp
      template <typename T>
      concept Integral = std::is_integral_v<T>;
      template <Integral T>
      void func(T x) {}
      ```
    - **Key Concepts:** Template constraints.
    - **Problem-Solving Technique:** Better template error messages.