# Question 42: What is `std::variant` in C++17?

**What is `std::variant` in C++17?**
    - **Answer/Explanation:** `std::variant` holds one of several alternative types.
    - **Code Example:**
      ```cpp
      #include <variant>
      std::variant<int, std::string> v = 10;
      v = "hello";
      ```
    - **Key Concepts:** Type-safe unions.
    - **Problem-Solving Technique:** Sum types.