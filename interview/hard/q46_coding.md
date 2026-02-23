# Question 46: Climbing Stairs (Extended)

**Climbing Stairs (Extended)**
    - **Problem Statement:** Ways to climb with variable steps.
    - **Solution Approach:** DP with step options.
    - **C++ Code:**
      ```cpp
      #include <vector>
      int climbStairs(int n, std::vector<int> steps) {
          std::vector<int> dp(n + 1, 0);
          dp[0] = 1;
          for (int i = 1; i <= n; ++i) {
              for (int step : steps) {
                  if (i >= step) dp[i] += dp[i - step];
              }
          }
          return dp[n];
      }
      ```
    - **Time/Space Complexity:** O(n * k) time, O(n) space.
    - **Key Concepts:** DP, combinations.
    - **Problem-Solving Technique:** Step accumulation.