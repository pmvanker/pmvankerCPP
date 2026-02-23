# Question 32: Binary Tree Inorder Traversal

**Binary Tree Inorder Traversal**
    - **Problem Statement:** Inorder traversal without recursion.
    - **Solution Approach:** Stack-based iterative.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <stack>
      std::vector<int> inorderTraversal(TreeNode* root) {
          std::vector<int> result;
          std::stack<TreeNode*> st;
          TreeNode* curr = root;
          while (curr || !st.empty()) {
              while (curr) {
                  st.push(curr);
                  curr = curr->left;
              }
              curr = st.top(); st.pop();
              result.push_back(curr->val);
              curr = curr->right;
          }
          return result;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(n) space.
    - **Key Concepts:** Stack, trees.
    - **Problem-Solving Technique:** Iterative traversal.