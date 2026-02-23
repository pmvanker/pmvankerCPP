# Question 41: Explain iterators in C++.

**Explain iterators in C++.**
    - **Answer/Explanation:** Iterators are objects that point to elements in containers, used for traversal.
    - **Code Example:**
      ```cpp
      std::vector<int> v = {1, 2, 3};
      for (auto it = v.begin(); it != v.end(); ++it) {
          std::cout << *it;
      }
      ```
    - **Key Concepts:** Container traversal, pointer-like behavior.
    - **Problem-Solving Technique:** Generic algorithms.