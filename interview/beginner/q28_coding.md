# Question 28: Merge Sorted Array

**Merge Sorted Array**
    - **Problem Statement:** Merge two sorted arrays in-place.
    - **Solution Approach:** Start from end to avoid overwriting.
    - **C++ Code:**
      ```cpp
      #include <vector>
      void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
          int i = m - 1, j = n - 1, k = m + n - 1;
          while (i >= 0 && j >= 0) {
              if (nums1[i] > nums2[j]) {
                  nums1[k--] = nums1[i--];
              } else {
                  nums1[k--] = nums2[j--];
              }
          }
          while (j >= 0) {
              nums1[k--] = nums2[j--];
          }
      }
      ```
    - **Time/Space Complexity:** O(m + n) time, O(1) space.
    - **Key Concepts:** Two pointers, merging.
    - **Problem-Solving Technique:** Backward merging.