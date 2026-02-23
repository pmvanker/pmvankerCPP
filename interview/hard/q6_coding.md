# Question 6: Longest Valid Parentheses

**Longest Valid Parentheses**
    - **Problem Statement:** Find length of longest valid parentheses.
    - **Solution Approach:** Stack or DP.
    - **C++ Code:**
      ```cpp
      #include <string>
      #include <stack>
      int longestValidParentheses(std::string s) {
          std::stack<int> st;
          st.push(-1);
          int max_len = 0;
          for (int i = 0; i < s.size(); ++i) {
              if (s[i] == '(') {
                  st.push(i);
              } else {
                  st.pop();
                  if (st.empty()) {
                      st.push(i);
                  } else {
                      max_len = std::max(max_len, i - st.top());
                  }
              }
          }
          return max_len;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(n) space.
    - **Key Concepts:** Stack, parentheses.
    - **Problem-Solving Technique:** Valid subsequence.