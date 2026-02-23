# Question 23: Explain atomic operations in C++.

**Explain atomic operations in C++.**
    - **Answer/Explanation:** Atomic operations are indivisible operations that prevent race conditions.
    - **Code Example:**
      ```cpp
      #include <atomic>
      std::atomic<int> counter = 0;
      counter++;
      ```
    - **Key Concepts:** Thread-safe operations.
    - **Problem-Solving Technique:** Lock-free programming.