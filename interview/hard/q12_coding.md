# Question 12: Serialize and Deserialize Binary Tree

**Serialize and Deserialize Binary Tree**
    - **Problem Statement:** Serialize and deserialize binary tree.
    - **Solution Approach:** Preorder traversal with markers.
    - **C++ Code:**
      ```cpp
      #include <string>
      #include <queue>
      struct TreeNode {
          int val;
          TreeNode* left;
          TreeNode* right;
          TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      };
      class Codec {
      public:
          std::string serialize(TreeNode* root) {
              if (!root) return "#";
              return std::to_string(root->val) + "," + serialize(root->left) + "," + serialize(root->right);
          }
          TreeNode* deserialize(std::string data) {
              std::queue<std::string> q;
              size_t pos = 0;
              while ((pos = data.find(',')) != std::string::npos) {
                  q.push(data.substr(0, pos));
                  data = data.substr(pos + 1);
              }
              q.push(data);
              return buildTree(q);
          }
      private:
          TreeNode* buildTree(std::queue<std::string>& q) {
              std::string val = q.front(); q.pop();
              if (val == "#") return nullptr;
              TreeNode* node = new TreeNode(std::stoi(val));
              node->left = buildTree(q);
              node->right = buildTree(q);
              return node;
          }
      };
      ```
    - **Time/Space Complexity:** O(n) time, O(n) space.
    - **Key Concepts:** Tree traversal, serialization.
    - **Problem-Solving Technique:** String parsing.