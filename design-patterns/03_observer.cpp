// =============================================================
// DESIGN PATTERN 3: Observer
// =============================================================
//
// WHAT IS OBSERVER?
//   Defines a one-to-many relationship. When one object (Subject)
//   changes state, all its dependents (Observers) are notified
//   automatically.
//
// WHEN TO USE:
//   - Stock price updates notifying multiple displays
//   - Social media — one post notifies all followers
//   - Pub-Sub systems
//   - Event handling systems
//
// -------------------------------------------------------------
// TASK: Build a Stock Market notification system
// -------------------------------------------------------------
//
// Step 1: Create an interface "IObserver"
//   - pure virtual: update(string stockName, double price)
//
// Step 2: Create an interface "ISubject"
//   - pure virtual: addObserver(IObserver* o)
//   - pure virtual: removeObserver(IObserver* o)
//   - pure virtual: notifyObservers()
//
// Step 3: Create "StockMarket" class implementing ISubject
//   - members: stockName (string), price (double),
//              observers (vector<IObserver*>)
//   - addObserver() — adds to vector
//   - removeObserver() — removes from vector
//   - notifyObservers() — calls update() on all observers
//   - setPrice(double price) — updates price and calls notifyObservers()
//
// Step 4: Create three Observer classes:
//   - MobileApp    — update() prints "MobileApp: <stock> is now <price>"
//   - WebDashboard — update() prints "WebDashboard: <stock> is now <price>"
//   - EmailAlert   — update() prints "EmailAlert: <stock> is now <price>"
//
// Step 5: In main()
//   - Create a StockMarket for "AAPL"
//   - Create all three observers
//   - Add all observers to the stock
//   - Call setPrice() twice — all three should be notified
//   - Remove one observer
//   - Call setPrice() again — only two should be notified
//
// -------------------------------------------------------------
// THINK ABOUT:
//   What is the difference between push and pull model in Observer?
//   How does Observer relate to the Pub-Sub pattern?
//   What happens if an observer throws an exception during update?
// -------------------------------------------------------------
