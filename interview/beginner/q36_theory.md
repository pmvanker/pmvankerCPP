# Question 36: What are smart pointers?

**What are smart pointers?**
    - **Answer/Explanation:** Smart pointers automatically manage memory, preventing leaks. Types: unique_ptr, shared_ptr, weak_ptr.
    - **Code Example:**
      ```cpp
      std::unique_ptr<int> uptr = std::make_unique<int>(5);
      std::shared_ptr<int> sptr = std::make_shared<int>(10);
      ```
    - **Key Concepts:** Automatic memory management, ownership.
    - **Problem-Solving Technique:** Modern C++ memory handling.