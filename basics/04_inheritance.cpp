// =============================================================
// ASSIGNMENT 4: Inheritance
// =============================================================
//
// WHAT IS INHERITANCE?
//   Inheritance lets one class (child/derived) reuse the
//   attributes and methods of another class (parent/base).
//   It models an "IS-A" relationship.
//   Example: Dog IS-A Animal. Car IS-A Vehicle.
//
// -------------------------------------------------------------
// TASK 1: Create a base class "Animal"
// -------------------------------------------------------------
//   Private members:
//     - name (string)
//     - age  (int)
//
//   Public methods:
//     - constructor taking name and age
//     - getName() and getAge() — getters
//     - eat()   — prints "<name> is eating"
//     - sleep() — prints "<name> is sleeping"
//     - describe() — prints name and age
//
// -------------------------------------------------------------
// TASK 2: Create a derived class "Dog" that inherits Animal
// -------------------------------------------------------------
//   Additional private members:
//     - breed (string)
//
//   Public methods:
//     - constructor taking name, age, breed
//       HINT: use base class constructor in initialiser list
//       Dog(string n, int a, string b) : Animal(n, a), breed(b) {}
//     - bark()  — prints "<name> says: Woof!"
//     - fetch() — prints "<name> fetches the ball"
//     - describe() — prints breed in addition to base describe()
//       HINT: call the base version first: Animal::describe();
//
// -------------------------------------------------------------
// TASK 3: Create a derived class "Bird" that inherits Animal
// -------------------------------------------------------------
//   Additional members:
//     - canFly (bool)
//
//   Public methods:
//     - constructor taking name, age, canFly
//     - fly()  — if canFly, print "<name> is flying"
//              — else print "<name> cannot fly"
//     - describe() — print canFly status in addition to base
//
// -------------------------------------------------------------
// TASK 4: In main()
// -------------------------------------------------------------
//   - Create a Dog and a Bird
//   - Call eat(), sleep(), describe() on both
//   - Call bark() and fetch() on the Dog
//   - Call fly() on the Bird
//
// -------------------------------------------------------------
// TASK 5: Access specifiers in inheritance
// -------------------------------------------------------------
//   Change Animal's "name" from private to protected.
//   Now try accessing it directly inside Dog — does it compile?
//   Then change it back to private and use getName() instead.
//   Understand the difference:
//     private   → only accessible inside Animal itself
//     protected → accessible inside Animal AND its derived classes
//     public    → accessible everywhere
//
// -------------------------------------------------------------
// THINK ABOUT:
//   What does "public inheritance" mean vs "private inheritance"?
//   When does inheritance make sense vs composition (HAS-A)?
// -------------------------------------------------------------
