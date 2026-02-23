# Question 3: What is the difference between `int` and `long int`?

**What is the difference between `int` and `long int`?**
   - **Answer/Explanation:** `int` is typically 4 bytes on most systems, while `long int` is also usually 4 bytes but can be 8 bytes on some systems (like 64-bit Linux). The exact size depends on the compiler and platform.
   - **Code Example:**
     ```cpp
     #include <iostream>
     int main() {
         std::cout << "Size of int: " << sizeof(int) << std::endl;
         std::cout << "Size of long int: " << sizeof(long int) << std::endl;
         return 0;
     }
     ```
   - **Key Concepts:** Data type sizes, platform dependency.
   - **Problem-Solving Technique:** Using `sizeof` operator for verification.