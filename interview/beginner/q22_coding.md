# Question 22: Majority Element

**Majority Element**
    - **Problem Statement:** Find element appearing more than n/2 times.
    - **Solution Approach:** Use Boyer-Moore Voting Algorithm.
    - **C++ Code:**
      ```cpp
      #include <vector>
      int majorityElement(std::vector<int>& nums) {
          int candidate = nums[0], count = 1;
          for (size_t i = 1; i < nums.size(); ++i) {
              if (nums[i] == candidate) count++;
              else count--;
              if (count == 0) {
                  candidate = nums[i];
                  count = 1;
              }
          }
          return candidate;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** Voting algorithm, majority.
    - **Problem-Solving Technique:** Candidate selection.