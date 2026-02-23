# Question 33: Unique Binary Search Trees II

**Unique Binary Search Trees II**
    - **Problem Statement:** Generate all unique BSTs.
    - **Solution Approach:** Recursion with memoization.
    - **C++ Code:**
      ```cpp
      #include <vector>
      std::vector<TreeNode*> generateTrees(int n) {
          if (n == 0) return {};
          return generate(1, n);
      }
      std::vector<TreeNode*> generate(int start, int end) {
          std::vector<TreeNode*> result;
          if (start > end) {
              result.push_back(nullptr);
              return result;
          }
          for (int i = start; i <= end; ++i) {
              std::vector<TreeNode*> left = generate(start, i - 1);
              std::vector<TreeNode*> right = generate(i + 1, end);
              for (TreeNode* l : left) {
                  for (TreeNode* r : right) {
                      TreeNode* root = new TreeNode(i);
                      root->left = l;
                      root->right = r;
                      result.push_back(root);
                  }
              }
          }
          return result;
      }
      ```
    - **Time/Space Complexity:** O(4^n / sqrt(n)) time, O(4^n) space.
    - **Key Concepts:** Recursion, BST.
    - **Problem-Solving Technique:** Tree construction.