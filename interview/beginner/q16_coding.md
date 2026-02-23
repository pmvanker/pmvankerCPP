# Question 16: Valid Anagram

**Valid Anagram**
    - **Problem Statement:** Check if two strings are anagrams.
    - **Solution Approach:** Use frequency count arrays.
    - **C++ Code:**
      ```cpp
      #include <string>
      #include <array>
      bool isAnagram(std::string s, std::string t) {
          if (s.size() != t.size()) return false;
          std::array<int, 26> count = {};
          for (char c : s) count[c - 'a']++;
          for (char c : t) count[c - 'a']--;
          for (int i : count) if (i != 0) return false;
          return true;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** Frequency counting, anagrams.
    - **Problem-Solving Technique:** Character counting.