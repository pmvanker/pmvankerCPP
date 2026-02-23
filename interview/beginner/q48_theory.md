# Question 48: What are standard exceptions in C++?

**What are standard exceptions in C++?**
    - **Answer/Explanation:** Standard library provides exception classes like std::exception, std::runtime_error, etc.
    - **Code Example:**
      ```cpp
      #include <stdexcept>
      throw std::invalid_argument("Invalid argument");
      ```
    - **Key Concepts:** Exception hierarchy.
    - **Problem-Solving Technique:** Using appropriate exception types.