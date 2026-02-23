# Question 29: Palindrome Partitioning

**Palindrome Partitioning**
    - **Problem Statement:** Partition string into palindromic substrings.
    - **Solution Approach:** Backtracking with palindrome check.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <string>
      std::vector<std::vector<std::string>> partition(std::string s) {
          std::vector<std::vector<std::string>> result;
          std::vector<std::string> current;
          backtrack(s, 0, current, result);
          return result;
      }
      void backtrack(const std::string& s, int start, std::vector<std::string>& current, std::vector<std::vector<std::string>>& result) {
          if (start == s.size()) {
              result.push_back(current);
              return;
          }
          for (size_t end = start; end < s.size(); ++end) {
              if (isPalindrome(s, start, end)) {
                  current.push_back(s.substr(start, end - start + 1));
                  backtrack(s, end + 1, current, result);
                  current.pop_back();
              }
          }
      }
      bool isPalindrome(const std::string& s, int start, int end) {
          while (start < end) {
              if (s[start] != s[end]) return false;
              start++; end--;
          }
          return true;
      }
      ```
    - **Time/Space Complexity:** O(2^n) time, O(n) space.
    - **Key Concepts:** Backtracking, palindromes.
    - **Problem-Solving Technique:** Substring partitioning.