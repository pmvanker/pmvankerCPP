# Question 7: Permutations

**Permutations**
    - **Problem Statement:** Generate all permutations of array.
    - **Solution Approach:** Backtracking.
    - **C++ Code:**
      ```cpp
      #include <vector>
      std::vector<std::vector<int>> permute(std::vector<int>& nums) {
          std::vector<std::vector<int>> result;
          backtrack(nums, 0, result);
          return result;
      }
      void backtrack(std::vector<int>& nums, int start, std::vector<std::vector<int>>& result) {
          if (start == nums.size()) {
              result.push_back(nums);
              return;
          }
          for (size_t i = start; i < nums.size(); ++i) {
              std::swap(nums[start], nums[i]);
              backtrack(nums, start + 1, result);
              std::swap(nums[start], nums[i]);
          }
      }
      ```
    - **Time/Space Complexity:** O(n!) time, O(n) space.
    - **Key Concepts:** Backtracking, permutations.
    - **Problem-Solving Technique:** Recursive swapping.