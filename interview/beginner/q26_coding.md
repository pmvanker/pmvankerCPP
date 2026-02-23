# Question 26: Reverse Bits

**Reverse Bits**
    - **Problem Statement:** Reverse bits of a 32-bit number.
    - **Solution Approach:** Shift and build result.
    - **C++ Code:**
      ```cpp
      uint32_t reverseBits(uint32_t n) {
          uint32_t result = 0;
          for (int i = 0; i < 32; ++i) {
              result = (result << 1) | (n & 1);
              n >>= 1;
          }
          return result;
      }
      ```
    - **Time/Space Complexity:** O(1) time, O(1) space.
    - **Key Concepts:** Bit manipulation, reversal.
    - **Problem-Solving Technique:** Bit shifting.