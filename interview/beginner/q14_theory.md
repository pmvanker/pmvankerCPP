# Question 14: What is a namespace in C++?

**What is a namespace in C++?**
    - **Answer/Explanation:** Namespaces prevent name conflicts by grouping related code under a name.
    - **Code Example:**
      ```cpp
      namespace MyNamespace {
          int x = 10;
      }
      int main() {
          std::cout << MyNamespace::x;
          return 0;
      }
      ```
    - **Key Concepts:** Name resolution, code organization.
    - **Problem-Solving Technique:** Using `using` directive.