# Question 29: Explain friend functions and classes.

**Explain friend functions and classes.**
    - **Answer/Explanation:** Friend functions/classes can access private members of a class.
    - **Code Example:**
      ```cpp
      class MyClass {
          friend void friendFunc(MyClass& obj);
      private:
          int x;
      };
      void friendFunc(MyClass& obj) { obj.x = 10; }
      ```
    - **Key Concepts:** Access privileges, encapsulation breach.
    - **Problem-Solving Technique:** Controlled access.