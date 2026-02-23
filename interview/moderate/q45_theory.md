# Question 45: Explain the `std::span` class (C++20).

**Explain the `std::span` class (C++20).**
    - **Answer/Explanation:** `std::span` represents a contiguous sequence of objects.
    - **Code Example:**
      ```cpp
      #include <span>
      int arr[] = {1, 2, 3};
      std::span<int> s(arr);
      ```
    - **Key Concepts:** View of arrays, safety.
    - **Problem-Solving Technique:** Bounds-safe array access.