# Question 47: House Robber

**House Robber**
    - **Problem Statement:** Maximum money without adjacent houses.
    - **Solution Approach:** DP with max of include/exclude.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <algorithm>
      int rob(std::vector<int>& nums) {
          int prev = 0, curr = 0;
          for (int num : nums) {
              int temp = curr;
              curr = std::max(prev + num, curr);
              prev = temp;
          }
          return curr;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** DP, robbery.
    - **Problem-Solving Technique:** State tracking.