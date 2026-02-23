# Question 9: Word Break

**Word Break**
    - **Problem Statement:** Check if string can be segmented into dictionary words.
    - **Solution Approach:** Dynamic programming.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <string>
      #include <unordered_set>
      bool wordBreak(std::string s, std::vector<std::string>& wordDict) {
          std::unordered_set<std::string> dict(wordDict.begin(), wordDict.end());
          std::vector<bool> dp(s.size() + 1, false);
          dp[0] = true;
          for (size_t i = 1; i <= s.size(); ++i) {
              for (size_t j = 0; j < i; ++j) {
                  if (dp[j] && dict.count(s.substr(j, i - j))) {
                      dp[i] = true;
                      break;
                  }
              }
          }
          return dp[s.size()];
      }
      ```
    - **Time/Space Complexity:** O(n^2) time, O(n) space.
    - **Key Concepts:** Dynamic programming, substrings.
    - **Problem-Solving Technique:** Substring checking.