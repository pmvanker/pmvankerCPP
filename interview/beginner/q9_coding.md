# Question 9: Single Number

**Single Number**
   - **Problem Statement:** Find the number that appears once in an array where others appear twice.
   - **Solution Approach:** Use XOR operation.
   - **C++ Code:**
     ```cpp
     #include <vector>
     int singleNumber(std::vector<int>& nums) {
         int result = 0;
         for (int num : nums) {
             result ^= num;
         }
         return result;
     }
     ```
   - **Time/Space Complexity:** O(n) time, O(1) space.
   - **Key Concepts:** Bit manipulation, XOR.
   - **Problem-Solving Technique:** XOR properties.