// =============================================================
// MINI ASSIGNMENT: Interfaces
// =============================================================
//
// WHAT IS AN INTERFACE IN C++?
//   A class with ONLY pure virtual functions — no data members,
//   no implementation. It defines a CONTRACT that any class
//   implementing it must follow.
//
// WHY USE INTERFACES?
//   - Forces classes to implement certain behaviour
//   - Allows different classes to be used interchangeably
//   - Supports multiple inheritance safely
//
// -------------------------------------------------------------
// TASK 1: IShape interface with multiple implementations
// -------------------------------------------------------------
//
// Step 1: Define an interface "IShape"
//   - pure virtual: double area()
//   - pure virtual: double perimeter()
//   - pure virtual: void draw()
//   - virtual destructor
//
// Step 2: Implement three classes:
//   - Circle     (member: radius)
//                area()      = 3.14159 * r * r
//                perimeter() = 2 * 3.14159 * r
//                draw()      = prints "Drawing Circle"
//
//   - Rectangle  (members: width, height)
//                area()      = width * height
//                perimeter() = 2 * (width + height)
//                draw()      = prints "Drawing Rectangle"
//
//   - Triangle   (members: a, b, c sides, base, height)
//                area()      = 0.5 * base * height
//                perimeter() = a + b + c
//                draw()      = prints "Drawing Triangle"
//
// Step 3: In main()
//   - Create a vector<IShape*> with all three shapes
//   - Loop and call draw(), area(), perimeter() on each
//   - Clean up memory
//
// -------------------------------------------------------------
// TASK 2: Multiple interfaces on one class
// -------------------------------------------------------------
//
// Define two interfaces:
//   IPlayable   — pure virtual: play()
//   IDownloadable — pure virtual: download()
//
// Create a class "Song" that implements BOTH:
//   - play()     — prints "Playing the song"
//   - download() — prints "Downloading the song"
//
// In main():
//   Song s;
//   IPlayable* p = &s;
//   p->play();
//   IDownloadable* d = &s;
//   d->download();
//
// This shows a single class satisfying multiple contracts
//
// -------------------------------------------------------------
// THINK ABOUT:
//   What is the difference between an interface and an abstract class?
//   Can an interface have data members? Should it?
//   Why is virtual destructor important in interfaces?
// -------------------------------------------------------------
