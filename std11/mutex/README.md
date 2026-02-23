# std::mutex

## Explanation
Mutual exclusion for thread synchronization.

## Use Case
- Protect shared resources in multi-threading.

## How to Use
```cpp
std::mutex mtx;
std::lock_guard<std::mutex> lock(mtx); // RAII
```

## Methods
- `lock()`, `unlock()`, `try_lock()`.

## Benefits
- Prevents race conditions.

## Cons
- Can cause deadlocks if misused.

## Example
See `mutex_example.cpp` for thread-safe increment.