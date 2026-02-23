# Question 24: Hamming Distance

**Hamming Distance**
    - **Problem Statement:** Count different bits between two numbers.
    - **Solution Approach:** XOR and count set bits.
    - **C++ Code:**
      ```cpp
      int hammingDistance(int x, int y) {
          int xor_val = x ^ y;
          int count = 0;
          while (xor_val) {
              count += xor_val & 1;
              xor_val >>= 1;
          }
          return count;
      }
      ```
    - **Time/Space Complexity:** O(1) time, O(1) space.
    - **Key Concepts:** Bit manipulation, XOR.
    - **Problem-Solving Technique:** Bit counting.