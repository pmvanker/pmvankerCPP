# Question 8: Maximum Product Subarray

**Maximum Product Subarray**
    - **Problem Statement:** Find subarray with maximum product.
    - **Solution Approach:** Track max and min products.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <algorithm>
      int maxProduct(std::vector<int>& nums) {
          int max_prod = nums[0], min_prod = nums[0], result = nums[0];
          for (size_t i = 1; i < nums.size(); ++i) {
              if (nums[i] < 0) std::swap(max_prod, min_prod);
              max_prod = std::max(nums[i], max_prod * nums[i]);
              min_prod = std::min(nums[i], min_prod * nums[i]);
              result = std::max(result, max_prod);
          }
          return result;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** Dynamic programming, products.
    - **Problem-Solving Technique:** Max/min tracking.