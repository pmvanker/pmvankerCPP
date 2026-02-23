# Question 35: Same Tree

**Same Tree**
    - **Problem Statement:** Check if two trees are identical.
    - **Solution Approach:** Recursive comparison.
    - **C++ Code:**
      ```cpp
      bool isSameTree(TreeNode* p, TreeNode* q) {
          if (!p && !q) return true;
          if (!p || !q || p->val != q->val) return false;
          return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(h) space.
    - **Key Concepts:** Tree comparison.
    - **Problem-Solving Technique:** Simultaneous traversal.