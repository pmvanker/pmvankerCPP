# Question 5: First Missing Positive

**First Missing Positive**
    - **Problem Statement:** Find smallest missing positive integer.
    - **Solution Approach:** In-place hashing.
    - **C++ Code:**
      ```cpp
      #include <vector>
      int firstMissingPositive(std::vector<int>& nums) {
          int n = nums.size();
          for (int i = 0; i < n; ++i) {
              while (nums[i] > 0 && nums[i] <= n && nums[nums[i]-1] != nums[i]) {
                  std::swap(nums[i], nums[nums[i]-1]);
              }
          }
          for (int i = 0; i < n; ++i) {
              if (nums[i] != i + 1) return i + 1;
          }
          return n + 1;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** In-place modification, indexing.
    - **Problem-Solving Technique:** Cyclic sort.