# Threads and Futures

## Explanation
Basic concurrency with `std::thread` and `std::future` for asynchronous tasks.

## Use Case
- Parallel execution.
- Non-blocking computations.

## How to Use
```cpp
std::thread t(func, args); t.join();
auto fut = std::async(func, args); auto result = fut.get();
```

## Methods
- `fut.get()`: Blocks for result.
- `fut.wait()`: Waits without getting.
- Launch policies: `std::launch::async`, `std::launch::deferred`.

## Example
See `threads_future_example.cpp` for threads and async futures.