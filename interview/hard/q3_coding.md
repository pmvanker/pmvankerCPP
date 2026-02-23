# Question 3: Merge Intervals

**Merge Intervals**
    - **Problem Statement:** Merge overlapping intervals.
    - **Solution Approach:** Sort and merge.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <algorithm>
      std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
          if (intervals.empty()) return {};
          std::sort(intervals.begin(), intervals.end());
          std::vector<std::vector<int>> result;
          result.push_back(intervals[0]);
          for (size_t i = 1; i < intervals.size(); ++i) {
              if (result.back()[1] >= intervals[i][0]) {
                  result.back()[1] = std::max(result.back()[1], intervals[i][1]);
              } else {
                  result.push_back(intervals[i]);
              }
          }
          return result;
      }
      ```
    - **Time/Space Complexity:** O(n log n) time, O(n) space.
    - **Key Concepts:** Sorting, merging.
    - **Problem-Solving Technique:** Interval processing.