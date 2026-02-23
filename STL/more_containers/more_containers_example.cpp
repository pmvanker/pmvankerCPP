#include <iostream>
#include <deque>
#include <list>
#include <queue>
#include <stack>

// More STL Containers
// Use case: Different data structures for specific needs.
// How to use: std::deque, std::list, std::queue, std::stack.

int main() {
    // Deque: double-ended queue
    std::deque<int> dq = {1, 2, 3};
    dq.push_front(0);
    dq.push_back(4);
    std::cout << "Deque: ";
    for (auto& e : dq) std::cout << e << " ";
    std::cout << std::endl;

    // List: doubly-linked list
    std::list<int> lst = {1, 2, 3};
    lst.push_front(0);
    lst.push_back(4);
    std::cout << "List: ";
    for (auto& e : lst) std::cout << e << " ";
    std::cout << std::endl;

    // Queue: FIFO
    std::queue<int> q;
    q.push(1); q.push(2); q.push(3);
    std::cout << "Queue front: " << q.front() << ", back: " << q.back() << std::endl;
    q.pop();

    // Stack: LIFO
    std::stack<int> stk;
    stk.push(1); stk.push(2); stk.push(3);
    std::cout << "Stack top: " << stk.top() << std::endl;
    stk.pop();

    return 0;
}