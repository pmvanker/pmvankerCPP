# Question 45: Minimum Path Sum

**Minimum Path Sum**
    - **Problem Statement:** Minimum path sum in grid.
    - **Solution Approach:** DP from top-left.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <algorithm>
      int minPathSum(std::vector<std::vector<int>>& grid) {
          int m = grid.size(), n = grid[0].size();
          for (int i = 0; i < m; ++i) {
              for (int j = 0; j < n; ++j) {
                  if (i == 0 && j == 0) continue;
                  int up = (i > 0) ? grid[i-1][j] : INT_MAX;
                  int left = (j > 0) ? grid[i][j-1] : INT_MAX;
                  grid[i][j] += std::min(up, left);
              }
          }
          return grid[m-1][n-1];
      }
      ```
    - **Time/Space Complexity:** O(m*n) time, O(1) space (in-place).
    - **Key Concepts:** DP, path sum.
    - **Problem-Solving Technique:** Minimum accumulation.