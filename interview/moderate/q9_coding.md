# Question 9: Combination Sum

**Combination Sum**
    - **Problem Statement:** Find combinations that sum to target.
    - **Solution Approach:** Backtracking with sorting.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <algorithm>
      std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
          std::sort(candidates.begin(), candidates.end());
          std::vector<std::vector<int>> result;
          std::vector<int> current;
          backtrack(candidates, target, 0, current, result);
          return result;
      }
      void backtrack(const std::vector<int>& candidates, int target, int start, std::vector<int>& current, std::vector<std::vector<int>>& result) {
          if (target == 0) {
              result.push_back(current);
              return;
          }
          for (size_t i = start; i < candidates.size() && candidates[i] <= target; ++i) {
              current.push_back(candidates[i]);
              backtrack(candidates, target - candidates[i], i, current, result);
              current.pop_back();
          }
      }
      ```
    - **Time/Space Complexity:** O(2^n) time, O(n) space.
    - **Key Concepts:** Backtracking, combinations.
    - **Problem-Solving Technique:** Recursive combination.