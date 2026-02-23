# Ranges

## Explanation
Ranges provide a more modern way to work with sequences, making algorithms more expressive.

## Use Case
- Composable operations on containers.
- Avoid iterator boilerplate.

## How to Use
```cpp
std::ranges::sort(vec);
auto it = std::ranges::find(vec, value);
std::ranges::transform(vec, out, func);
```

## Methods
- Direct range operations.
- Support for projections and views.

## Example
See `ranges_example.cpp` for sorting, finding, transforming.