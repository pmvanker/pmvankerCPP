# Question 17: Scramble String

**Scramble String**
    - **Problem Statement:** Check if one string is scramble of another.
    - **Solution Approach:** Recursive with memoization.
    - **C++ Code:**
      ```cpp
      #include <string>
      #include <unordered_map>
      bool isScramble(std::string s1, std::string s2) {
          if (s1.size() != s2.size()) return false;
          if (s1 == s2) return true;
          std::string key = s1 + "," + s2;
          if (memo.count(key)) return memo[key];
          int n = s1.size();
          for (int i = 1; i < n; ++i) {
              if ((isScramble(s1.substr(0, i), s2.substr(0, i)) && isScramble(s1.substr(i), s2.substr(i))) ||
                  (isScramble(s1.substr(0, i), s2.substr(n - i)) && isScramble(s1.substr(i), s2.substr(0, n - i)))) {
                  return memo[key] = true;
              }
          }
          return memo[key] = false;
      }
      std::unordered_map<std::string, bool> memo;
      ```
    - **Time/Space Complexity:** O(n^4) time, O(n^3) space.
    - **Key Concepts:** Recursion, memoization, strings.
    - **Problem-Solving Technique:** Substring comparison.