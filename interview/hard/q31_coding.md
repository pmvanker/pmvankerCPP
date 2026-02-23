# Question 31: Restore IP Addresses

**Restore IP Addresses**
    - **Problem Statement:** Restore all possible IP addresses.
    - **Solution Approach:** Backtracking with validation.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <string>
      std::vector<std::string> restoreIpAddresses(std::string s) {
          std::vector<std::string> result;
          backtrack(s, 0, 0, "", result);
          return result;
      }
      void backtrack(const std::string& s, int start, int part, std::string current, std::vector<std::string>& result) {
          if (part == 4) {
              if (start == s.size()) result.push_back(current.substr(1));
              return;
          }
          for (int len = 1; len <= 3 && start + len <= s.size(); ++len) {
              std::string segment = s.substr(start, len);
              if (isValid(segment)) {
                  backtrack(s, start + len, part + 1, current + "." + segment, result);
              }
          }
      }
      bool isValid(const std::string& s) {
          if (s.empty() || (s.size() > 1 && s[0] == '0')) return false;
          int num = std::stoi(s);
          return num >= 0 && num <= 255;
      }
      ```
    - **Time/Space Complexity:** O(1) time, O(1) space.
    - **Key Concepts:** Backtracking, IP validation.
    - **Problem-Solving Technique:** Segment generation.