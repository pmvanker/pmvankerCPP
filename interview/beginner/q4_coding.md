# Question 4: Merge Two Sorted Lists

**Merge Two Sorted Lists**
   - **Problem Statement:** Merge two sorted linked lists.
   - **Solution Approach:** Use a dummy node and merge iteratively.
   - **C++ Code:**
     ```cpp
     struct ListNode {
         int val;
         ListNode* next;
         ListNode(int x) : val(x), next(nullptr) {}
     };
     ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
         ListNode dummy(0);
         ListNode* tail = &dummy;
         while (l1 && l2) {
             if (l1->val < l2->val) {
                 tail->next = l1;
                 l1 = l1->next;
             } else {
                 tail->next = l2;
                 l2 = l2->next;
             }
             tail = tail->next;
         }
         tail->next = l1 ? l1 : l2;
         return dummy.next;
     }
     ```
   - **Time/Space Complexity:** O(n + m) time, O(1) space.
   - **Key Concepts:** Linked lists, merging.
   - **Problem-Solving Technique:** Iterative merging.