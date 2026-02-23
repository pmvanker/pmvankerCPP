# Question 43: Unique Paths

**Unique Paths**
    - **Problem Statement:** Number of unique paths in grid.
    - **Solution Approach:** Dynamic programming.
    - **C++ Code:**
      ```cpp
      #include <vector>
      int uniquePaths(int m, int n) {
          std::vector<std::vector<int>> dp(m, std::vector<int>(n, 1));
          for (int i = 1; i < m; ++i) {
              for (int j = 1; j < n; ++j) {
                  dp[i][j] = dp[i-1][j] + dp[i][j-1];
              }
          }
          return dp[m-1][n-1];
      }
      ```
    - **Time/Space Complexity:** O(m*n) time, O(m*n) space.
    - **Key Concepts:** DP, grid paths.
    - **Problem-Solving Technique:** State accumulation.