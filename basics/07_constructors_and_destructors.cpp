// =============================================================
// ASSIGNMENT 7: Constructors and Destructors
// =============================================================
//
// WHAT IS A CONSTRUCTOR?
//   A special method called automatically when an object is
//   created. It has the same name as the class, no return type.
//
// WHAT IS A DESTRUCTOR?
//   A special method called automatically when an object is
//   destroyed (goes out of scope or is deleted).
//   Name is ~ClassName(), no parameters, no return type.
//
// -------------------------------------------------------------
// TASK 1: Types of constructors — class "Matrix"
// -------------------------------------------------------------
//   Members:
//     - rows (int)
//     - cols (int)
//     - data (2D vector or dynamically allocated array)
//
//   Implement these constructors:
//
//   a) DEFAULT constructor
//      - sets rows=0, cols=0
//      - prints "Default constructor called"
//
//   b) PARAMETERISED constructor
//      - takes rows and cols
//      - allocates the 2D data structure, fills with 0
//      - prints "Parameterised constructor: <rows>x<cols>"
//
//   c) COPY constructor
//      - takes a const Matrix& other
//      - performs a DEEP copy (copies actual data, not pointer)
//      - prints "Copy constructor called"
//      - HINT: if you just copy a pointer you get two objects
//              sharing the same memory — disaster when one deletes
//
//   d) DESTRUCTOR
//      - frees allocated memory
//      - prints "Destructor called for <rows>x<cols> matrix"
//
//   Add a method fill(int val) — sets every element to val
//   Add a method display() — prints the matrix
//
// -------------------------------------------------------------
// TASK 2: Constructor initialiser list
// -------------------------------------------------------------
//   Create a class "Circle" with:
//     - const double PI  (must be initialised in initialiser list)
//     - double radius
//
//   Constructor MUST use initialiser list:
//     Circle(double r) : PI(3.14159), radius(r) {}
//
//   Why? const members CANNOT be assigned in the body,
//   they MUST be initialised in the initialiser list.
//
// -------------------------------------------------------------
// TASK 3: Observe construction and destruction order
// -------------------------------------------------------------
//   Create a class "Logger" that just prints in its constructor
//   and destructor (with a name passed to the constructor).
//
//   In main(), create:
//     Logger a("A");
//     {
//         Logger b("B");
//         Logger c("C");
//     }   // <-- what order do B and C get destroyed here?
//     Logger d("D");
//
//   Predict the output BEFORE running, then verify.
//   RULE: Objects are destroyed in REVERSE order of creation.
//
// -------------------------------------------------------------
// THINK ABOUT:
//   What is the Rule of Three? (if you define destructor,
//   copy constructor, or copy assignment — define all three)
//   What is the Rule of Five in modern C++?
//   What is a shallow copy vs a deep copy?
// -------------------------------------------------------------
