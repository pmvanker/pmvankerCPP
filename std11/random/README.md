# std::random

## Explanation
Random number generation library.

## Use Case
- Simulations, games, cryptography.

## How to Use
```cpp
std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> dist(min, max);
dist(gen);
```

## Methods
- Engines: mt19937, etc.
- Distributions: uniform, normal, etc.

## Benefits
- High-quality randomness.

## Cons
- Setup is verbose.

## Example
See `random_example.cpp` for int, real, normal distributions.