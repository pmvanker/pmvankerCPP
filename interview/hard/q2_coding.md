# Question 2: Regular Expression Matching

**Regular Expression Matching**
    - **Problem Statement:** Implement regex matching with . and *.
    - **Solution Approach:** Dynamic programming.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <string>
      bool isMatch(std::string s, std::string p) {
          int m = s.size(), n = p.size();
          std::vector<std::vector<bool>> dp(m + 1, std::vector<bool>(n + 1, false));
          dp[0][0] = true;
          for (int j = 1; j <= n; ++j) {
              if (p[j-1] == '*') dp[0][j] = dp[0][j-2];
          }
          for (int i = 1; i <= m; ++i) {
              for (int j = 1; j <= n; ++j) {
                  if (p[j-1] == '.' || p[j-1] == s[i-1]) {
                      dp[i][j] = dp[i-1][j-1];
                  } else if (p[j-1] == '*') {
                      dp[i][j] = dp[i][j-2];
                      if (p[j-2] == '.' || p[j-2] == s[i-1]) {
                          dp[i][j] = dp[i][j] || dp[i-1][j];
                      }
                  }
              }
          }
          return dp[m][n];
      }
      ```
    - **Time/Space Complexity:** O(m*n) time, O(m*n) space.
    - **Key Concepts:** Dynamic programming, regex.
    - **Problem-Solving Technique:** State transition.