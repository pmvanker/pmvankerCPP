# Question 30: What are type traits in C++?

**What are type traits in C++?**
    - **Answer/Explanation:** Type traits provide compile-time information about types.
    - **Code Example:**
      ```cpp
      #include <type_traits>
      static_assert(std::is_integral<int>::value);
      ```
    - **Key Concepts:** Type introspection.
    - **Problem-Solving Technique:** Conditional code based on types.