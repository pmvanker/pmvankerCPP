# Question 21: Explain `std::thread` in C++11.

**Explain `std::thread` in C++11.**
    - **Answer/Explanation:** `std::thread` represents a thread of execution.
    - **Code Example:**
      ```cpp
      #include <thread>
      void func() {}
      std::thread t(func);
      t.join();
      ```
    - **Key Concepts:** Multithreading, concurrency.
    - **Problem-Solving Technique:** Parallel execution.