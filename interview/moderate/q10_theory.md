# Question 10: What is perfect forwarding?

**What is perfect forwarding?**
    - **Answer/Explanation:** Perfect forwarding preserves the value category of arguments in template functions.
    - **Code Example:**
      ```cpp
      template <typename T>
      void wrapper(T&& arg) {
          func(std::forward<T>(arg));
      }
      ```
    - **Key Concepts:** Universal references, std::forward.
    - **Problem-Solving Technique:** Generic function wrappers.