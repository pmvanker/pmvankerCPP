# Question 6: Explain the difference between `cout` and `printf`.

**Explain the difference between `cout` and `printf`.**
   - **Answer/Explanation:** `cout` is part of C++'s iostream library and is type-safe, while `printf` is from C's stdio library and uses format specifiers.
   - **Code Example:**
     ```cpp
     #include <iostream>
     #include <cstdio>
     int main() {
         int x = 5;
         std::cout << "Value: " << x << std::endl;  // C++
         printf("Value: %d\n", x);  // C style
         return 0;
     }
     ```
   - **Key Concepts:** Output streams, type safety.
   - **Problem-Solving Technique:** Choosing appropriate output method.