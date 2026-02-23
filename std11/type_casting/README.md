# Type Casting in Modern C++

## Explanation
Explicit type conversions using C++ cast operators instead of C-style casts.

## When to Use
- **static_cast**: Safe conversions between related types, numeric types.
- **dynamic_cast**: Polymorphic downcasts with runtime checks.
- **const_cast**: Remove/add const (rare, use carefully).
- **reinterpret_cast**: Low-level reinterpretation (avoid if possible).

## How to Use
```cpp
static_cast<NewType>(value);
dynamic_cast<Derived*>(base_ptr);
const_cast<NonConstType>(const_value);
reinterpret_cast<NewType>(value);
```

## Problems Resolved
- Type safety: Avoids silent errors from C-style casts.
- Runtime checks: dynamic_cast prevents invalid casts.
- Explicit intent: Code is clearer.

## Benefits
- Compile-time safety where possible.
- Better error detection.

## Cons
- dynamic_cast has runtime overhead.
- reinterpret_cast is unsafe and non-portable.
- const_cast can lead to undefined behavior.

## Example
See `type_casting_example.cpp` for each cast type.