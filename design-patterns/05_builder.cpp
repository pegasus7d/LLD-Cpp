// =============================================================
// DESIGN PATTERN 5: Builder
// =============================================================
//
// WHAT IS BUILDER?
//   Separates the construction of a complex object from its
//   representation. Allows you to build the object step by step,
//   only setting the fields you need.
//
// WHEN TO USE:
//   - Objects with many optional parameters (avoid telescoping constructors)
//   - Building complex objects like HTTP requests, SQL queries, pizzas
//   - When construction process must allow different representations
//
// -------------------------------------------------------------
// TASK: Build a "Pizza" ordering system using Builder pattern
// -------------------------------------------------------------
//
// Step 1: Create a "Pizza" class (the product)
//   - members: size (string), crust (string), sauce (string),
//              cheese (string), toppings (vector<string>)
//   - No public constructor — only Builder can create it
//   - display() — prints all pizza details
//
// Step 2: Create "PizzaBuilder" class inside or outside Pizza
//   - members: same as Pizza
//   - setSize(string size) — returns PizzaBuilder& (for chaining)
//   - setCrust(string crust) — returns PizzaBuilder&
//   - setSauce(string sauce) — returns PizzaBuilder&
//   - setCheese(string cheese) — returns PizzaBuilder&
//   - addTopping(string topping) — returns PizzaBuilder&
//   - build() — returns a Pizza object with all set values
//
// Step 3: In main()
//   Build two different pizzas using method chaining:
//
//   Pizza p1 = PizzaBuilder()
//       .setSize("Large")
//       .setCrust("Thin")
//       .setSauce("Tomato")
//       .setCheese("Mozzarella")
//       .addTopping("Mushrooms")
//       .addTopping("Olives")
//       .build();
//   p1.display();
//
//   Pizza p2 = PizzaBuilder()
//       .setSize("Medium")
//       .setCrust("Thick")
//       .build();   // minimal pizza, rest are defaults
//   p2.display();
//
// -------------------------------------------------------------
// HINT: Method chaining works by returning *this from each setter:
//   PizzaBuilder& setSize(string s) { size = s; return *this; }
//
// -------------------------------------------------------------
// THINK ABOUT:
//   What problem does Builder solve that constructors can't?
//   What is a "telescoping constructor" anti-pattern?
//   How is Builder different from Factory?
// -------------------------------------------------------------
