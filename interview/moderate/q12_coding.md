# Question 12: Sudoku Solver

**Sudoku Solver**
    - **Problem Statement:** Solve Sudoku puzzle.
    - **Solution Approach:** Backtracking with validation.
    - **C++ Code:**
      ```cpp
      #include <vector>
      bool solveSudoku(std::vector<std::vector<char>>& board) {
          return backtrack(board, 0, 0);
      }
      bool backtrack(std::vector<std::vector<char>>& board, int row, int col) {
          if (row == 9) return true;
          if (col == 9) return backtrack(board, row + 1, 0);
          if (board[row][col] != '.') return backtrack(board, row, col + 1);
          for (char num = '1'; num <= '9'; ++num) {
              if (isValid(board, row, col, num)) {
                  board[row][col] = num;
                  if (backtrack(board, row, col + 1)) return true;
                  board[row][col] = '.';
              }
          }
          return false;
      }
      bool isValid(const std::vector<std::vector<char>>& board, int row, int col, char num) {
          for (int i = 0; i < 9; ++i) {
              if (board[row][i] == num || board[i][col] == num) return false;
          }
          int box_row = (row / 3) * 3, box_col = (col / 3) * 3;
          for (int i = 0; i < 3; ++i) {
              for (int j = 0; j < 3; ++j) {
                  if (board[box_row + i][box_col + j] == num) return false;
              }
          }
          return true;
      }
      ```
    - **Time/Space Complexity:** O(9^k) time, O(1) space.
    - **Key Concepts:** Backtracking, validation.
    - **Problem-Solving Technique:** Constraint solving.