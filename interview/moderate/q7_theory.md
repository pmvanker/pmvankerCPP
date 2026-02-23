# Question 7: Explain `dynamic_cast` and `static_cast`.

**Explain `dynamic_cast` and `static_cast`.**
    - **Answer/Explanation:** `dynamic_cast` performs safe downcasting with runtime checks, `static_cast` performs compile-time casting.
    - **Code Example:**
      ```cpp
      Base* b = new Derived();
      Derived* d = dynamic_cast<Derived*>(b);  // safe
      int x = static_cast<int>(3.14);  // compile-time
      ```
    - **Key Concepts:** Type conversion, safety.
    - **Problem-Solving Technique:** Appropriate casting.