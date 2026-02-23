# Variadic Templates

## Explanation
Templates that accept a variable number of arguments.

## Use Case
- Generic functions like `printf`.
- Containers like `std::tuple`.
- Recursive algorithms.

## How to Use
```cpp
template<typename... Args>
void func(Args... args) { /* expand with ... */ }
```

## Methods
- Parameter pack expansion: `args...`
- Size: `sizeof...(Args)`
- C++17 fold expressions: `(args + ...)` for operations.

## Example
See `variadic_templates_example.cpp` for printing and counting arguments.