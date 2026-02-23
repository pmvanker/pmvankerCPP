# Question 42: Construct Binary Tree from Preorder and Inorder Traversal

**Construct Binary Tree from Preorder and Inorder Traversal**
    - **Problem Statement:** Build tree from traversals.
    - **Solution Approach:** Recursion with indices.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <unordered_map>
      TreeNode* buildTree(std::vector<int>& preorder, std::vector<int>& inorder) {
          std::unordered_map<int, int> map;
          for (size_t i = 0; i < inorder.size(); ++i) map[inorder[i]] = i;
          return build(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, map);
      }
      TreeNode* build(const std::vector<int>& preorder, int pre_start, int pre_end, const std::vector<int>& inorder, int in_start, int in_end, std::unordered_map<int, int>& map) {
          if (pre_start > pre_end || in_start > in_end) return nullptr;
          TreeNode* root = new TreeNode(preorder[pre_start]);
          int root_index = map[root->val];
          int left_size = root_index - in_start;
          root->left = build(preorder, pre_start + 1, pre_start + left_size, inorder, in_start, root_index - 1, map);
          root->right = build(preorder, pre_start + left_size + 1, pre_end, inorder, root_index + 1, in_end, map);
          return root;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(n) space.
    - **Key Concepts:** Tree construction, traversals.
    - **Problem-Solving Technique:** Index mapping.