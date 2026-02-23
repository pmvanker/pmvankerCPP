# Question 40: Flatten Binary Tree to Linked List

**Flatten Binary Tree to Linked List**
    - **Problem Statement:** Flatten tree in-place.
    - **Solution Approach:** Morris traversal or recursion.
    - **C++ Code:**
      ```cpp
      void flatten(TreeNode* root) {
          if (!root) return;
          flatten(root->left);
          flatten(root->right);
          TreeNode* temp = root->right;
          root->right = root->left;
          root->left = nullptr;
          TreeNode* curr = root;
          while (curr->right) curr = curr->right;
          curr->right = temp;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(h) space.
    - **Key Concepts:** Tree flattening.
    - **Problem-Solving Technique:** In-place modification.