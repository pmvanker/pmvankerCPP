# Constexpr

## Explanation
`constexpr` enables compile-time evaluation of expressions and functions.

## Use Case
- Constants and computations known at compile time.
- Metaprogramming and template parameters.
- Array sizes and performance-critical values.

## How to Use
```cpp
constexpr int fact = factorial(5);
constexpr int func(int n) { return n * 2; }
```

## Methods
- Must be evaluable at compile time.
- Can be used in array declarations: `int arr[constexpr_value];`.
- Relaxed in C++14 for more complex functions.

## Example
See `constexpr_example.cpp` for factorial, Fibonacci, and array sizing.