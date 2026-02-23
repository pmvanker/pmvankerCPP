# Question 26: What is encapsulation?

**What is encapsulation?**
    - **Answer/Explanation:** Encapsulation hides the internal state of an object and requires all interaction to be performed through methods.
    - **Code Example:**
      ```cpp
      class BankAccount {
      private:
          double balance;
      public:
          void deposit(double amount) { balance += amount; }
      };
      ```
    - **Key Concepts:** Data hiding, access control.
    - **Problem-Solving Technique:** Information hiding.