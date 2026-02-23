# Question 11: Plus One

**Plus One**
    - **Problem Statement:** Add one to a number represented as an array of digits.
    - **Solution Approach:** Iterate from end, handle carry.
    - **C++ Code:**
      ```cpp
      #include <vector>
      std::vector<int> plusOne(std::vector<int>& digits) {
          for (int i = digits.size() - 1; i >= 0; --i) {
              if (digits[i] < 9) {
                  digits[i]++;
                  return digits;
              }
              digits[i] = 0;
          }
          digits.insert(digits.begin(), 1);
          return digits;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space (amortized).
    - **Key Concepts:** Array manipulation, carry propagation.
    - **Problem-Solving Technique:** Digit-wise addition.