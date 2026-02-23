# Question 10: Word Search

**Word Search**
    - **Problem Statement:** Find word in 2D grid.
    - **Solution Approach:** DFS with backtracking.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <string>
      bool exist(std::vector<std::vector<char>>& board, std::string word) {
          for (size_t i = 0; i < board.size(); ++i) {
              for (size_t j = 0; j < board[0].size(); ++j) {
                  if (dfs(board, word, 0, i, j)) return true;
              }
          }
          return false;
      }
      bool dfs(std::vector<std::vector<char>>& board, const std::string& word, int index, int i, int j) {
          if (index == word.size()) return true;
          if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[index]) return false;
          char temp = board[i][j];
          board[i][j] = '#';
          bool found = dfs(board, word, index + 1, i+1, j) || dfs(board, word, index + 1, i-1, j) ||
                       dfs(board, word, index + 1, i, j+1) || dfs(board, word, index + 1, i, j-1);
          board[i][j] = temp;
          return found;
      }
      ```
    - **Time/Space Complexity:** O(m*n*4^L) time, O(L) space.
    - **Key Concepts:** DFS, backtracking, grids.
    - **Problem-Solving Technique:** Graph traversal.