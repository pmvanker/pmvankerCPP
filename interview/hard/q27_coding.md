# Question 27: Gas Station

**Gas Station**
    - **Problem Statement:** Find starting gas station for circular route.
    - **Solution Approach:** Track total and current gas.
    - **C++ Code:**
      ```cpp
      #include <vector>
      int canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost) {
          int total = 0, current = 0, start = 0;
          for (size_t i = 0; i < gas.size(); ++i) {
              int diff = gas[i] - cost[i];
              total += diff;
              current += diff;
              if (current < 0) {
                  start = i + 1;
                  current = 0;
              }
          }
          return total >= 0 ? start : -1;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** Greedy, circular.
    - **Problem-Solving Technique:** Deficit tracking.