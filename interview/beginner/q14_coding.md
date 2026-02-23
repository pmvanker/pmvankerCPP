# Question 14: Roman to Integer

**Roman to Integer**
    - **Problem Statement:** Convert Roman numeral to integer.
    - **Solution Approach:** Map Roman to values, handle subtractive notation.
    - **C++ Code:**
      ```cpp
      #include <string>
      #include <unordered_map>
      int romanToInt(std::string s) {
          std::unordered_map<char, int> roman = {{'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000}};
          int total = 0;
          for (size_t i = 0; i < s.size(); ++i) {
              if (i + 1 < s.size() && roman[s[i]] < roman[s[i+1]]) {
                  total -= roman[s[i]];
              } else {
                  total += roman[s[i]];
              }
          }
          return total;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** String parsing, Roman numerals.
    - **Problem-Solving Technique:** Conditional addition/subtraction.