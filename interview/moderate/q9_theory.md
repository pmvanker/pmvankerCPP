# Question 9: Explain lvalue and rvalue references.

**Explain lvalue and rvalue references.**
    - **Answer/Explanation:** Lvalue references bind to named objects, rvalue references bind to temporaries.
    - **Code Example:**
      ```cpp
      int x = 10;
      int& lref = x;  // lvalue ref
      int&& rref = 10;  // rvalue ref
      ```
    - **Key Concepts:** Value categories, move semantics.
    - **Problem-Solving Technique:** Understanding expression types.