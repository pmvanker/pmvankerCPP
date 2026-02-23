# Question 21: First Unique Character in a String

**First Unique Character in a String**
    - **Problem Statement:** Find first non-repeating character.
    - **Solution Approach:** Use frequency map and second pass.
    - **C++ Code:**
      ```cpp
      #include <string>
      #include <unordered_map>
      int firstUniqChar(std::string s) {
          std::unordered_map<char, int> count;
          for (char c : s) count[c]++;
          for (size_t i = 0; i < s.size(); ++i) {
              if (count[s[i]] == 1) return i;
          }
          return -1;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** Frequency counting, strings.
    - **Problem-Solving Technique:** Two-pass algorithm.