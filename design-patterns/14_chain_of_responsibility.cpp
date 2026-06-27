// =============================================================
// DESIGN PATTERN 14: Chain of Responsibility
// =============================================================
//
// WHAT IS CHAIN OF RESPONSIBILITY?
//   Passes a request along a chain of handlers. Each handler
//   decides to process the request or pass it to the next handler.
//   Decouples sender from receiver.
//
// WHEN TO USE:
//   - Middleware in web frameworks (auth → validation → rate limit → handler)
//   - Support tickets (L1 → L2 → L3 support)
//   - Expense approval (manager → director → VP → CEO)
//
// -------------------------------------------------------------
// TASK: Build an Expense Approval system
// -------------------------------------------------------------
//
// Step 1: Create a "Request" struct
//   - members: description (string), amount (double)
//
// Step 2: Create abstract "Approver" class
//   - member: next (Approver* = nullptr)
//   - setNext(Approver* next) — sets the next handler
//   - pure virtual: approve(Request req)
//
// Step 3: Create concrete approvers:
//   - Manager   — can approve up to 1000
//       if amount <= 1000: prints "Manager approved: <desc> for <amount>"
//       else: passes to next
//
//   - Director  — can approve up to 5000
//       if amount <= 5000: prints "Director approved: <desc> for <amount>"
//       else: passes to next
//
//   - VP        — can approve up to 20000
//       if amount <= 20000: prints "VP approved: <desc> for <amount>"
//       else: passes to next
//
//   - CEO       — approves anything
//       prints "CEO approved: <desc> for <amount>"
//       if no next: prints "Request denied: exceeds all limits"
//
// Step 4: In main()
//   - Set up the chain: Manager → Director → VP → CEO
//   - Submit these requests:
//       {"Team lunch", 500}       → Manager approves
//       {"Software license", 3000} → Director approves
//       {"Server upgrade", 15000}  → VP approves
//       {"Acquisition", 100000}   → CEO approves
//
// -------------------------------------------------------------
// THINK ABOUT:
//   What happens if no handler in the chain processes the request?
//   How is this different from a simple if-else if chain?
//   Can a handler in the chain process AND pass to next?
// -------------------------------------------------------------
