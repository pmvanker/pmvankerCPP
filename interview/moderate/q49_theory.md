# Question 49: Explain the `std::source_location` class (C++20).

**Explain the `std::source_location` class (C++20).**
    - **Answer/Explanation:** `std::source_location` provides information about the source code location.
    - **Code Example:**
      ```cpp
      #include <source_location>
      void log(std::source_location loc = std::source_location::current()) {
          std::cout << loc.file_name();
      }
      ```
    - **Key Concepts:** Reflection, debugging.
    - **Problem-Solving Technique:** Logging source locations.