# Override and Final

## Explanation
`override` ensures correct virtual overriding; `final` prevents further inheritance/overriding.

## Use Case
- Polymorphism safety and intent.
- Prevent accidental overrides or extensions.

## How to Use
```cpp
virtual void func() override;
class Derived final : Base {};
```

## Methods
- Compiler checks for `override`.
- `final` on classes or methods blocks inheritance/overriding.

## Example
See `override_final_example.cpp` for virtual functions and final classes.