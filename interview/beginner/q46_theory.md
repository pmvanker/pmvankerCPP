# Question 46: What is exception handling in C++?

**What is exception handling in C++?**
    - **Answer/Explanation:** Exception handling manages runtime errors using try, catch, throw.
    - **Code Example:**
      ```cpp
      try {
          throw std::runtime_error("Error");
      } catch (const std::exception& e) {
          std::cout << e.what();
      }
      ```
    - **Key Concepts:** Error propagation, stack unwinding.
    - **Problem-Solving Technique:** Robust error handling.