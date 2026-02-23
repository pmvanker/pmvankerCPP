# Question 22: Candy

**Candy**
    - **Problem Statement:** Distribute candies with rating constraints.
    - **Solution Approach:** Two passes for left and right neighbors.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <algorithm>
      int candy(std::vector<int>& ratings) {
          int n = ratings.size();
          std::vector<int> candies(n, 1);
          for (int i = 1; i < n; ++i) {
              if (ratings[i] > ratings[i-1]) {
                  candies[i] = candies[i-1] + 1;
              }
          }
          for (int i = n - 2; i >= 0; --i) {
              if (ratings[i] > ratings[i+1]) {
                  candies[i] = std::max(candies[i], candies[i+1] + 1);
              }
          }
          int total = 0;
          for (int c : candies) total += c;
          return total;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(n) space.
    - **Key Concepts:** Greedy, ratings.
    - **Problem-Solving Technique:** Two-pass adjustment.