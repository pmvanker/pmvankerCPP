# Question 15: Group Anagrams

**Group Anagrams**
    - **Problem Statement:** Group strings that are anagrams.
    - **Solution Approach:** Sort strings as keys in map.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <string>
      #include <unordered_map>
      #include <algorithm>
      std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
          std::unordered_map<std::string, std::vector<std::string>> map;
          for (std::string str : strs) {
              std::string key = str;
              std::sort(key.begin(), key.end());
              map[key].push_back(str);
          }
          std::vector<std::vector<std::string>> result;
          for (auto& pair : map) {
              result.push_back(pair.second);
          }
          return result;
      }
      ```
    - **Time/Space Complexity:** O(n*k log k) time, O(n*k) space.
    - **Key Concepts:** Hash maps, sorting.
    - **Problem-Solving Technique:** Key generation.