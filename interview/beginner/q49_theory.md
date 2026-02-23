# Question 49: Explain RAII (Resource Acquisition Is Initialization).

**Explain RAII (Resource Acquisition Is Initialization).**
    - **Answer/Explanation:** RAII ties resource management to object lifetime, ensuring cleanup via destructors.
    - **Code Example:**
      ```cpp
      class File {
          std::fstream fs;
      public:
          File(const std::string& path) : fs(path) {}
          ~File() { fs.close(); }
      };
      ```
    - **Key Concepts:** Automatic resource management.
    - **Problem-Solving Technique:** Preventing resource leaks.