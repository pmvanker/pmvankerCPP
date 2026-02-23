# STL Algorithms

## Explanation
Generic algorithms for operating on ranges/containers.

## Use Case
- Perform operations without manual loops.
- Reusable for any container.

## How to Use
```cpp
std::sort(vec.begin(), vec.end());
auto it = std::find(vec.begin(), vec.end(), value);
```

## Methods
- `std::sort()`, `std::find()`, `std::transform()`, `std::accumulate()`, etc.

## Example
See `stl_algorithms_example.cpp` for sorting, finding, transforming, summing.