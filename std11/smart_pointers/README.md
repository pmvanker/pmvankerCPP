# Smart Pointers

## Explanation
Smart pointers (`unique_ptr`, `shared_ptr`, `weak_ptr`) manage memory automatically, preventing leaks.

## Use Case
- RAII for dynamic objects.
- Shared ownership for complex data structures.
- Breaking reference cycles.

## How to Use
```cpp
std::unique_ptr<MyClass> up = std::make_unique<MyClass>(args);
std::shared_ptr<MyClass> sp = std::make_shared<MyClass>(args);
std::weak_ptr<MyClass> wp = sp;
```

## Methods
- `get()`: Access raw pointer.
- `reset()`: Release ownership.
- `use_count()`: Reference count for shared_ptr.
- Custom deleters supported.

## Benefits
- Automatic memory management.
- Prevents memory leaks.

## Cons
- Slight performance overhead.
- Cyclic references with shared_ptr.

## Example
See `smart_pointers_example.cpp` for unique, shared, and weak pointers.