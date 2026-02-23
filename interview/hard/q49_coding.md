# Question 49: Jump Game

**Jump Game**
    - **Problem Statement:** Can reach last index.
    - **Solution Approach:** Track max reachable.
    - **C++ Code:**
      ```cpp
      #include <vector>
      bool canJump(std::vector<int>& nums) {
          int max_reach = 0;
          for (size_t i = 0; i < nums.size() && i <= max_reach; ++i) {
              max_reach = std::max(max_reach, (int)i + nums[i]);
              if (max_reach >= nums.size() - 1) return true;
          }
          return false;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** Greedy, reachability.
    - **Problem-Solving Technique:** Max reach tracking.