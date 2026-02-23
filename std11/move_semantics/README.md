# Move Semantics

## Explanation
Move semantics enable efficient transfer of resources using rvalue references, avoiding expensive copies.

## Use Case
- Optimize performance for large objects (vectors, strings) when temporaries are involved.
- Custom classes with dynamic resources.

## How to Use
```cpp
MyClass obj = std::move(other); // Move
```

## Methods
- Rvalue reference: `Type&&`.
- Move constructor: `Type(Type&& other) noexcept`.
- Move assignment: `Type& operator=(Type&& other) noexcept`.
- `std::move()` casts lvalue to rvalue.

## Example
See `move_semantics_example.cpp` for custom move constructors and moving containers.