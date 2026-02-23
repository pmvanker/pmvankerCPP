# Question 19: Power of Two

**Power of Two**
    - **Problem Statement:** Check if a number is a power of two.
    - **Solution Approach:** Use bit manipulation.
    - **C++ Code:**
      ```cpp
      bool isPowerOfTwo(int n) {
          return n > 0 && (n & (n - 1)) == 0;
      }
      ```
    - **Time/Space Complexity:** O(1) time, O(1) space.
    - **Key Concepts:** Bit manipulation, powers of two.
    - **Problem-Solving Technique:** Bit operations.