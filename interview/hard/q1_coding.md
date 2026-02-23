# Question 1: Median of Two Sorted Arrays

**Median of Two Sorted Arrays**
    - **Problem Statement:** Find median of two sorted arrays.
    - **Solution Approach:** Binary search for partition.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <algorithm>
      double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
          if (nums1.size() > nums2.size()) std::swap(nums1, nums2);
          int m = nums1.size(), n = nums2.size();
          int left = 0, right = m;
          while (left <= right) {
              int i = (left + right) / 2;
              int j = (m + n + 1) / 2 - i;
              int max_left = (i == 0 ? INT_MIN : nums1[i-1]);
              int min_right = (j == 0 ? INT_MAX : nums2[j-1]);
              int max_right = (i == m ? INT_MAX : nums1[i]);
              int min_left = (j == n ? INT_MIN : nums2[j]);
              if (max_left <= min_right && max_right >= min_left) {
                  if ((m + n) % 2 == 0) return (std::max(max_left, min_left) + std::min(max_right, min_right)) / 2.0;
                  else return std::max(max_left, min_left);
              } else if (max_left > min_right) right = i - 1;
              else left = i + 1;
          }
          return 0.0;
      }
      ```
    - **Time/Space Complexity:** O(log min(m,n)) time, O(1) space.
    - **Key Concepts:** Binary search, partitioning.
    - **Problem-Solving Technique:** Median finding.