# Question 14: Distinct Subsequences

**Distinct Subsequences**
    - **Problem Statement:** Count distinct subsequences.
    - **Solution Approach:** Dynamic programming.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <string>
      int numDistinct(std::string s, std::string t) {
          int m = s.size(), n = t.size();
          std::vector<std::vector<long long>> dp(m + 1, std::vector<long long>(n + 1, 0));
          for (int i = 0; i <= m; ++i) dp[i][0] = 1;
          for (int i = 1; i <= m; ++i) {
              for (int j = 1; j <= n; ++j) {
                  dp[i][j] = dp[i-1][j];
                  if (s[i-1] == t[j-1]) {
                      dp[i][j] += dp[i-1][j-1];
                  }
              }
          }
          return dp[m][n];
      }
      ```
    - **Time/Space Complexity:** O(m*n) time, O(m*n) space.
    - **Key Concepts:** Dynamic programming, subsequences.
    - **Problem-Solving Technique:** Count accumulation.