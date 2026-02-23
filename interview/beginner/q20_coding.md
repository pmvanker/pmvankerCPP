# Question 20: Missing Number

**Missing Number**
    - **Problem Statement:** Find missing number in 0 to n sequence.
    - **Solution Approach:** Use XOR or sum formula.
    - **C++ Code:**
      ```cpp
      #include <vector>
      int missingNumber(std::vector<int>& nums) {
          int n = nums.size();
          int xor_all = 0;
          for (int i = 0; i <= n; ++i) xor_all ^= i;
          for (int num : nums) xor_all ^= num;
          return xor_all;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** XOR, missing elements.
    - **Problem-Solving Technique:** XOR properties.