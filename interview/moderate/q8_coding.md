# Question 8: Subsets

**Subsets**
    - **Problem Statement:** Generate all subsets of array.
    - **Solution Approach:** Backtracking or bit manipulation.
    - **C++ Code:**
      ```cpp
      #include <vector>
      std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
          std::vector<std::vector<int>> result;
          std::vector<int> current;
          backtrack(nums, 0, current, result);
          return result;
      }
      void backtrack(const std::vector<int>& nums, int start, std::vector<int>& current, std::vector<std::vector<int>>& result) {
          result.push_back(current);
          for (size_t i = start; i < nums.size(); ++i) {
              current.push_back(nums[i]);
              backtrack(nums, i + 1, current, result);
              current.pop_back();
          }
      }
      ```
    - **Time/Space Complexity:** O(2^n) time, O(n) space.
    - **Key Concepts:** Backtracking, subsets.
    - **Problem-Solving Technique:** Tree traversal.