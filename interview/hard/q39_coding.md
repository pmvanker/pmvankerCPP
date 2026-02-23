# Question 39: Path Sum

**Path Sum**
    - **Problem Statement:** Check if path sum exists.
    - **Solution Approach:** Recursive subtraction.
    - **C++ Code:**
      ```cpp
      bool hasPathSum(TreeNode* root, int sum) {
          if (!root) return false;
          sum -= root->val;
          if (!root->left && !root->right) return sum == 0;
          return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(h) space.
    - **Key Concepts:** Path sum.
    - **Problem-Solving Technique:** Recursive check.