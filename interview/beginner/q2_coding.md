# Question 2: Reverse String

**Reverse String**
   - **Problem Statement:** Reverse a string in-place.
   - **Solution Approach:** Use two pointers to swap characters from start and end.
   - **C++ Code:**
     ```cpp
     #include <vector>
     void reverseString(std::vector<char>& s) {
         int left = 0, right = s.size() - 1;
         while (left < right) {
             std::swap(s[left], s[right]);
             left++;
             right--;
         }
     }
     ```
   - **Time/Space Complexity:** O(n) time, O(1) space.
   - **Key Concepts:** Two pointers, in-place modification.
   - **Problem-Solving Technique:** Pointer manipulation.