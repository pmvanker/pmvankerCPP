# Question 15: Best Time to Buy and Sell Stock III

**Best Time to Buy and Sell Stock III**
    - **Problem Statement:** Maximum profit with at most two transactions.
    - **Solution Approach:** Dynamic programming.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <algorithm>
      int maxProfit(std::vector<int>& prices) {
          int buy1 = INT_MAX, buy2 = INT_MAX;
          int sell1 = 0, sell2 = 0;
          for (int price : prices) {
              buy1 = std::min(buy1, price);
              sell1 = std::max(sell1, price - buy1);
              buy2 = std::min(buy2, price - sell1);
              sell2 = std::max(sell2, price - buy2);
          }
          return sell2;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** Dynamic programming, stock trading.
    - **Problem-Solving Technique:** State tracking.