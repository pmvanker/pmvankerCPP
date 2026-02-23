# Initializer Lists

## Explanation
Uniform initialization syntax using braces, with `std::initializer_list`.

## Use Case
- Consistent object initialization.
- Passing variable arguments to constructors.

## How to Use
```cpp
std::vector<int> v{1, 2, 3};
MyClass obj{arg1, arg2};
```

## Methods
- `std::initializer_list<T>` in constructors.
- Methods: `begin()`, `end()`, `size()`.

## Example
See `initializer_lists_example.cpp` for vectors and custom classes.