# std::condition_variable

## Explanation
Synchronization for thread communication.

## Use Case
- Producer-consumer patterns.

## How to Use
```cpp
std::condition_variable cv;
cv.wait(lock, predicate);
cv.notify_one();
```

## Methods
- `wait()`, `wait_for()`, `notify_one()`, `notify_all()`.

## Benefits
- Efficient waiting.

## Cons
- Spurious wakeups possible.

## Example
See `condition_variable_example.cpp` for waiting/notifying.