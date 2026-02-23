# Question 35: Explain memory leaks and how to avoid them.

**Explain memory leaks and how to avoid them.**
    - **Answer/Explanation:** Memory leaks occur when allocated memory is not deallocated. Use RAII, smart pointers.
    - **Code Example:**
      ```cpp
      #include <memory>
      std::unique_ptr<int> ptr = std::make_unique<int>(10);  // automatic cleanup
      ```
    - **Key Concepts:** Resource management, smart pointers.
    - **Problem-Solving Technique:** RAII principle.