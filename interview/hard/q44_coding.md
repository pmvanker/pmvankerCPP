# Question 44: Unique Paths II

**Unique Paths II**
    - **Problem Statement:** Paths with obstacles.
    - **Solution Approach:** DP with obstacle check.
    - **C++ Code:**
      ```cpp
      #include <vector>
      int uniquePathsWithObstacles(std::vector<std::vector<int>>& obstacleGrid) {
          int m = obstacleGrid.size(), n = obstacleGrid[0].size();
          std::vector<std::vector<int>> dp(m, std::vector<int>(n, 0));
          if (obstacleGrid[0][0] == 1) return 0;
          dp[0][0] = 1;
          for (int i = 0; i < m; ++i) {
              for (int j = 0; j < n; ++j) {
                  if (obstacleGrid[i][j] == 1) continue;
                  if (i > 0) dp[i][j] += dp[i-1][j];
                  if (j > 0) dp[i][j] += dp[i][j-1];
              }
          }
          return dp[m-1][n-1];
      }
      ```
    - **Time/Space Complexity:** O(m*n) time, O(m*n) space.
    - **Key Concepts:** DP, obstacles.
    - **Problem-Solving Technique:** Conditional accumulation.