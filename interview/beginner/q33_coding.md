# Question 33: Add Binary

**Add Binary**
    - **Problem Statement:** Add two binary strings.
    - **Solution Approach:** Simulate binary addition with carry.
    - **C++ Code:**
      ```cpp
      #include <string>
      #include <algorithm>
      std::string addBinary(std::string a, std::string b) {
          std::string result;
          int i = a.size() - 1, j = b.size() - 1, carry = 0;
          while (i >= 0 || j >= 0 || carry) {
              int sum = carry;
              if (i >= 0) sum += a[i--] - '0';
              if (j >= 0) sum += b[j--] - '0';
              result.push_back(sum % 2 + '0');
              carry = sum / 2;
          }
          std::reverse(result.begin(), result.end());
          return result;
      }
      ```
    - **Time/Space Complexity:** O(max(n,m)) time, O(max(n,m)) space.
    - **Key Concepts:** Binary arithmetic, strings.
    - **Problem-Solving Technique:** Digit-wise addition.