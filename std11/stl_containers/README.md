# STL Containers

## Explanation
Standard containers like `vector`, `map`, `unordered_map`, `set` for data storage.

## Use Case
- Dynamic arrays (`vector`).
- Ordered maps (`map`).
- Fast lookups (`unordered_map`).
- Unique elements (`set`).

## How to Use
```cpp
std::vector<int> v; v.push_back(1);
std::map<std::string, int> m; m["key"] = 1;
```

## Methods
- `push_back()`, `insert()`, `find()`, `operator[]`, iterators.

## Example
See `stl_containers_example.cpp` for vector, map, unordered_map, set.