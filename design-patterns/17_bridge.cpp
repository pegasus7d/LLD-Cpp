// =============================================================
// DESIGN PATTERN 17: Bridge
// =============================================================
//
// WHAT IS BRIDGE?
//   Decouples an abstraction from its implementation so that
//   the two can vary independently. Instead of inheritance,
//   it uses composition.
//
// WHEN TO USE:
//   - When you want to avoid a permanent binding between abstraction
//     and implementation
//   - Shapes with renderers (Circle+VectorRenderer, Circle+RasterRenderer)
//   - Remote controls with devices (TV, Radio, same remote)
//
// -------------------------------------------------------------
// TASK: Build a Shape rendering system with Bridge
// -------------------------------------------------------------
//
// Step 1: Create "IRenderer" interface (the implementation side)
//   - pure virtual: renderCircle(double radius)
//   - pure virtual: renderRectangle(double w, double h)
//
// Step 2: Create two renderers:
//   - VectorRenderer
//       renderCircle() prints "Drawing Circle with radius <r> as vector"
//       renderRectangle() prints "Drawing Rectangle <w>x<h> as vector"
//
//   - RasterRenderer
//       renderCircle() prints "Drawing Circle with radius <r> as raster pixels"
//       renderRectangle() prints "Drawing Rectangle <w>x<h> as raster pixels"
//
// Step 3: Create abstract "Shape" class (the abstraction side)
//   - member: renderer (IRenderer*) — the bridge
//   - constructor takes IRenderer*
//   - pure virtual: draw()
//   - pure virtual: resize(double factor)
//
// Step 4: Create concrete shapes:
//   - Circle
//       members: radius (double)
//       draw() — calls renderer->renderCircle(radius)
//       resize(factor) — multiplies radius by factor
//
//   - Rectangle
//       members: width, height (double)
//       draw() — calls renderer->renderRectangle(width, height)
//       resize(factor) — multiplies both by factor
//
// Step 5: In main()
//   - Create a VectorRenderer and RasterRenderer
//   - Draw a Circle with VectorRenderer
//   - Draw the same Circle with RasterRenderer (swap renderer)
//   - Draw a Rectangle with both renderers
//   - Resize and draw again
//
// -------------------------------------------------------------
// THINK ABOUT:
//   How is Bridge different from Adapter?
//   What would happen if you used inheritance instead of composition here?
//   How does Bridge follow the Open/Closed principle?
// -------------------------------------------------------------
