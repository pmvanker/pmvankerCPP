# Question 25: Surrounded Regions

**Surrounded Regions**
    - **Problem Statement:** Capture surrounded regions in board.
    - **Solution Approach:** DFS/BFS from borders.
    - **C++ Code:**
      ```cpp
      #include <vector>
      void solve(std::vector<std::vector<char>>& board) {
          if (board.empty()) return;
          int rows = board.size(), cols = board[0].size();
          for (int i = 0; i < rows; ++i) {
              if (board[i][0] == 'O') dfs(board, i, 0);
              if (board[i][cols-1] == 'O') dfs(board, i, cols-1);
          }
          for (int j = 0; j < cols; ++j) {
              if (board[0][j] == 'O') dfs(board, 0, j);
              if (board[rows-1][j] == 'O') dfs(board, rows-1, j);
          }
          for (int i = 0; i < rows; ++i) {
              for (int j = 0; j < cols; ++j) {
                  if (board[i][j] == 'O') board[i][j] = 'X';
                  else if (board[i][j] == 'T') board[i][j] = 'O';
              }
          }
      }
      void dfs(std::vector<std::vector<char>>& board, int i, int j) {
          if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != 'O') return;
          board[i][j] = 'T';
          dfs(board, i+1, j);
          dfs(board, i-1, j);
          dfs(board, i, j+1);
          dfs(board, i, j-1);
      }
      ```
    - **Time/Space Complexity:** O(rows * cols) time, O(rows * cols) space.
    - **Key Concepts:** DFS, board.
    - **Problem-Solving Technique:** Boundary marking.