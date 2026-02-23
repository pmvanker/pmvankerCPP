# Question 14: Minimum Window Substring

**Minimum Window Substring**
    - **Problem Statement:** Find minimum window containing all characters.
    - **Solution Approach:** Sliding window with frequency maps.
    - **C++ Code:**
      ```cpp
      #include <string>
      #include <unordered_map>
      #include <climits>
      std::string minWindow(std::string s, std::string t) {
          std::unordered_map<char, int> target_count, window_count;
          for (char c : t) target_count[c]++;
          int left = 0, min_len = INT_MAX, start = 0, required = target_count.size(), formed = 0;
          for (int right = 0; right < s.size(); ++right) {
              char c = s[right];
              window_count[c]++;
              if (target_count.count(c) && window_count[c] == target_count[c]) formed++;
              while (left <= right && formed == required) {
                  if (right - left + 1 < min_len) {
                      min_len = right - left + 1;
                      start = left;
                  }
                  char left_char = s[left];
                  window_count[left_char]--;
                  if (target_count.count(left_char) && window_count[left_char] < target_count[left_char]) formed--;
                  left++;
              }
          }
          return min_len == INT_MAX ? "" : s.substr(start, min_len);
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(m) space.
    - **Key Concepts:** Sliding window, frequency maps.
    - **Problem-Solving Technique:** Window contraction.