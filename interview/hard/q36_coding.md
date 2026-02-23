# Question 36: Symmetric Tree

**Symmetric Tree**
    - **Problem Statement:** Check if tree is symmetric.
    - **Solution Approach:** Recursive mirror check.
    - **C++ Code:**
      ```cpp
      bool isSymmetric(TreeNode* root) {
          return isMirror(root, root);
      }
      bool isMirror(TreeNode* t1, TreeNode* t2) {
          if (!t1 && !t2) return true;
          if (!t1 || !t2) return false;
          return (t1->val == t2->val) && isMirror(t1->left, t2->right) && isMirror(t1->right, t2->left);
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(h) space.
    - **Key Concepts:** Mirror symmetry.
    - **Problem-Solving Technique:** Recursive check.