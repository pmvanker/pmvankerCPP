# Question 34: What are futures and promises in C++?

**What are futures and promises in C++?**
    - **Answer/Explanation:** Futures represent asynchronous operations, promises set their values.
    - **Code Example:**
      ```cpp
      #include <future>
      std::promise<int> p;
      std::future<int> f = p.get_future();
      p.set_value(10);
      std::cout << f.get();
      ```
    - **Key Concepts:** Asynchronous programming.
    - **Problem-Solving Technique:** Handling async results.