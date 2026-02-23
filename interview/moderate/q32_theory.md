# Question 32: What is `std::function`?

**What is `std::function`?**
    - **Answer/Explanation:** `std::function` is a polymorphic function wrapper that can store any callable.
    - **Code Example:**
      ```cpp
      #include <functional>
      std::function<int(int)> f = [](int x) { return x * 2; };
      ```
    - **Key Concepts:** Callable objects, polymorphism.
    - **Problem-Solving Technique:** Storing functions generically.