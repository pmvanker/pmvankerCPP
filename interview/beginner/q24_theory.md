# Question 24: What are constructors and destructors?

**What are constructors and destructors?**
    - **Answer/Explanation:** Constructors initialize objects, destructors clean up resources when objects are destroyed.
    - **Code Example:**
      ```cpp
      class MyClass {
      public:
          MyClass() {}  // constructor
          ~MyClass() {}  // destructor
      };
      ```
    - **Key Concepts:** Object lifecycle, RAII.
    - **Problem-Solving Technique:** Resource management.