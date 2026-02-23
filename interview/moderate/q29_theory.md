# Question 29: Explain template metaprogramming.

**Explain template metaprogramming.**
    - **Answer/Explanation:** TMP uses templates to perform computations at compile-time.
    - **Code Example:**
      ```cpp
      template <int N>
      struct Factorial {
          static const int value = N * Factorial<N-1>::value;
      };
      template <>
      struct Factorial<0> { static const int value = 1; };
      ```
    - **Key Concepts:** Compile-time computation.
    - **Problem-Solving Technique:** Advanced generic programming.