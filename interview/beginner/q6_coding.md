# Question 6: Maximum Subarray

**Maximum Subarray**
   - **Problem Statement:** Find the contiguous subarray with the largest sum.
   - **Solution Approach:** Use Kadane's algorithm.
   - **C++ Code:**
     ```cpp
     #include <vector>
     #include <algorithm>
     int maxSubArray(std::vector<int>& nums) {
         int max_current = nums[0], max_global = nums[0];
         for (size_t i = 1; i < nums.size(); ++i) {
             max_current = std::max(nums[i], max_current + nums[i]);
             max_global = std::max(max_global, max_current);
         }
         return max_global;
     }
     ```
   - **Time/Space Complexity:** O(n) time, O(1) space.
   - **Key Concepts:** Dynamic programming, subarrays.
   - **Problem-Solving Technique:** Kadane's algorithm.