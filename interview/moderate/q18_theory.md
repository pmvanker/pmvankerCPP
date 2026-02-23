# Question 18: What is `std::unique_ptr`?

**What is `std::unique_ptr`?**
    - **Answer/Explanation:** `unique_ptr` is a smart pointer that owns and manages a resource exclusively.
    - **Code Example:**
      ```cpp
      std::unique_ptr<int> ptr = std::make_unique<int>(10);
      ```
    - **Key Concepts:** Exclusive ownership, automatic cleanup.
    - **Problem-Solving Technique:** RAII for pointers.