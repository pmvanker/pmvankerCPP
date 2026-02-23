# std::make_unique

## Explanation
`std::make_unique` is a factory function for creating `std::unique_ptr` instances safely.

## Use Case
- Exception-safe creation of unique_ptr.
- Preferred over `new` to avoid memory leaks.

## How to Use
```cpp
auto ptr = std::make_unique<Type>(args);
auto arr = std::make_unique<Type[]>(size);
```

## Methods
- Automatically manages memory.
- For arrays in C++14.

## Example
See `make_unique_example.cpp` for single objects and arrays.