# Question 10: Intersection of Two Arrays II

**Intersection of Two Arrays II**
    - **Problem Statement:** Find intersection of two arrays with duplicates.
    - **Solution Approach:** Use hash maps or sort and merge.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <unordered_map>
      std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
          std::unordered_map<int, int> count;
          for (int num : nums1) count[num]++;
          std::vector<int> result;
          for (int num : nums2) {
              if (count[num] > 0) {
                  result.push_back(num);
                  count[num]--;
              }
          }
          return result;
      }
      ```
    - **Time/Space Complexity:** O(n + m) time, O(min(n,m)) space.
    - **Key Concepts:** Hash maps, frequency counting.
    - **Problem-Solving Technique:** Counting frequencies.