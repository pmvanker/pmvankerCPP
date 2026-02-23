# Question 20: What are mutexes in C++?

**What are mutexes in C++?**
    - **Answer/Explanation:** Mutexes synchronize access to shared resources in multithreaded programs.
    - **Code Example:**
      ```cpp
      #include <mutex>
      std::mutex mtx;
      mtx.lock();
      // critical section
      mtx.unlock();
      ```
    - **Key Concepts:** Thread synchronization, race conditions.
    - **Problem-Solving Technique:** Preventing data races.