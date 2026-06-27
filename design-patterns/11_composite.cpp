// =============================================================
// DESIGN PATTERN 11: Composite
// =============================================================
//
// WHAT IS COMPOSITE?
//   Composes objects into tree structures to represent part-whole
//   hierarchies. Lets clients treat individual objects and
//   compositions of objects uniformly.
//
// WHEN TO USE:
//   - File system (files and folders treated the same)
//   - UI components (a panel contains buttons, which contain icons)
//   - Organization hierarchy (employee vs manager)
//
// -------------------------------------------------------------
// TASK: Build a File System using Composite pattern
// -------------------------------------------------------------
//
// Step 1: Create an interface "IFileSystemItem"
//   - pure virtual: display(int indent = 0)
//   - pure virtual: getSize()
//   - virtual destructor
//
// Step 2: Create "File" class implementing IFileSystemItem
//   - members: name (string), size (int)
//   - display(indent) — prints spaces*indent + name + size
//   - getSize() — returns size
//
// Step 3: Create "Folder" class implementing IFileSystemItem
//   - members: name (string), children (vector<IFileSystemItem*>)
//   - add(IFileSystemItem* item) — adds to children
//   - display(indent) — prints folder name, then calls display(indent+2)
//                       on all children
//   - getSize() — returns sum of all children's getSize()
//   - destructor — deletes all children
//
// Step 4: In main()
//   Build this structure:
//     root/
//       documents/
//         resume.pdf (100KB)
//         notes.txt  (20KB)
//       pictures/
//         photo.jpg  (500KB)
//       readme.txt   (5KB)
//
//   - root->display()
//   - cout << "Total size: " << root->getSize() << endl
//   - delete root (should delete everything)
//
// -------------------------------------------------------------
// THINK ABOUT:
//   Why is Composite powerful for tree structures?
//   What happens if you call getSize() on a File vs a Folder?
//   How does this pattern relate to recursion?
// -------------------------------------------------------------
