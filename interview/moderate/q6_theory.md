# Question 6: What is RTTI (Run-Time Type Information)?

**What is RTTI (Run-Time Type Information)?**
    - **Answer/Explanation:** RTTI allows determining the type of an object at runtime using `typeid` and `dynamic_cast`.
    - **Code Example:**
      ```cpp
      #include <typeinfo>
      Base* ptr = new Derived();
      if (typeid(*ptr) == typeid(Derived)) {}
      ```
    - **Key Concepts:** Type identification, dynamic casting.
    - **Problem-Solving Technique:** Runtime type checking.