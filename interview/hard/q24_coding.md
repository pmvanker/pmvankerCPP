# Question 24: Word Ladder II

**Word Ladder II**
    - **Problem Statement:** Find all shortest transformation sequences.
    - **Solution Approach:** BFS for levels, DFS for paths.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <string>
      #include <unordered_set>
      #include <unordered_map>
      #include <queue>
      std::vector<std::vector<std::string>> findLadders(std::string beginWord, std::string endWord, std::vector<std::string>& wordList) {
          std::unordered_set<std::string> dict(wordList.begin(), wordList.end());
          std::vector<std::vector<std::string>> result;
          if (!dict.count(endWord)) return result;
          std::unordered_map<std::string, std::vector<std::string>> graph;
          buildGraph(beginWord, endWord, dict, graph);
          std::vector<std::string> path;
          dfs(beginWord, endWord, graph, path, result);
          return result;
      }
      void buildGraph(std::string beginWord, std::string endWord, std::unordered_set<std::string>& dict, std::unordered_map<std::string, std::vector<std::string>>& graph) {
          std::queue<std::string> q;
          q.push(beginWord);
          std::unordered_set<std::string> visited;
          visited.insert(beginWord);
          bool found = false;
          while (!q.empty() && !found) {
              int size = q.size();
              std::unordered_set<std::string> levelVisited;
              for (int i = 0; i < size; ++i) {
                  std::string word = q.front(); q.pop();
                  std::string original = word;
                  for (size_t j = 0; j < word.size(); ++j) {
                      char orig = word[j];
                      for (char c = 'a'; c <= 'z'; ++c) {
                          word[j] = c;
                          if (dict.count(word) || word == endWord) {
                              if (word == endWord) found = true;
                              if (!visited.count(word)) {
                                  levelVisited.insert(word);
                                  q.push(word);
                              }
                              graph[original].push_back(word);
                          }
                      }
                      word[j] = orig;
                  }
              }
              for (auto& w : levelVisited) visited.insert(w);
          }
      }
      void dfs(std::string current, std::string endWord, std::unordered_map<std::string, std::vector<std::string>>& graph, std::vector<std::string>& path, std::vector<std::vector<std::string>>& result) {
          path.push_back(current);
          if (current == endWord) {
              result.push_back(path);
          } else {
              for (std::string next : graph[current]) {
                  dfs(next, endWord, graph, path, result);
              }
          }
          path.pop_back();
      }
      ```
    - **Time/Space Complexity:** O(n * 26 * l) time, O(n) space.
    - **Key Concepts:** BFS, DFS, graph.
    - **Problem-Solving Technique:** Path finding.