# std::atomic

## Explanation
Lock-free atomic operations.

## Use Case
- Thread-safe counters without locks.

## How to Use
```cpp
std::atomic<int> a;
a.fetch_add(1);
```

## Methods
- `load()`, `store()`, `fetch_add()`, `compare_exchange_weak()`.

## Benefits
- No locks, high performance.

## Cons
- Limited to simple operations.

## Example
See `atomic_example.cpp` for atomic counter.