// =============================================================
// DESIGN PATTERN 19: Template Method
// =============================================================
//
// WHAT IS TEMPLATE METHOD?
//   Defines the skeleton of an algorithm in a base class, and
//   lets subclasses override specific steps without changing
//   the overall structure.
//
// WHEN TO USE:
//   - When multiple classes share the same algorithm structure
//     but differ in specific steps
//   - Data parsing (read file → parse → process → output)
//   - Report generation (fetch → format → export)
//   - Beverage making (boil water → brew → pour → add extras)
//
// -------------------------------------------------------------
// TASK: Build a Beverage maker using Template Method
// -------------------------------------------------------------
//
// Step 1: Create abstract "Beverage" class
//   - Final method: prepare() — the template method
//       calls in order:
//         1. boilWater()
//         2. brew()
//         3. pourInCup()
//         4. if(customerWantsExtras()) addExtras()
//
//   - Non-virtual (same for all): boilWater(), pourInCup()
//       boilWater() — prints "Boiling water"
//       pourInCup() — prints "Pouring in cup"
//
//   - Pure virtual: brew(), addExtras()
//
//   - Virtual hook: customerWantsExtras() — returns true by default
//     (subclasses can override to return false)
//
// Step 2: Create "Tea" class
//   - brew()      — prints "Steeping the tea"
//   - addExtras() — prints "Adding lemon"
//
// Step 3: Create "Coffee" class
//   - brew()                  — prints "Dripping coffee through filter"
//   - addExtras()             — prints "Adding sugar and milk"
//   - customerWantsExtras()   — returns false (no extras by default)
//
// Step 4: In main()
//   - Create Tea and Coffee objects
//   - Call prepare() on each
//   - Observe: same steps, different behaviour
//
// -------------------------------------------------------------
// THINK ABOUT:
//   What is a "hook" in Template Method pattern?
//   How is Template Method different from Strategy?
//   Why is the template method usually declared as non-virtual final?
// -------------------------------------------------------------
