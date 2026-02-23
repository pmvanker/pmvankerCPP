# Exception Safety

## Explanation
Ensure code behaves correctly when exceptions occur.

## Good Practice
- Strong exception guarantee: Rollback on failure.

## Common Mistakes to Avoid
- Modifying state before ensuring success.
- Not handling exceptions in destructors.

## What Not to Miss
- Use RAII for exception-safe resource management.
- Test with exceptions.

## What to Take Care
- Avoid throwing in destructors.

## Example
See `exception_safety_example.cpp` for safe vs unsafe operations.