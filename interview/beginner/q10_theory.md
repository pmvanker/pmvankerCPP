# Question 10: What is the difference between `pass by value` and `pass by reference`?

**What is the difference between `pass by value` and `pass by reference`?**
    - **Answer/Explanation:** Pass by value creates a copy of the argument, while pass by reference passes the actual variable, allowing modification.
    - **Code Example:**
      ```cpp
      void increment(int x) { x++; }  // pass by value
      void incrementRef(int& x) { x++; }  // pass by reference
      ```
    - **Key Concepts:** Parameter passing, memory efficiency.
    - **Problem-Solving Technique:** Choosing passing mechanism based on needs.