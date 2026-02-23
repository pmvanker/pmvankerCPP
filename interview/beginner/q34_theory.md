# Question 34: What is the difference between pointers and references?

**What is the difference between pointers and references?**
    - **Answer/Explanation:** Pointers can be null and reassigned, references cannot be null and are bound once.
    - **Code Example:**
      ```cpp
      int* ptr = nullptr;  // ok
      int& ref = x;  // must initialize
      ptr = &y;  // ok
      // ref = y;  // error, cannot rebind
      ```
    - **Key Concepts:** Nullability, rebinding.
    - **Problem-Solving Technique:** Choosing based on semantics.