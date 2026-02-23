# More STL Containers

## Explanation
Additional containers: deque, list, queue, stack.

## Use Case
- Deque for efficient front/back operations.
- List for frequent insertions/deletions.
- Queue/Stack for specific access patterns.

## How to Use
```cpp
std::deque<int> dq; dq.push_front(1);
std::list<int> lst; lst.push_back(2);
std::queue<int> q; q.push(3);
std::stack<int> stk; stk.push(4);
```

## Methods
- push_front/back, pop_front/back, front, back, top.

## Benefits
- Specialized for performance in certain operations.

## Cons
- Overhead compared to vector for simple cases.