# Question 5: Merge k Sorted Lists

**Merge k Sorted Lists**
    - **Problem Statement:** Merge k sorted linked lists.
    - **Solution Approach:** Use priority queue.
    - **C++ Code:**
      ```cpp
      #include <vector>
      #include <queue>
      struct ListNode {
          int val;
          ListNode* next;
          ListNode(int x) : val(x), next(nullptr) {}
      };
      struct Compare {
          bool operator()(ListNode* a, ListNode* b) {
              return a->val > b->val;
          }
      };
      ListNode* mergeKLists(std::vector<ListNode*>& lists) {
          std::priority_queue<ListNode*, std::vector<ListNode*>, Compare> pq;
          for (ListNode* list : lists) {
              if (list) pq.push(list);
          }
          ListNode dummy(0);
          ListNode* tail = &dummy;
          while (!pq.empty()) {
              ListNode* node = pq.top(); pq.pop();
              tail->next = node;
              tail = tail->next;
              if (node->next) pq.push(node->next);
          }
          return dummy.next;
      }
      ```
    - **Time/Space Complexity:** O(n log k) time, O(k) space.
    - **Key Concepts:** Priority queues, merging.
    - **Problem-Solving Technique:** Heap-based merging.