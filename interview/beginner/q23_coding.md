# Question 23: Excel Sheet Column Number

**Excel Sheet Column Number**
    - **Problem Statement:** Convert Excel column title to number.
    - **Solution Approach:** Treat as base-26 number.
    - **C++ Code:**
      ```cpp
      #include <string>
      int titleToNumber(std::string s) {
          int result = 0;
          for (char c : s) {
              result = result * 26 + (c - 'A' + 1);
          }
          return result;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** Base conversion, Excel columns.
    - **Problem-Solving Technique:** Positional notation.