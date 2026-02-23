# std::tuple

## Explanation
`std::tuple` groups multiple values of different types.

## Use Case
- Return multiple values from functions.
- Store heterogeneous data.

## How to Use
```cpp
auto t = std::make_tuple(1, 2.0, "str");
int i = std::get<0>(t);
auto [a, b, c] = t; // C++17
```

## Methods
- `std::get<index>()`, `std::tie()`, structured bindings.

## Benefits
- Type-safe multiple return values.

## Cons
- Verbose access with indices.
- No named access without C++17.

## Example
See `tuple_example.cpp` for creation and unpacking.