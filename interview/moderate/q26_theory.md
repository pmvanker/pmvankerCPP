# Question 26: What are copy constructors and move constructors?

**What are copy constructors and move constructors?**
    - **Answer/Explanation:** Copy constructors create copies, move constructors transfer ownership.
    - **Code Example:**
      ```cpp
      class MyClass {
          MyClass(const MyClass& other) {}  // copy
          MyClass(MyClass&& other) noexcept {}  // move
      };
      ```
    - **Key Concepts:** Object copying, resource transfer.
    - **Problem-Solving Technique:** Efficient object creation.