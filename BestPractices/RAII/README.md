# RAII (Resource Acquisition Is Initialization)

## Explanation
Bind resource management to object lifetime.

## Good Practice
- Use smart pointers, RAII classes for resources.

## Common Mistakes to Avoid
- Manual new/delete.
- Forgetting to release resources in exceptions.

## What Not to Miss
- Ensure destructors are noexcept.
- Use RAII for file handles, locks, etc.

## What to Take Care
- Exception safety in constructors.

## Example
See `RAII_example.cpp` for good vs bad resource management.