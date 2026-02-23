# Lambda Expressions

## Explanation
Lambdas are anonymous functions defined inline, allowing functional programming in C++.

## Use Case
- Callbacks for event handling.
- Custom comparators in algorithms (e.g., sort).
- Inline function definitions without naming.

## How to Use
```cpp
auto lambda = [](int x, int y) { return x + y; };
std::sort(vec.begin(), vec.end(), [](int a, int b) { return a > b; });
```

## Methods
- Capture: `[]` (none), `[&]` (by reference), `[=]` (by value), `[x, &y]` (specific).
- Parameters and return type: `(params) -> return_type { body }`.
- Can be stored in `auto` variables or passed to functions.

## Benefits
- Enables functional programming.
- Concise inline functions.

## Cons
- Can lead to complex capture clauses.
- Potential for dangling references if not careful.

## Example
See `lambda_example.cpp` for summing, sorting, and capturing values.