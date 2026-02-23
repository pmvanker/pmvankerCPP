# Auto Type Deduction

## Explanation
The `auto` keyword allows the compiler to automatically deduce the type of a variable from its initializer.

## Use Case
- Simplifies code with complex types (e.g., iterators, lambdas).
- Reduces verbosity and potential errors in type declarations.

## How to Use
```cpp
auto i = 42;        // int
auto d = 3.14;       // double
auto v = std::vector<int>{1, 2, 3}; // std::vector<int>
```

## Methods
- Deduction at compile time; no runtime cost.
- Can combine with references (`auto&`) or const (`const auto&`).
- Useful in range-based for loops: `for (auto& elem : container)`.

## Benefits
- Reduces code verbosity.
- Prevents type mismatches.

## Cons
- Can make code less explicit, harder to read types.
- Potential for unexpected deductions.

## Example
See `auto_example.cpp` for a complete demonstration.