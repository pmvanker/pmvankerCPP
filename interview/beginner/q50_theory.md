# Question 50: What is the difference between `std::array` and `std::vector`?

**What is the difference between `std::array` and `std::vector`?**
    - **Answer/Explanation:** `std::array` has fixed size known at compile time, `std::vector` is dynamic.
    - **Code Example:**
      ```cpp
      std::array<int, 5> arr;
      std::vector<int> vec(5);
      ```
    - **Key Concepts:** Fixed vs dynamic size.
    - **Problem-Solving Technique:** Choosing based on size requirements.