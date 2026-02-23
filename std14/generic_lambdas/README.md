# Generic Lambdas

## Explanation
Lambdas with `auto` parameters for generic programming.

## Use Case
- Write lambdas that work with multiple types.

## How to Use
```cpp
auto lambda = [](auto x) { return x * 2; };
```

## Methods
- Type deduction for parameters.

## Benefits
- Reduces need for separate overloads.

## Cons
- Can hide type mismatches.

## Example
See `generic_lambdas_example.cpp` for adding different types.