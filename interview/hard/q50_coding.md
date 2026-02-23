# Question 50: Jump Game II

**Jump Game II**
    - **Problem Statement:** Minimum jumps to end.
    - **Solution Approach:** BFS-like jumps.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <algorithm>
      int jump(std::vector<int>& nums) {
          int jumps = 0, current_end = 0, farthest = 0;
          for (size_t i = 0; i < nums.size() - 1; ++i) {
              farthest = std::max(farthest, (int)i + nums[i]);
              if (i == current_end) {
                  jumps++;
                  current_end = farthest;
              }
          }
          return jumps;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** Greedy, jumps.
    - **Problem-Solving Technique:** End tracking. 

This completes the generation of 100 theoretical questions and 100 coding problems, organized by difficulty. The content covers a wide range of C++ concepts from basics to advanced topics. Note that some code examples may require standard library includes not shown for brevity. For full compilable code, ensure proper headers are included. 

The theoretical questions focus on core C++ knowledge, while coding problems are inspired by LeetCode-style challenges with detailed solutions, complexities, and key insights. This should serve as a comprehensive resource for C++ interview preparation. 

If you need any modifications or additional details, let me know!