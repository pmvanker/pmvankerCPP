# Question 32: Sqrt(x)

**Sqrt(x)**
    - **Problem Statement:** Compute integer square root.
    - **Solution Approach:** Binary search for square root.
    - **C++ Code:**
      ```cpp
      int mySqrt(int x) {
          if (x == 0 || x == 1) return x;
          int left = 1, right = x;
          while (left <= right) {
              int mid = left + (right - left) / 2;
              if (mid == x / mid) return mid;
              else if (mid < x / mid) left = mid + 1;
              else right = mid - 1;
          }
          return right;
      }
      ```
    - **Time/Space Complexity:** O(log n) time, O(1) space.
    - **Key Concepts:** Binary search, square root.
    - **Problem-Solving Technique:** Numerical computation.