# Question 4: Generate Parentheses

**Generate Parentheses**
    - **Problem Statement:** Generate all valid parentheses combinations.
    - **Solution Approach:** Backtracking with counters.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <string>
      std::vector<std::string> generateParenthesis(int n) {
          std::vector<std::string> result;
          backtrack("", 0, 0, n, result);
          return result;
      }
      void backtrack(std::string current, int open, int close, int max, std::vector<std::string>& result) {
          if (current.size() == max * 2) {
              result.push_back(current);
              return;
          }
          if (open < max) backtrack(current + "(", open + 1, close, max, result);
          if (close < open) backtrack(current + ")", open, close + 1, max, result);
      }
      ```
    - **Time/Space Complexity:** O(4^n / sqrt(n)) time, O(n) space.
    - **Key Concepts:** Backtracking, recursion.
    - **Problem-Solving Technique:** Constraint satisfaction.