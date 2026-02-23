# Question 11: Binary Tree Maximum Path Sum

**Binary Tree Maximum Path Sum**
    - **Problem Statement:** Find maximum path sum in binary tree.
    - **Solution Approach:** Recursion with path tracking.
    - **C++ Code:**
      ```cpp
      struct TreeNode {
          int val;
          TreeNode* left;
          TreeNode* right;
          TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      };
      int maxPathSum(TreeNode* root) {
          int max_sum = INT_MIN;
          dfs(root, max_sum);
          return max_sum;
      }
      int dfs(TreeNode* node, int& max_sum) {
          if (!node) return 0;
          int left = std::max(0, dfs(node->left, max_sum));
          int right = std::max(0, dfs(node->right, max_sum));
          max_sum = std::max(max_sum, left + right + node->val);
          return std::max(left, right) + node->val;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(h) space.
    - **Key Concepts:** Tree traversal, recursion.
    - **Problem-Solving Technique:** Path sum calculation.