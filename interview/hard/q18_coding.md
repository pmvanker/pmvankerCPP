# Question 18: Interleaving String

**Interleaving String**
    - **Problem Statement:** Check if third string is interleaving of first two.
    - **Solution Approach:** Dynamic programming.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <string>
      bool isInterleave(std::string s1, std::string s2, std::string s3) {
          if (s1.size() + s2.size() != s3.size()) return false;
          std::vector<std::vector<bool>> dp(s1.size() + 1, std::vector<bool>(s2.size() + 1, false));
          dp[0][0] = true;
          for (size_t i = 0; i <= s1.size(); ++i) {
              for (size_t j = 0; j <= s2.size(); ++j) {
                  if (i > 0 && s1[i-1] == s3[i+j-1]) dp[i][j] = dp[i][j] || dp[i-1][j];
                  if (j > 0 && s2[j-1] == s3[i+j-1]) dp[i][j] = dp[i][j] || dp[i][j-1];
              }
          }
          return dp[s1.size()][s2.size()];
      }
      ```
    - **Time/Space Complexity:** O(m*n) time, O(m*n) space.
    - **Key Concepts:** Dynamic programming, interleaving.
    - **Problem-Solving Technique:** State table.