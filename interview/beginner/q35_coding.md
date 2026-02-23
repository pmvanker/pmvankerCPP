# Question 35: Plus One (Linked List)

**Plus One (Linked List)**
    - **Problem Statement:** Add one to number represented as linked list.
    - **Solution Approach:** Traverse to end, handle carry.
    - **C++ Code:**
      ```cpp
      ListNode* plusOne(ListNode* head) {
          if (!head) return new ListNode(1);
          ListNode* curr = head;
          ListNode* last_non_nine = nullptr;
          while (curr) {
              if (curr->val != 9) last_non_nine = curr;
              curr = curr->next;
          }
          if (last_non_nine) {
              last_non_nine->val++;
              curr = last_non_nine->next;
              while (curr) {
                  curr->val = 0;
                  curr = curr->next;
              }
          } else {
              // all 9s
              ListNode* new_head = new ListNode(1);
              new_head->next = head;
              curr = head;
              while (curr) {
                  curr->val = 0;
                  curr = curr->next;
              }
              return new_head;
          }
          return head;
      }
      ```
    - **Time/Space Complexity:** O(n) time, O(1) space.
    - **Key Concepts:** Linked lists, carry propagation.
    - **Problem-Solving Technique:** In-place modification.