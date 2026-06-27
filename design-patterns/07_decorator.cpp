// =============================================================
// DESIGN PATTERN 7: Decorator
// =============================================================
//
// WHAT IS DECORATOR?
//   Attaches additional behaviour to an object dynamically.
//   Decorators provide a flexible alternative to subclassing
//   for extending functionality.
//
// WHEN TO USE:
//   - Adding features to objects at runtime
//   - Text formatting (bold, italic, underline)
//   - Coffee with add-ons (milk, sugar, caramel)
//   - Logging, caching, authentication wrappers
//
// -------------------------------------------------------------
// TASK: Build a Coffee ordering system using Decorator pattern
// -------------------------------------------------------------
//
// Step 1: Create an interface "ICoffee"
//   - pure virtual: getDescription()
//   - pure virtual: double getCost()
//   - virtual destructor
//
// Step 2: Create base coffee class "SimpleCoffee"
//   - getDescription() returns "Simple Coffee"
//   - getCost() returns 50.0
//
// Step 3: Create abstract "CoffeeDecorator" class
//   - inherits ICoffee
//   - member: ICoffee* coffee (pointer to wrapped coffee)
//   - constructor takes ICoffee*
//   - getDescription() calls coffee->getDescription()
//   - getCost() calls coffee->getCost()
//
// Step 4: Create concrete decorators:
//   - MilkDecorator
//       getDescription() returns coffee->getDescription() + ", Milk"
//       getCost() returns coffee->getCost() + 10.0
//
//   - SugarDecorator
//       getDescription() returns coffee->getDescription() + ", Sugar"
//       getCost() returns coffee->getCost() + 5.0
//
//   - CaramelDecorator
//       getDescription() returns coffee->getDescription() + ", Caramel"
//       getCost() returns coffee->getCost() + 20.0
//
// Step 5: In main()
//   ICoffee* coffee = new SimpleCoffee();
//   coffee = new MilkDecorator(coffee);
//   coffee = new SugarDecorator(coffee);
//   coffee = new CaramelDecorator(coffee);
//   cout << coffee->getDescription() << endl;
//   cout << "Cost: " << coffee->getCost() << endl;
//   delete coffee;
//
// -------------------------------------------------------------
// THINK ABOUT:
//   How does Decorator differ from inheritance for adding features?
//   Why is wrapping better than subclassing here?
//   What happens when you delete the outermost decorator?
// -------------------------------------------------------------
