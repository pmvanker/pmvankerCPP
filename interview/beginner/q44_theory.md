# Question 44: What are class templates?

**What are class templates?**
    - **Answer/Explanation:** Class templates define classes that can be instantiated with different types.
    - **Code Example:**
      ```cpp
      template <typename T>
      class Stack {
          std::vector<T> data;
      };
      ```
    - **Key Concepts:** Generic classes, instantiation.
    - **Problem-Solving Technique:** Reusable data structures.