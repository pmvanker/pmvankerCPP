# Range-Based For Loop

## Explanation
Simplified syntax for iterating over ranges/containers.

## Use Case
- Cleaner loops for arrays, vectors, maps, etc.
- Avoid iterator boilerplate.

## How to Use
```cpp
for (auto& elem : container) { /* use elem */ }
```

## Methods
- Works with any type having `begin()` and `end()`.
- `elem` can be `auto`, `const auto&`, etc., for modification or read-only.

## Example
See `range_based_for_example.cpp` for vectors, arrays, and custom ranges.