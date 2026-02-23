# Question 12: Move Zeroes

**Move Zeroes**
    - **Problem Statement:** Move all zeroes to the end of the array in-place.
    - **Solution Approach:** Use two pointers to swap non-zero elements.
    - **C++ Code:**
      ```cpp
      #include <vector>
      void moveZeroes(std::vector<int>& nums) {
          int non_zero = 0;
          for (int i = 0; i < nums.size(); ++i) {
              if (nums[i] != 0) {
                  std::swap(nums[non_zero], nums[i]);
                  non_zero++;
              }
          }
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** Two pointers, in-place modification.
    - **Problem-Solving Technique:** Partitioning array.