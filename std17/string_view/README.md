# std::string_view

## Explanation
Non-owning view of a string.

## Use Case
- Efficient string operations without copying.

## How to Use
```cpp
std::string_view sv(str);
sv.substr(pos, len);
```

## Methods
- `substr()`, `find()`, `size()`, etc.

## Benefits
- Zero-copy string handling.

## Cons
- Lifetime management required.

## Example
See `string_view_example.cpp` for substr and find.