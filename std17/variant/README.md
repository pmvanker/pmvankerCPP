# std::variant

## Explanation
Type-safe union for multiple alternatives.

## Use Case
- Store one of several types safely.

## How to Use
```cpp
std::variant<int, std::string> v = 5;
std::visit([](auto& val) { /* use */ }, v);
```

## Methods
- `std::get<>`, `std::holds_alternative<>`, `std::visit`.

## Benefits
- Type-safe compared to unions.

## Cons
- Runtime overhead for type checking.

## Example
See `variant_example.cpp` for storing and visiting types.