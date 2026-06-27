// =============================================================
// DESIGN PATTERN 16: Prototype
// =============================================================
//
// WHAT IS PROTOTYPE?
//   Creates new objects by copying (cloning) an existing object.
//   Useful when object creation is expensive and you want a
//   copy with slight variations.
//
// WHEN TO USE:
//   - Cloning game characters/enemies with slight variations
//   - Duplicating complex configured objects
//   - When creating an object from scratch is expensive
//
// -------------------------------------------------------------
// TASK: Build a Game Enemy spawner using Prototype
// -------------------------------------------------------------
//
// Step 1: Create an abstract "Enemy" class
//   - members: name (string), health (int), damage (int)
//   - constructor takes all three
//   - pure virtual: clone() — returns Enemy*
//   - virtual: display() — prints name, health, damage
//   - virtual destructor
//
// Step 2: Create concrete enemy classes:
//   - Goblin  — health=50, damage=10, clone() returns new Goblin(*this)
//   - Orc     — health=150, damage=30, clone() returns new Orc(*this)
//   - Dragon  — health=500, damage=100, clone() returns new Dragon(*this)
//
// Step 3: Create "EnemyRegistry" class
//   - member: prototypes (map<string, Enemy*>)
//   - registerPrototype(string key, Enemy* e) — stores prototype
//   - spawn(string key) — finds prototype and returns prototype->clone()
//                         returns nullptr if key not found
//   - destructor — deletes all prototypes
//
// Step 4: In main()
//   - Create an EnemyRegistry
//   - Register one Goblin, one Orc, one Dragon as prototypes
//   - Spawn 2 Goblins and 1 Dragon using spawn()
//   - Modify spawned Goblin's health (should not affect the prototype)
//   - Display all spawned enemies
//   - Delete spawned enemies
//
// -------------------------------------------------------------
// THINK ABOUT:
//   What is shallow copy vs deep copy in clone()?
//   How is Prototype different from Factory?
//   When would you prefer Prototype over new Object()?
// -------------------------------------------------------------
