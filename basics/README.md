# Basics — C++ OOP Assignments

Work through these files in order. Each file has zero code — only
comments that guide you on what to build.

## Files

| File | Topic |
|------|-------|
| `01_classes_and_objects.cpp` | Defining classes, creating objects on stack and heap |
| `02_structs.cpp` | Structs as data containers, methods on structs |
| `03_pointers_and_references.cpp` | Raw pointers, references, smart pointers |
| `04_inheritance.cpp` | Base/derived classes, access specifiers, method override |
| `05_virtual_functions_and_polymorphism.cpp` | virtual, pure virtual, abstract class, runtime polymorphism |
| `06_encapsulation_and_getters_setters.cpp` | Private data, controlled access, validation in setters |
| `07_constructors_and_destructors.cpp` | Default/parameterised/copy constructors, destructor, RAII |
| `08_static_members.cpp` | Static data, static methods, Singleton preview |

## How to compile and run a single file

```bash
g++ -std=c++17 -Wall 01_classes_and_objects.cpp -o out && ./out
```

## Recommended order

Do them top to bottom — each file builds on ideas from the previous one.
After finishing all 8, you are ready to tackle the LLD problem assignments.
