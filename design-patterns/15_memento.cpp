// =============================================================
// DESIGN PATTERN 15: Memento
// =============================================================
//
// WHAT IS MEMENTO?
//   Captures and externalises an object's internal state so it
//   can be restored later — without violating encapsulation.
//   This is the "undo" pattern.
//
// WHEN TO USE:
//   - Undo/redo in text editors
//   - Game save/load system
//   - Transaction rollback
//
// -------------------------------------------------------------
// TASK: Build a Text Editor with undo using Memento
// -------------------------------------------------------------
//
// Step 1: Create "EditorMemento" class (the saved state)
//   - member: content (string) — private
//   - constructor takes string
//   - getContent() — returns content
//   Only "TextEditor" should ideally access this (friend class optional)
//
// Step 2: Create "TextEditor" class (the originator)
//   - member: content (string)
//   - write(string text) — appends text to content
//   - getContent() — returns current content
//   - save() — returns EditorMemento(content)
//   - restore(EditorMemento m) — sets content = m.getContent()
//
// Step 3: Create "EditorHistory" class (the caretaker)
//   - member: history (stack<EditorMemento>)
//   - push(EditorMemento m) — saves a memento
//   - pop() — returns and removes the last saved memento
//   - isEmpty() — returns true if no history
//
// Step 4: In main()
//   TextEditor editor;
//   EditorHistory history;
//
//   editor.write("Hello");
//   history.push(editor.save());    // save state 1
//
//   editor.write(", World");
//   history.push(editor.save());    // save state 2
//
//   editor.write("!!!");
//   cout << editor.getContent();    // "Hello, World!!!"
//
//   editor.restore(history.pop());  // undo — back to "Hello, World"
//   cout << editor.getContent();
//
//   editor.restore(history.pop());  // undo — back to "Hello"
//   cout << editor.getContent();
//
// -------------------------------------------------------------
// THINK ABOUT:
//   Why is Memento better than just copying the whole object?
//   What is the caretaker's responsibility vs the originator's?
//   How would you implement redo in addition to undo?
// -------------------------------------------------------------
