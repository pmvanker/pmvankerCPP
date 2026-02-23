# Question 40: What is coroutines in C++20?

**What is coroutines in C++20?**
    - **Answer/Explanation:** Coroutines allow functions to suspend and resume execution.
    - **Code Example:**
      ```cpp
      #include <coroutine>
      task<int> async_func() { co_return 42; }
      ```
    - **Key Concepts:** Asynchronous programming, generators.
    - **Problem-Solving Technique:** Simplifying async code.