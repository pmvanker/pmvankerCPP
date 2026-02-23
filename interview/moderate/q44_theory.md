# Question 44: What are string views in C++17?

**What are string views in C++17?**
    - **Answer/Explanation:** `std::string_view` provides a non-owning view of a string.
    - **Code Example:**
      ```cpp
      #include <string_view>
      std::string_view sv = "hello";
      ```
    - **Key Concepts:** Non-owning strings, efficiency.
    - **Problem-Solving Technique:** Avoiding copies.