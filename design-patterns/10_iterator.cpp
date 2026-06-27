// =============================================================
// DESIGN PATTERN 10: Iterator
// =============================================================
//
// WHAT IS ITERATOR?
//   Provides a way to access elements of a collection sequentially
//   without exposing its underlying structure. You can iterate
//   over a list, tree, or graph the same way.
//
// WHEN TO USE:
//   - Traverse a collection without knowing if it's array, list, or tree
//   - When you want multiple traversal strategies for the same collection
//
// -------------------------------------------------------------
// TASK: Build a Book Library with custom iterator
// -------------------------------------------------------------
//
// Step 1: Create a "Book" struct
//   - members: title (string), author (string), year (int)
//
// Step 2: Create an interface "IIterator"
//   - pure virtual: bool hasNext()
//   - pure virtual: Book next()
//
// Step 3: Create "BookCollection" class
//   - member: books (vector<Book>)
//   - addBook(Book b) — adds to books
//
//   Nested class "BookIterator" implementing IIterator:
//     - member: reference to books vector, index (int = 0)
//     - hasNext() — returns index < books.size()
//     - next() — returns books[index++]
//
//   - getIterator() — returns a BookIterator
//
// Step 4: In main()
//   - Create a BookCollection
//   - Add 4-5 books
//   - Get an iterator
//   - Use while(it.hasNext()) to print each book's title and author
//
// -------------------------------------------------------------
// THINK ABOUT:
//   How does Iterator relate to C++ range-for loops?
//   What is the difference between internal and external iterators?
//   How would you implement a reverse iterator?
// -------------------------------------------------------------
