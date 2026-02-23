# Question 20: Largest Rectangle in Histogram

**Largest Rectangle in Histogram**
    - **Problem Statement:** Find largest rectangle in histogram.
    - **Solution Approach:** Stack to find left and right smaller.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <stack>
      #include <algorithm>
      int largestRectangleArea(std::vector<int>& heights) {
          std::stack<int> s;
          int max_area = 0, n = heights.size();
          for (int i = 0; i <= n; ++i) {
              while (!s.empty() && (i == n || heights[s.top()] >= heights[i])) {
                  int h = heights[s.top()]; s.pop();
                  int w = s.empty() ? i : i - s.top() - 1;
                  max_area = std::max(max_area, h * w);
              }
              s.push(i);
          }
          return max_area;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(n) space.
    - **Key Concepts:** Stack, histogram.
    - **Problem-Solving Technique:** Monotonic stack.