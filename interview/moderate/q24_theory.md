# Question 24: What is the `volatile` keyword?

**What is the `volatile` keyword?**
    - **Answer/Explanation:** `volatile` prevents compiler optimizations on variables that can be changed externally.
    - **Code Example:**
      ```cpp
      volatile int flag = 0;
      ```
    - **Key Concepts:** Memory barriers, hardware interaction.
    - **Problem-Solving Technique:** Dealing with external changes.