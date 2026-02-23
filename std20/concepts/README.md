# Concepts

## Explanation
Concepts constrain template parameters for better error messages.

## Use Case
- Template metaprogramming with constraints.
- Improve compile-time errors.

## How to Use
```cpp
template<typename T>
requires std::integral<T>
void func(T t) { /* ... */ }
```

## Methods
- Predefined concepts like `std::integral`, `std::same_as`.

## Benefits
- Clearer template requirements.
- Better error messages.

## Cons
- Increases compile time slightly.
- Requires C++20 support.