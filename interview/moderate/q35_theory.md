# Question 35: Explain `std::async` and `std::future`.

**Explain `std::async` and `std::future`.**
    - **Answer/Explanation:** `std::async` launches asynchronous tasks, `std::future` retrieves results.
    - **Code Example:**
      ```cpp
      auto future = std::async(std::launch::async, func);
      int result = future.get();
      ```
    - **Key Concepts:** Task-based parallelism.
    - **Problem-Solving Technique:** Concurrent execution.