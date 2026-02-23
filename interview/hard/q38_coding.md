# Question 38: Minimum Depth of Binary Tree

**Minimum Depth of Binary Tree**
    - **Problem Statement:** Find minimum depth.
    - **Solution Approach:** BFS or recursion.
    - **C++ Code:**
      ```cpp
      #include <queue>
      int minDepth(TreeNode* root) {
          if (!root) return 0;
          std::queue<TreeNode*> q;
          q.push(root);
          int depth = 1;
          while (!q.empty()) {
              int size = q.size();
              for (int i = 0; i < size; ++i) {
                  TreeNode* node = q.front(); q.pop();
                  if (!node->left && !node->right) return depth;
                  if (node->left) q.push(node->left);
                  if (node->right) q.push(node->right);
              }
              depth++;
          }
          return depth;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(n) space.
    - **Key Concepts:** BFS, tree depth.
    - **Problem-Solving Technique:** Level-order traversal.