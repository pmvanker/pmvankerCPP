# Question 31: Search Insert Position

**Search Insert Position**
    - **Problem Statement:** Find insert position for target in sorted array.
    - **Solution Approach:** Binary search.
    - **C++ Code:**
      ```cpp
      #include <vector>
      int searchInsert(std::vector<int>& nums, int target) {
          int left = 0, right = nums.size() - 1;
          while (left <= right) {
              int mid = left + (right - left) / 2;
              if (nums[mid] == target) return mid;
              else if (nums[mid] < target) left = mid + 1;
              else right = mid - 1;
          }
          return left;
      }
      ```
    - **Time/Space Complexity:** O(log n) time, O(1) space.
    - **Key Concepts:** Binary search, sorted arrays.
    - **Problem-Solving Technique:** Divide and conquer.