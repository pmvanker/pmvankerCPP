# Question 27: Pascal's Triangle

**Pascal's Triangle**
    - **Problem Statement:** Generate Pascal's triangle up to n rows.
    - **Solution Approach:** Build row by row using previous row.
    - **C++ Code:**
      ```cpp
      #include <vector>
      std::vector<std::vector<int>> generate(int numRows) {
          std::vector<std::vector<int>> triangle;
          for (int i = 0; i < numRows; ++i) {
              std::vector<int> row(i + 1, 1);
              for (int j = 1; j < i; ++j) {
                  row[j] = triangle[i-1][j-1] + triangle[i-1][j];
              }
              triangle.push_back(row);
          }
          return triangle;
      }
      ```
    - **Time/Space Complexity:** O(n^2) time, O(n^2) space.
    - **Key Concepts:** Dynamic programming, combinatorics.
    - **Problem-Solving Technique:** Row-wise construction.