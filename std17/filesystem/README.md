# Filesystem

## Explanation
The filesystem library provides operations for files and directories.

## Use Case
- Cross-platform file handling.
- Directory traversal and manipulation.

## How to Use
```cpp
std::filesystem::path p = "file.txt";
if (std::filesystem::exists(p)) { /* ... */ }
std::filesystem::create_directory("dir");
```

## Methods
- `exists()`, `is_directory()`, `create_directory()`, `directory_iterator`.

## Benefits
- Cross-platform compatibility.
- Type-safe path handling.

## Cons
- Requires linking filesystem library in some compilers.
- Can be slow for large directory trees.