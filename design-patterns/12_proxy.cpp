// =============================================================
// DESIGN PATTERN 12: Proxy
// =============================================================
//
// WHAT IS PROXY?
//   Provides a surrogate or placeholder for another object to
//   control access to it. The proxy can add caching, lazy loading,
//   access control, or logging without changing the real object.
//
// TYPES:
//   - Virtual Proxy   — lazy loading (don't load until needed)
//   - Protection Proxy — access control
//   - Caching Proxy   — cache expensive results
//
// WHEN TO USE:
//   - Loading large images only when displayed
//   - Restricting database access based on user role
//   - Caching API responses
//
// -------------------------------------------------------------
// TASK: Build an Image Viewer with lazy loading via Proxy
// -------------------------------------------------------------
//
// Step 1: Create an interface "IImage"
//   - pure virtual: display()
//   - pure virtual: getFileName()
//
// Step 2: Create "RealImage" class implementing IImage
//   - member: fileName (string)
//   - constructor — prints "Loading image from disk: <fileName>"
//                   (simulates expensive disk load)
//   - display() — prints "Displaying: <fileName>"
//   - getFileName() — returns fileName
//
// Step 3: Create "ImageProxy" class implementing IImage
//   - members: fileName (string), realImage (RealImage* = nullptr)
//   - constructor — stores fileName, does NOT create RealImage yet
//   - display() — if realImage is null, create it (lazy load)
//                 then call realImage->display()
//   - getFileName() — returns fileName
//   - destructor — deletes realImage if not null
//
// Step 4: In main()
//   - Create 3 ImageProxy objects
//   - Print "Created proxies" (no disk load should happen yet)
//   - Call display() on only the first two
//   - Call display() on the first one again (no reload — already loaded)
//   - Observe: RealImage is only created when display() is first called
//
// -------------------------------------------------------------
// THINK ABOUT:
//   What is the difference between Proxy and Decorator?
//   How does Proxy differ from Adapter?
//   Where would you use a Protection Proxy in a real app?
// -------------------------------------------------------------
