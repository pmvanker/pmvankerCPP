# Question 15: Longest Common Prefix

**Longest Common Prefix**
    - **Problem Statement:** Find the longest common prefix in an array of strings.
    - **Solution Approach:** Compare characters vertically.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <string>
      std::string longestCommonPrefix(std::vector<std::string>& strs) {
          if (strs.empty()) return "";
          for (size_t i = 0; i < strs[0].size(); ++i) {
              char c = strs[0][i];
              for (size_t j = 1; j < strs.size(); ++j) {
                  if (i >= strs[j].size() || strs[j][i] != c) {
                      return strs[0].substr(0, i);
                  }
              }
          }
          return strs[0];
      }
      ```
    - **Time/Space Complexity:** O(m*n) time, O(1) space.
    - **Key Concepts:** String comparison, prefixes.
    - **Problem-Solving Technique:** Vertical scanning.