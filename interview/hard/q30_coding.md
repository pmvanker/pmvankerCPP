# Question 30: Sum Root to Leaf Numbers

**Sum Root to Leaf Numbers**
    - **Problem Statement:** Sum numbers formed by root-to-leaf paths.
    - **Solution Approach:** DFS with path accumulation.
    - **C++ Code:**
      ```cpp
      struct TreeNode {
          int val;
          TreeNode* left;
          TreeNode* right;
          TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      };
      int sumNumbers(TreeNode* root) {
          return dfs(root, 0);
      }
      int dfs(TreeNode* node, int current) {
          if (!node) return 0;
          current = current * 10 + node->val;
          if (!node->left && !node->right) return current;
          return dfs(node->left, current) + dfs(node->right, current);
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(h) space.
    - **Key Concepts:** DFS, trees.
    - **Problem-Solving Technique:** Path summation.