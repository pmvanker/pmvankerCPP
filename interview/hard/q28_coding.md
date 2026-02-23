# Question 28: Clone Graph

**Clone Graph**
    - **Problem Statement:** Deep copy undirected graph.
    - **Solution Approach:** DFS/BFS with hash map.
    - **C++ Code:**
      ```cpp
      struct Node {
          int val;
          std::vector<Node*> neighbors;
          Node(int x) : val(x) {}
      };
      Node* cloneGraph(Node* node) {
          if (!node) return nullptr;
          std::unordered_map<Node*, Node*> map;
          return dfs(node, map);
      }
      Node* dfs(Node* node, std::unordered_map<Node*, Node*>& map) {
          if (map.count(node)) return map[node];
          Node* copy = new Node(node->val);
          map[node] = copy;
          for (Node* neighbor : node->neighbors) {
              copy->neighbors.push_back(dfs(neighbor, map));
          }
          return copy;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(n) space.
    - **Key Concepts:** DFS, graphs.
    - **Problem-Solving Technique:** Recursive copying.