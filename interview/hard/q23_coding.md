# Question 23: Word Ladder

**Word Ladder**
    - **Problem Statement:** Find shortest transformation sequence.
    - **Solution Approach:** BFS with word graph.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <string>
      #include <unordered_set>
      #include <queue>
      int ladderLength(std::string beginWord, std::string endWord, std::vector<std::string>& wordList) {
          std::unordered_set<std::string> dict(wordList.begin(), wordList.end());
          if (!dict.count(endWord)) return 0;
          std::queue<std::string> q;
          q.push(beginWord);
          int level = 1;
          while (!q.empty()) {
              int size = q.size();
              for (int i = 0; i < size; ++i) {
                  std::string word = q.front(); q.pop();
                  if (word == endWord) return level;
                  for (size_t j = 0; j < word.size(); ++j) {
                      char original = word[j];
                      for (char c = 'a'; c <= 'z'; ++c) {
                          word[j] = c;
                          if (dict.count(word)) {
                              q.push(word);
                              dict.erase(word);
                          }
                      }
                      word[j] = original;
                  }
              }
              level++;
          }
          return 0;
      }
      ```
    - **Time/Space Complexity:** O(n * 26 * l) time, O(n) space.
    - **Key Concepts:** BFS, graph.
    - **Problem-Solving Technique:** Level-order traversal.