# Question 5: Valid Parentheses

**Valid Parentheses**
   - **Problem Statement:** Check if parentheses are valid.
   - **Solution Approach:** Use a stack to track opening brackets.
   - **C++ Code:**
     ```cpp
     #include <stack>
     #include <string>
     bool isValid(std::string s) {
         std::stack<char> st;
         for (char c : s) {
             if (c == '(' || c == '{' || c == '[') {
                 st.push(c);
             } else {
                 if (st.empty()) return false;
                 char top = st.top(); st.pop();
                 if ((c == ')' && top != '(') ||
                     (c == '}' && top != '{') ||
                     (c == ']' && top != '[')) return false;
             }
         }
         return st.empty();
     }
     ```
   - **Time/Space Complexity:** O(n) time, O(n) space.
   - **Key Concepts:** Stacks, parentheses matching.
   - **Problem-Solving Technique:** Stack-based validation.