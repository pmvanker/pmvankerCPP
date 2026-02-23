# Question 48: House Robber II

**House Robber II**
    - **Problem Statement:** Circular houses.
    - **Solution Approach:** Rob first or last, exclude one.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <algorithm>
      int rob(std::vector<int>& nums) {
          if (nums.size() == 1) return nums[0];
          return std::max(robRange(nums, 0, nums.size() - 2), robRange(nums, 1, nums.size() - 1));
      }
      int robRange(const std::vector<int>& nums, int start, int end) {
          int prev = 0, curr = 0;
          for (int i = start; i <= end; ++i) {
              int temp = curr;
              curr = std::max(prev + nums[i], curr);
              prev = temp;
          }
          return curr;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** DP, circular.
    - **Problem-Solving Technique:** Range robbing.