# std::regex

## Explanation
Regular expressions for pattern matching.

## Use Case
- Validate emails, phones, parse text.

## How to Use
```cpp
std::regex re("pattern");
std::regex_search(str, re);
std::regex_replace(str, re, replacement);
```

## Methods
- `regex_match`, `regex_search`, `regex_replace`.

## Benefits
- Powerful text processing.

## Cons
- Performance overhead for complex patterns.

## Example
See `regex_example.cpp` for email and phone matching.