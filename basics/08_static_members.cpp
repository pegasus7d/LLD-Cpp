// =============================================================
// ASSIGNMENT 8: Static Members and Methods
// =============================================================
//
// WHAT IS A STATIC MEMBER?
//   A static member belongs to the CLASS, not to any specific
//   object. All objects of the class share the same static member.
//   It exists even if no object has been created yet.
//
// -------------------------------------------------------------
// TASK 1: Static counter — class "Employee"
// -------------------------------------------------------------
//   Members:
//     - name       (string)       — per object
//     - employeeId (int)          — per object, auto-assigned
//     - salary     (double)       — per object
//     - static int totalEmployees — shared across all objects
//
//   Methods:
//     - constructor: takes name and salary
//         auto-assigns employeeId = ++totalEmployees
//         prints "Employee <name> hired. Total: <count>"
//     - destructor: decrements totalEmployees
//         prints "Employee <name> left. Total: <count>"
//     - display() — prints name, id, salary
//     - static getTotalEmployees() — returns totalEmployees
//       NOTE: static methods can ONLY access static members
//             they have no "this" pointer
//
//   HINT: Define static member OUTSIDE the class:
//         int Employee::totalEmployees = 0;
//
//   In main():
//     - Create 3 employees
//     - Print total using Employee::getTotalEmployees()
//     - Let one go out of scope, print total again
//
// -------------------------------------------------------------
// TASK 2: Static method as a utility — class "MathUtils"
// -------------------------------------------------------------
//   Create a utility class where every method is static:
//     - static int    add(int a, int b)
//     - static int    subtract(int a, int b)
//     - static double power(double base, int exp)
//     - static bool   isPrime(int n)
//     - static int    factorial(int n)
//
//   These should be callable WITHOUT creating an object:
//     MathUtils::isPrime(7)
//
// -------------------------------------------------------------
// TASK 3: Singleton using static (preview of a design pattern)
// -------------------------------------------------------------
//   Create a class "AppConfig" that can only have ONE instance:
//
//   - private constructor (so no one can call new AppConfig)
//   - private static AppConfig* instance
//   - public static getInstance() method:
//       if instance is nullptr, create it
//       always return the same instance
//   - members: appName (string), version (string)
//   - method: display() — prints appName and version
//
//   In main():
//     AppConfig* c1 = AppConfig::getInstance();
//     AppConfig* c2 = AppConfig::getInstance();
//     // c1 and c2 should point to the SAME object
//     // verify: print (c1 == c2)
//
// -------------------------------------------------------------
// THINK ABOUT:
//   Why can a static method not access non-static members?
//   What is the Singleton pattern and when is it useful?
//   What are the downsides of Singleton?
// -------------------------------------------------------------
