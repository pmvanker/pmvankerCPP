# Question 1: Two Sum

**Two Sum**
   - **Problem Statement:** Given an array of integers and a target sum, find two numbers that add up to the target.
   - **Solution Approach:** Use a hash map to store indices, iterate and check for complement.
   - **C++ Code:**
     ```cpp
     #include <vector>
     #include <unordered_map>
     std::vector<int> twoSum(std::vector<int>& nums, int target) {
         std::unordered_map<int, int> map;
         for (int i = 0; i < nums.size(); ++i) {
             int complement = target - nums[i];
             if (map.count(complement)) {
                 return {map[complement], i};
             }
             map[nums[i]] = i;
         }
         return {};
     }
     ```
   - **Time/Space Complexity:** O(n) time, O(n) space.
   - **Key Concepts:** Hash tables, array traversal.
   - **Problem-Solving Technique:** Hash map for O(1) lookups.