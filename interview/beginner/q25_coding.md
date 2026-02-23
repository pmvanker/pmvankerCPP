# Question 25: Number of 1 Bits

**Number of 1 Bits**
    - **Problem Statement:** Count set bits in a number.
    - **Solution Approach:** Use bit operations.
    - **C++ Code:**
      ```cpp
      int hammingWeight(uint32_t n) {
          int count = 0;
          while (n) {
              n &= n - 1;
              count++;
          }
          return count;
      }
      ```
    - **Time/Space Complexity:** O(1) time, O(1) space.
    - **Key Concepts:** Bit manipulation.
    - **Problem-Solving Technique:** Brian Kernighan's algorithm.