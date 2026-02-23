# Question 2: Container With Most Water

**Container With Most Water**
    - **Problem Statement:** Find two lines that form container with most water.
    - **Solution Approach:** Two pointers from ends.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <algorithm>
      int maxArea(std::vector<int>& height) {
          int left = 0, right = height.size() - 1, max_area = 0;
          while (left < right) {
              int area = std::min(height[left], height[right]) * (right - left);
              max_area = std::max(max_area, area);
              if (height[left] < height[right]) left++;
              else right--;
          }
          return max_area;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** Two pointers, area calculation.
    - **Problem-Solving Technique:** Greedy approach.