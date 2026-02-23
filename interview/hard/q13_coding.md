# Question 13: N-Queens II

**N-Queens II**
    - **Problem Statement:** Count solutions to N-Queens.
    - **Solution Approach:** Backtracking with bitmasks.
    - **C++ Code:**
      ```cpp
      int totalNQueens(int n) {
          int count = 0;
          backtrack(0, 0, 0, 0, n, count);
          return count;
      }
      void backtrack(int row, int cols, int diag1, int diag2, int n, int& count) {
          if (row == n) {
              count++;
              return;
          }
          int available = ((1 << n) - 1) & ~(cols | diag1 | diag2);
          while (available) {
              int pos = available & -available;
              available ^= pos;
              backtrack(row + 1, cols | pos, (diag1 | pos) << 1, (diag2 | pos) >> 1, n, count);
          }
      }
      ```
    - **Time/Space Complexity:** O(n!) time, O(n) space.
    - **Key Concepts:** Backtracking, bit manipulation.
    - **Problem-Solving Technique:** Bitmasking.