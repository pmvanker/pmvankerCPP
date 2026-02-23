# std::span

## Explanation
Non-owning view of contiguous memory.

## Use Case
- Pass arrays/vectors without copying.

## How to Use
```cpp
std::span<int> s(data, size);
s.subspan(start, len);
```

## Methods
- `size()`, `data()`, `subspan()`.

## Benefits
- Efficient, bounds-safe.

## Cons
- Lifetime management.

## Example
See `span_example.cpp` for vector and array views.