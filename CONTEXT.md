# LLD C++ Learning — Context

## Goal
Learning Low Level Design (LLD) through hands-on C++ practice.

## How This Works
- Each subfolder contains a C++ assignment file for a classic LLD problem.
- The file has **commented instructions** describing what each class, method, and enum should do.
- Your job is to **fill in the implementation** — no peeking at `awesome-low-level-design/solutions/cpp/` until you're done!
- Reference problem statements live in `../awesome-low-level-design/problems/`.

## Problems (in recommended order)
| # | Problem | Folder | Key Concepts |
|---|---------|--------|--------------|
| 1 | Parking Lot | `parkinglot/` | Singleton, enums, multi-level |
| 2 | Vending Machine | `vendingmachine/` | State pattern, inventory |
| 3 | LRU Cache | `lrucache/` | doubly linked list + hashmap |
| 4 | Elevator System | `elevatorsystem/` | State, scheduling |
| 5 | Library Management | `librarymanagementsystem/` | Relationships, search |

## Tips
- Start with the enums and data classes, then move to logic classes.
- Think about which class owns which responsibility before writing code.
- Use `std::mutex` where thread safety is needed.
- Compile with: `g++ -std=c++17 -o out *.cpp && ./out`
