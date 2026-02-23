# Question 7: Climbing Stairs

**Climbing Stairs**
   - **Problem Statement:** Find number of ways to climb n stairs (1 or 2 steps).
   - **Solution Approach:** Use dynamic programming with Fibonacci sequence.
   - **C++ Code:**
     ```cpp
     int climbStairs(int n) {
         if (n <= 2) return n;
         int prev = 1, curr = 2;
         for (int i = 3; i <= n; ++i) {
             int temp = curr;
             curr += prev;
             prev = temp;
         }
         return curr;
     }
     ```
   - **Time/Space Complexity:** O(n) time, O(1) space.
   - **Key Concepts:** Dynamic programming, Fibonacci.
   - **Problem-Solving Technique:** Iterative DP.