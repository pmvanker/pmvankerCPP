# Question 8: Best Time to Buy and Sell Stock

**Best Time to Buy and Sell Stock**
   - **Problem Statement:** Find maximum profit from buying and selling stock once.
   - **Solution Approach:** Track minimum price and maximum profit.
   - **C++ Code:**
     ```cpp
     #include <vector>
     #include <algorithm>
     int maxProfit(std::vector<int>& prices) {
         int min_price = INT_MAX, max_profit = 0;
         for (int price : prices) {
             min_price = std::min(min_price, price);
             max_profit = std::max(max_profit, price - min_price);
         }
         return max_profit;
     }
     ```
   - **Time/Space Complexity:** O(n) time, O(1) space.
   - **Key Concepts:** Array traversal, profit calculation.
   - **Problem-Solving Technique:** Single pass optimization.