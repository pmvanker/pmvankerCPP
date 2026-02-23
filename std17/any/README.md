# std::any

## Explanation
Container for any type.

## Use Case
- Heterogeneous containers.

## How to Use
```cpp
std::any a = value;
std::any_cast<T>(a);
```

## Methods
- `has_value()`, `type()`, `reset()`.

## Benefits
- Type-safe any type storage.

## Cons
- Runtime type checking overhead.

## Example
See `any_example.cpp` for storing int and string.