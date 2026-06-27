// =============================================================
// DESIGN PATTERN 18: Flyweight
// =============================================================
//
// WHAT IS FLYWEIGHT?
//   Uses sharing to efficiently support a large number of
//   fine-grained objects. Splits object state into:
//   - Intrinsic state: shared, stored in flyweight (e.g. character shape)
//   - Extrinsic state: unique per instance, passed in (e.g. position)
//
// WHEN TO USE:
//   - Rendering thousands of trees in a game (share tree type data)
//   - Text editors (share character glyphs, vary position/color)
//   - Particle systems
//
// -------------------------------------------------------------
// TASK: Build a Forest simulator using Flyweight
// -------------------------------------------------------------
//
// Step 1: Create "TreeType" class (the flyweight — shared data)
//   - members: name (string), color (string), texture (string)
//   - display(int x, int y) — prints tree type + position
//     "Tree: <name>, Color: <color>, at (<x>, <y>)"
//
// Step 2: Create "TreeFactory" class
//   - member: static map<string, TreeType*> treeTypes
//   - static getTreeType(string name, string color, string texture)
//       if already exists in map, return it
//       else create new TreeType, store in map, return it
//   - static printStats() — prints how many unique tree types exist
//
// Step 3: Create "Tree" class (holds extrinsic state)
//   - members: x (int), y (int), type (TreeType*)
//   - constructor takes x, y, TreeType*
//   - display() — calls type->display(x, y)
//
// Step 4: Create "Forest" class
//   - member: trees (vector<Tree>)
//   - plantTree(int x, int y, string name, string color, string texture)
//       gets TreeType from factory, creates Tree, adds to vector
//   - display() — calls display() on all trees
//
// Step 5: In main()
//   - Create a Forest
//   - Plant 10 trees — use only 3 different tree types but vary positions
//   - Call forest.display()
//   - Call TreeFactory::printStats() — should show only 3 unique types
//     even though 10 trees were planted
//
// -------------------------------------------------------------
// THINK ABOUT:
//   How does Flyweight reduce memory usage?
//   What is the trade-off of using Flyweight?
//   What makes something intrinsic vs extrinsic state?
// -------------------------------------------------------------
