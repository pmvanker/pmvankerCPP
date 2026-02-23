# std::optional

## Explanation
`std::optional` holds a value that may or may not be present.

## Use Case
- Return values from functions that may fail.
- Avoid null pointers for value types.

## How to Use
```cpp
std::optional<int> opt = 5;
if (opt) { std::cout << *opt; }
```

## Methods
- `has_value()`, `value()`, `value_or(default)`.

## Benefits
- Type-safe alternative to pointers.
- Clear intent for optional values.

## Cons
- Slight overhead compared to raw values.
- Not suitable for references.