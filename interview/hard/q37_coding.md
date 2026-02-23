# Question 37: Maximum Depth of Binary Tree

**Maximum Depth of Binary Tree**
    - **Problem Statement:** Find maximum depth.
    - **Solution Approach:** Recursive height calculation.
    - **C++ Code:**
      ```cpp
      int maxDepth(TreeNode* root) {
          if (!root) return 0;
          return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(h) space.
    - **Key Concepts:** Tree height.
    - **Problem-Solving Technique:** Recursion.