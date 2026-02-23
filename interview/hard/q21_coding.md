# Question 21: Maximal Rectangle

**Maximal Rectangle**
    - **Problem Statement:** Find largest rectangle of 1's in binary matrix.
    - **Solution Approach:** Treat each row as histogram base.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <stack>
      #include <algorithm>
      int maximalRectangle(std::vector<std::vector<char>>& matrix) {
          if (matrix.empty()) return 0;
          int rows = matrix.size(), cols = matrix[0].size();
          std::vector<int> heights(cols, 0);
          int max_area = 0;
          for (int i = 0; i < rows; ++i) {
              for (int j = 0; j < cols; ++j) {
                  heights[j] = matrix[i][j] == '1' ? heights[j] + 1 : 0;
              }
              max_area = std::max(max_area, largestRectangleArea(heights));
          }
          return max_area;
      }
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
    - **Time/Space Complexity:** O(rows * cols) time, O(cols) space.
    - **Key Concepts:** Histogram, matrix.
    - **Problem-Solving Technique:** Row-wise processing.