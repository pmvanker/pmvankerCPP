# Question 36: What is the `std::chrono` library?

**What is the `std::chrono` library?**
    - **Answer/Explanation:** `std::chrono` provides time-related utilities for measuring and manipulating time.
    - **Code Example:**
      ```cpp
      #include <chrono>
      auto start = std::chrono::high_resolution_clock::now();
      // code
      auto end = std::chrono::high_resolution_clock::now();
      auto duration = end - start;
      ```
    - **Key Concepts:** Time measurement, clocks.
    - **Problem-Solving Technique:** Performance timing.