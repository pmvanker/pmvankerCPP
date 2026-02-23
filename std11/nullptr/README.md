# Nullptr

## Explanation
Type-safe null pointer constant, replacing `NULL` or `0`.

## Use Case
- Pointer initialization and checks.
- Overload resolution to distinguish from integers.

## How to Use
```cpp
int* p = nullptr;
if (p == nullptr) { /* null check */ }
```

## Methods
- Typed as `std::nullptr_t`.
- Preferred in overloads over `int`.

## Example
See `nullptr_example.cpp` for assignments and overloads.