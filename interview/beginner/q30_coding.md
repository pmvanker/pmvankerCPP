# Question 30: Implement strStr()

**Implement strStr()**
    - **Problem Statement:** Find first occurrence of substring.
    - **Solution Approach:** Use sliding window or built-in find.
    - **C++ Code:**
      ```cpp
      #include <string>
      int strStr(std::string haystack, std::string needle) {
          size_t pos = haystack.find(needle);
          return pos == std::string::npos ? -1 : pos;
      }
      ```
    - **Time/Space Complexity:** O(n*m) time, O(1) space.
    - **Key Concepts:** String searching.
    - **Problem-Solving Technique:** Substring matching.