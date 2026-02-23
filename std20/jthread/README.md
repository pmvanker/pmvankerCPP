# std::jthread

## Explanation
Joining thread that auto-joins on destruction.

## Use Case
- Safer threading.

## How to Use
```cpp
std::jthread t(func);
t.request_stop();
```

## Methods
- `request_stop()`, `get_stop_token()`.

## Benefits
- No manual join needed.

## Cons
- C++20 required.

## Example
See `jthread_example.cpp` for cooperative stopping.