# Question 16: Palindrome Partitioning II

**Palindrome Partitioning II**
    - **Problem Statement:** Minimum cuts for palindrome partitioning.
    - **Solution Approach:** DP with palindrome check.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <string>
      #include <climits>
      int minCut(std::string s) {
          int n = s.size();
          std::vector<int> cuts(n + 1, 0);
          for (int i = 0; i <= n; ++i) cuts[i] = i - 1;
          for (int i = 1; i <= n; ++i) {
              for (int j = 0; j < i; ++j) {
                  if (isPalindrome(s, j, i - 1)) {
                      cuts[i] = std::min(cuts[i], cuts[j] + 1);
                  }
              }
          }
          return cuts[n];
      }
      bool isPalindrome(const std::string& s, int start, int end) {
          while (start < end) {
              if (s[start] != s[end]) return false;
              start++; end--;
          }
          return true;
      }
      ```
    - **Time/Space Complexity:** O(n^2) time, O(n) space.
    - **Key Concepts:** Dynamic programming, palindromes.
    - **Problem-Solving Technique:** Cut minimization.