# Question 3: Palindrome Number

**Palindrome Number**
   - **Problem Statement:** Check if an integer is a palindrome.
   - **Solution Approach:** Convert to string or reverse half the number.
   - **C++ Code:**
     ```cpp
     bool isPalindrome(int x) {
         if (x < 0) return false;
         long long reversed = 0, original = x;
         while (x > 0) {
             reversed = reversed * 10 + x % 10;
             x /= 10;
         }
         return original == reversed;
     }
     ```
   - **Time/Space Complexity:** O(log n) time, O(1) space.
   - **Key Concepts:** Number manipulation, reversal.
   - **Problem-Solving Technique:** Mathematical operations.