# Question 39: Explain modules in C++20.

**Explain modules in C++20.**
    - **Answer/Explanation:** Modules provide a modern alternative to header files for code organization.
    - **Code Example:**
      ```cpp
      // In module.ixx
      export module MyModule;
      export int func() { return 42; }
      // In main.cpp
      import MyModule;
      ```
    - **Key Concepts:** Code modularization, compilation speed.
    - **Problem-Solving Technique:** Improving build times.