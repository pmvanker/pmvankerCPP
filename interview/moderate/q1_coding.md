# Question 1: 3Sum

**3Sum**
    - **Problem Statement:** Find all triplets that sum to zero.
    - **Solution Approach:** Sort and use two pointers.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <algorithm>
      std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
          std::sort(nums.begin(), nums.end());
          std::vector<std::vector<int>> result;
          for (size_t i = 0; i < nums.size(); ++i) {
              if (i > 0 && nums[i] == nums[i-1]) continue;
              int left = i + 1, right = nums.size() - 1;
              while (left < right) {
                  int sum = nums[i] + nums[left] + nums[right];
                  if (sum == 0) {
                      result.push_back({nums[i], nums[left], nums[right]});
                      while (left < right && nums[left] == nums[left+1]) left++;
                      while (left < right && nums[right] == nums[right-1]) right--;
                      left++; right--;
                  } else if (sum < 0) left++;
                  else right--;
              }
          }
          return result;
      }
      ```
    - **Time/Space Complexity:** O(n^2) time, O(1) space (excluding output).
    - **Key Concepts:** Two pointers, sorting.
    - **Problem-Solving Technique:** Combination finding.