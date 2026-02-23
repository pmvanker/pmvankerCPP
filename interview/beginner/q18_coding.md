# Question 18: Count Primes

**Count Primes**
    - **Problem Statement:** Count primes less than n.
    - **Solution Approach:** Use Sieve of Eratosthenes.
    - **C++ Code:**
      ```cpp
      #include <vector>
      int countPrimes(int n) {
          if (n <= 2) return 0;
          std::vector<bool> is_prime(n, true);
          is_prime[0] = is_prime[1] = false;
          for (int i = 2; i * i < n; ++i) {
              if (is_prime[i]) {
                  for (int j = i * i; j < n; j += i) {
                      is_prime[j] = false;
                  }
              }
          }
          int count = 0;
          for (bool prime : is_prime) if (prime) count++;
          return count;
      }
      ```
    - **Time/Space Complexity:** O(n log log n) time, O(n) space.
    - **Key Concepts:** Sieve algorithm, primes.
    - **Problem-Solving Technique:** Marking multiples.