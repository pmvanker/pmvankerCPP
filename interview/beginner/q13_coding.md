# Question 13: Contains Duplicate

**Contains Duplicate**
    - **Problem Statement:** Check if array contains duplicates.
    - **Solution Approach:** Use a set to track seen elements.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <unordered_set>
      bool containsDuplicate(std::vector<int>& nums) {
          std::unordered_set<int> seen;
          for (int num : nums) {
              if (seen.count(num)) return true;
              seen.insert(num);
          }
          return false;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(n) space.
    - **Key Concepts:** Sets, uniqueness.
    - **Problem-Solving Technique:** Hash set for lookups.