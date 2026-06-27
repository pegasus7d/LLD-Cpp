// =============================================================
// DESIGN PATTERN 1: Singleton
// =============================================================
//
// WHAT IS SINGLETON?
//   Ensures a class has ONLY ONE instance and provides a global
//   point of access to it. The constructor is private so no one
//   can create a new instance directly.
//
// WHEN TO USE:
//   - Logger (one log file for the whole app)
//   - Database connection (one connection pool)
//   - Configuration manager (one config for the app)
//
// -------------------------------------------------------------
// TASK: Build a thread-safe Logger using Singleton
// -------------------------------------------------------------
//
// Create a class "Logger" with:
//   - private constructor
//   - private static Logger* instance
//   - private static mutex mtx (for thread safety)
//   - private vector<string> logs (stores log history)
//
//   Public static method:
//     - getInstance() — if instance is null, create it (thread-safe)
//                       always return the same instance
//
//   Public methods:
//     - log(string level, string message)
//         stores and prints: "[<level>] <message>"
//     - showHistory() — prints all stored logs
//     - clearLogs() — clears the log history
//
// In main():
//   - Get instance via Logger::getInstance()
//   - Log several messages with different levels
//     ("INFO", "WARNING", "ERROR")
//   - Get instance again in a different pointer
//   - Verify both pointers are the same (c1 == c2)
//   - Show history
//   - Clear and show again
//
// -------------------------------------------------------------
// HINT: Thread-safe getInstance using mutex:
//   static Logger* getInstance() {
//       lock_guard<mutex> lock(mtx);
//       if (instance == nullptr)
//           instance = new Logger();
//       return instance;
//   }
//   Include <mutex> for this
//
// -------------------------------------------------------------
// THINK ABOUT:
//   What is the downside of Singleton?
//   Why is it hard to unit test code that uses Singleton?
//   What is "double-checked locking" and why is it used?
// -------------------------------------------------------------
