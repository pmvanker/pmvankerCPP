# Question 34: Validate Binary Search Tree

**Validate Binary Search Tree**
    - **Problem Statement:** Check if tree is valid BST.
    - **Solution Approach:** Inorder traversal with bounds.
    - **C++ Code:**
      ```cpp
      bool isValidBST(TreeNode* root) {
          return isValid(root, nullptr, nullptr);
      }
      bool isValid(TreeNode* node, TreeNode* min_node, TreeNode* max_node) {
          if (!node) return true;
          if ((min_node && node->val <= min_node->val) || (max_node && node->val >= max_node->val)) return false;
          return isValid(node->left, min_node, node) && isValid(node->right, node, max_node);
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(h) space.
    - **Key Concepts:** BST property, recursion.
    - **Problem-Solving Technique:** Bound checking.