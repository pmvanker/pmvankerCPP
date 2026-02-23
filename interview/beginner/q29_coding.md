# Question 29: Remove Duplicates from Sorted Array

**Remove Duplicates from Sorted Array**
    - **Problem Statement:** Remove duplicates in-place from sorted array.
    - **Solution Approach:** Use two pointers to track unique elements.
    - **C++ Code:**
      ```cpp
      #include <vector>
      int removeDuplicates(std::vector<int>& nums) {
          if (nums.empty()) return 0;
          int i = 0;
          for (int j = 1; j < nums.size(); ++j) {
              if (nums[j] != nums[i]) {
                  nums[++i] = nums[j];
              }
          }
          return i + 1;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** Two pointers, sorted arrays.
    - **Problem-Solving Technique:** In-place deduplication.