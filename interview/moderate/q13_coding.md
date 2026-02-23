# Question 13: Longest Substring Without Repeating Characters

**Longest Substring Without Repeating Characters**
    - **Problem Statement:** Find longest substring without duplicates.
    - **Solution Approach:** Sliding window with set.
    - **C++ Code:**
      ```cpp
      #include <string>
      #include <unordered_set>
      int lengthOfLongestSubstring(std::string s) {
          std::unordered_set<char> set;
          int left = 0, max_len = 0;
          for (int right = 0; right < s.size(); ++right) {
              while (set.count(s[right])) {
                  set.erase(s[left]);
                  left++;
              }
              set.insert(s[right]);
              max_len = std::max(max_len, right - left + 1);
          }
          return max_len;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(min(n,m)) space.
    - **Key Concepts:** Sliding window, sets.
    - **Problem-Solving Technique:** Window expansion.