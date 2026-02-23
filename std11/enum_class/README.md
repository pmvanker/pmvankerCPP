# Enum Class

## Explanation
Scoped, strongly-typed enumerations.

## Use Case
- Avoid name conflicts with global scope.
- Prevent implicit conversions to int.

## How to Use
```cpp
enum class Color { Red, Green, Blue };
Color c = Color::Red;
```

## Methods
- Access with `Enum::Value`.
- Explicit cast: `static_cast<int>(Color::Red)`.

## Example
See `enum_class_example.cpp` for switches and underlying values.