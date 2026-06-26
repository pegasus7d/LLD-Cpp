// =============================================================
// ASSIGNMENT 5: Virtual Functions and Polymorphism
// =============================================================
//
// WHY VIRTUAL FUNCTIONS?
//   Without virtual, when you call a method through a base class
//   pointer, C++ always calls the BASE class version — even if
//   the pointer actually points to a derived object.
//   With virtual, C++ figures out the REAL type at runtime and
//   calls the correct overridden version.
//   This is called RUNTIME POLYMORPHISM.
//
// -------------------------------------------------------------
// TASK 1: Experience the problem WITHOUT virtual first
// -------------------------------------------------------------
//   - Create a base class "Shape" with a method area() that
//     prints "Shape has no area"
//   - Create a derived class "Circle" that overrides area()
//     and prints the actual circle area (pi * r * r)
//   - In main, do this:
//       Shape* s = new Circle(5);
//       s->area();   // <-- what gets printed? WHY?
//   - Notice: without virtual, it prints the BASE version.
//     This is the bug virtual functions solve.
//
// -------------------------------------------------------------
// TASK 2: Fix it with the virtual keyword
// -------------------------------------------------------------
//   - Add the keyword "virtual" before area() in Shape
//   - Now re-run — the correct Circle area should print
//   - Add "override" keyword in Circle's area() for safety
//     HINT: override tells the compiler "I intend to override"
//           and gives an error if you accidentally misspell it
//
// -------------------------------------------------------------
// TASK 3: Pure virtual functions (Abstract class)
// -------------------------------------------------------------
//   - Make Shape's area() a PURE virtual function:
//       virtual double area() = 0;
//   - This makes Shape an ABSTRACT class — it cannot be
//     instantiated directly (Shape s; will NOT compile)
//   - Now create three concrete derived classes:
//       Circle    — members: radius
//                   area() = 3.14159 * radius * radius
//       Rectangle — members: width, height
//                   area() = width * height
//       Triangle  — members: base, height
//                   area() = 0.5 * base * height
//   - Each must override area() and also a method:
//       draw() — prints "<ShapeName> is being drawn"
//
// -------------------------------------------------------------
// TASK 4: Polymorphism in action
// -------------------------------------------------------------
//   - Create a vector<Shape*> (or vector<unique_ptr<Shape>>)
//   - Push a Circle, a Rectangle, and a Triangle into it
//   - Loop through the vector and call area() on each
//   - Notice: same call, different behaviour — that is polymorphism
//
// -------------------------------------------------------------
// TASK 5: Virtual destructor — VERY IMPORTANT
// -------------------------------------------------------------
//   - Add a destructor to Shape that prints "Shape destroyed"
//   - Add a destructor to Circle that prints "Circle destroyed"
//   - Delete a Circle through a Shape* pointer WITHOUT virtual
//     destructor — only "Shape destroyed" prints (memory leak!)
//   - Now add "virtual" to Shape's destructor and try again
//     Both destructors should now print in correct order
//   - RULE: If a class has virtual functions, ALWAYS make its
//     destructor virtual
//
// -------------------------------------------------------------
// THINK ABOUT:
//   What is the vtable and how does C++ use it at runtime?
//   What is the difference between overriding and overloading?
//   When would you use an abstract class vs a concrete base class?
// -------------------------------------------------------------
