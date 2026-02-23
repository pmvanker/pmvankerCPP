# Question 3: Letter Combinations of a Phone Number

**Letter Combinations of a Phone Number**
    - **Problem Statement:** Generate letter combinations for phone digits.
    - **Solution Approach:** Backtracking.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <string>
      std::vector<std::string> letterCombinations(std::string digits) {
          if (digits.empty()) return {};
          std::vector<std::string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
          std::vector<std::string> result;
          std::string current;
          backtrack(digits, 0, mapping, current, result);
          return result;
      }
      void backtrack(const std::string& digits, int index, const std::vector<std::string>& mapping, std::string& current, std::vector<std::string>& result) {
          if (index == digits.size()) {
              result.push_back(current);
              return;
          }
          std::string letters = mapping[digits[index] - '0'];
          for (char c : letters) {
              current.push_back(c);
              backtrack(digits, index + 1, mapping, current, result);
              current.pop_back();
          }
      }
      ```
    - **Time/Space Complexity:** O(4^n) time, O(n) space.
    - **Key Concepts:** Backtracking, recursion.
    - **Problem-Solving Technique:** Combinatorial generation.