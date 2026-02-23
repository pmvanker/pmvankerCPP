# Question 6: Next Permutation

**Next Permutation**
    - **Problem Statement:** Find next lexicographical permutation.
    - **Solution Approach:** Find pivot and swap with next greater.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <algorithm>
      void nextPermutation(std::vector<int>& nums) {
          int i = nums.size() - 2;
          while (i >= 0 && nums[i] >= nums[i+1]) i--;
          if (i >= 0) {
              int j = nums.size() - 1;
              while (nums[j] <= nums[i]) j--;
              std::swap(nums[i], nums[j]);
          }
          std::reverse(nums.begin() + i + 1, nums.end());
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** Permutations, swapping.
    - **Problem-Solving Technique:** Pivot finding.