# Question 43: Explain `std::any` in C++17.

**Explain `std::any` in C++17.**
    - **Answer/Explanation:** `std::any` can hold a value of any type.
    - **Code Example:**
      ```cpp
      #include <any>
      std::any a = 10;
      a = std::string("hello");
      ```
    - **Key Concepts:** Type-erased storage.
    - **Problem-Solving Technique:** Heterogeneous containers.