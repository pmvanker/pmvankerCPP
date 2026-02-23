# Question 26: Copy List with Random Pointer

**Copy List with Random Pointer**
    - **Problem Statement:** Deep copy linked list with random pointers.
    - **Solution Approach:** Hash map for old to new mapping.
    - **C++ Code:**
      ```cpp
      struct Node {
          int val;
          Node* next;
          Node* random;
          Node(int x) : val(x), next(nullptr), random(nullptr) {}
      };
      Node* copyRandomList(Node* head) {
          if (!head) return nullptr;
          std::unordered_map<Node*, Node*> map;
          Node* curr = head;
          while (curr) {
              map[curr] = new Node(curr->val);
              curr = curr->next;
          }
          curr = head;
          while (curr) {
              map[curr]->next = map[curr->next];
              map[curr]->random = map[curr->random];
              curr = curr->next;
          }
          return map[head];
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(n) space.
    - **Key Concepts:** Hash maps, linked lists.
    - **Problem-Solving Technique:** Node mapping.