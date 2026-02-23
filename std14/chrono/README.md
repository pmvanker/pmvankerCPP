# Chrono Library (with C++14 Literals)

## Explanation
The `<chrono>` library for time and durations, enhanced in C++14 with user-defined literals.

## Use Case
- Precise timing, benchmarks, delays.

## How to Use
```cpp
auto start = std::chrono::steady_clock::now();
using namespace std::chrono_literals;
auto dur = 5s + 300ms;
```

## Methods
- `now()`, `duration_cast<>`, `count()` for ticks.
- Literals: `s`, `ms`, etc.

## Example
See `chrono_example.cpp` for measuring time and creating durations.