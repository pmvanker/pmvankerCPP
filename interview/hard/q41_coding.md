# Question 41: Populating Next Right Pointers in Each Node

**Populating Next Right Pointers in Each Node**
    - **Problem Statement:** Connect nodes at same level.
    - **Solution Approach:** BFS or recursion.
    - **C++ Code:**
      ```cpp
      struct Node {
          int val;
          Node* left;
          Node* right;
          Node* next;
          Node(int x) : val(x), left(nullptr), right(nullptr), next(nullptr) {}
      };
      Node* connect(Node* root) {
          if (!root) return nullptr;
          std::queue<Node*> q;
          q.push(root);
          while (!q.empty()) {
              int size = q.size();
              for (int i = 0; i < size; ++i) {
                  Node* node = q.front(); q.pop();
                  if (i < size - 1) node->next = q.front();
                  if (node->left) q.push(node->left);
                  if (node->right) q.push(node->right);
              }
          }
          return root;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(n) space.
    - **Key Concepts:** Level order, pointers.
    - **Problem-Solving Technique:** Queue-based linking.