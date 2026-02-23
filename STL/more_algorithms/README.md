# More STL Algorithms

## Explanation
Additional algorithms: copy, merge, unique, etc.

## Use Case
- Manipulate and combine data efficiently.

## How to Use
```cpp
std::copy(src.begin(), src.end(), dest.begin());
std::merge(a.begin(), a.end(), b.begin(), b.end(), out);
std::unique(vec.begin(), vec.end());
```

## Methods
- Various for copying, merging, removing duplicates.

## Benefits
- Reusable and optimized operations.

## Cons
- Require sorted input for some (like merge).