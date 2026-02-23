# Question 19: Explain `std::shared_ptr` and `std::weak_ptr`.

**Explain `std::shared_ptr` and `std::weak_ptr`.**
    - **Answer/Explanation:** `shared_ptr` allows shared ownership with reference counting, `weak_ptr` breaks cycles.
    - **Code Example:**
      ```cpp
      std::shared_ptr<int> sp1 = std::make_shared<int>(10);
      std::shared_ptr<int> sp2 = sp1;
      std::weak_ptr<int> wp = sp1;
      ```
    - **Key Concepts:** Shared ownership, reference cycles.
    - **Problem-Solving Technique:** Managing shared resources.