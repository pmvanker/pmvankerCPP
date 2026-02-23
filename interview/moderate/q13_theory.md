# Question 13: Explain capture clauses in lambdas.

**Explain capture clauses in lambdas.**
    - **Answer/Explanation:** Capture clauses specify how variables are captured: by value, by reference, or both.
    - **Code Example:**
      ```cpp
      int x = 10;
      auto lambda = [x]() { return x; };  // by value
      auto lambda2 = [&x]() { x = 20; };  // by reference
      ```
    - **Key Concepts:** Variable capture, lifetime.
    - **Problem-Solving Technique:** Managing captured variables.