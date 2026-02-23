# Question 25: Explain the `explicit` keyword.

**Explain the `explicit` keyword.**
    - **Answer/Explanation:** `explicit` prevents implicit conversions via constructors.
    - **Code Example:**
      ```cpp
      class MyClass {
          explicit MyClass(int x) {}
      };
      MyClass obj = 5;  // error
      ```
    - **Key Concepts:** Type safety, conversions.
    - **Problem-Solving Technique:** Preventing accidental conversions.