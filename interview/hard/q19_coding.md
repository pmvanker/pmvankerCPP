# Question 19: Recover Binary Search Tree

**Recover Binary Search Tree**
    - **Problem Statement:** Recover BST with two swapped nodes.
    - **Solution Approach:** Inorder traversal to find violations.
    - **C++ Code:**
      ```cpp
      struct TreeNode {
          int val;
          TreeNode* left;
          TreeNode* right;
          TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      };
      void recoverTree(TreeNode* root) {
          TreeNode* first = nullptr, *second = nullptr, *prev = nullptr;
          inorder(root, first, second, prev);
          std::swap(first->val, second->val);
      }
      void inorder(TreeNode* node, TreeNode*& first, TreeNode*& second, TreeNode*& prev) {
          if (!node) return;
          inorder(node->left, first, second, prev);
          if (prev && prev->val > node->val) {
              if (!first) first = prev;
              second = node;
          }
          prev = node;
          inorder(node->right, first, second, prev);
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(h) space.
    - **Key Concepts:** Tree traversal, BST property.
    - **Problem-Solving Technique:** Violation detection.