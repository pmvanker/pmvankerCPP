# Question 10: LRU Cache

**LRU Cache**
    - **Problem Statement:** Implement LRU cache.
    - **Solution Approach:** Hash map and doubly linked list.
    - **C++ Code:**
      ```cpp
      #include <unordered_map>
      struct Node {
          int key, value;
          Node* prev, *next;
          Node(int k, int v) : key(k), value(v), prev(nullptr), next(nullptr) {}
      };
      class LRUCache {
      private:
          int capacity;
          std::unordered_map<int, Node*> map;
          Node* head, *tail;
          void moveToHead(Node* node) {
              removeNode(node);
              addToHead(node);
          }
          void removeNode(Node* node) {
              node->prev->next = node->next;
              node->next->prev = node->prev;
          }
          void addToHead(Node* node) {
              node->next = head->next;
              node->prev = head;
              head->next->prev = node;
              head->next = node;
          }
          void removeTail() {
              Node* node = tail->prev;
              removeNode(node);
              map.erase(node->key);
              delete node;
          }
      public:
          LRUCache(int capacity) : capacity(capacity) {
              head = new Node(0, 0);
              tail = new Node(0, 0);
              head->next = tail;
              tail->prev = head;
          }
          int get(int key) {
              if (map.count(key)) {
                  moveToHead(map[key]);
                  return map[key]->value;
              }
              return -1;
          }
          void put(int key, int value) {
              if (map.count(key)) {
                  map[key]->value = value;
                  moveToHead(map[key]);
              } else {
                  Node* node = new Node(key, value);
                  map[key] = node;
                  addToHead(node);
                  if (map.size() > capacity) {
                      removeTail();
                  }
              }
          }
      };
      ```
    - **Time/Space Complexity:** O(1) time, O(capacity) space.
    - **Key Concepts:** Hash maps, linked lists.
    - **Problem-Solving Technique:** Cache implementation.