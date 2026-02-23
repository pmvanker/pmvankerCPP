# Question 34: Length of Last Word

**Length of Last Word**
    - **Problem Statement:** Find length of last word in string.
    - **Solution Approach:** Trim and find last space.
    - **C++ Code:**
      ```cpp
      #include <string>
      int lengthOfLastWord(std::string s) {
          size_t end = s.find_last_not_of(' ');
          if (end == std::string::npos) return 0;
          size_t start = s.find_last_of(' ', end);
          return end - start;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** String manipulation.
    - **Problem-Solving Technique:** Finding substrings.