// =============================================================
// ASSIGNMENT 6: Encapsulation
// =============================================================
//
// WHAT IS ENCAPSULATION?
//   Encapsulation means bundling data and the methods that
//   operate on that data inside one class, AND restricting
//   direct access to the data from outside.
//   It protects the internal state of an object.
//
// -------------------------------------------------------------
// TASK 1: Build a class "BankAccount" with encapsulation
// -------------------------------------------------------------
//   Private members:
//     - accountNumber (string)
//     - ownerName     (string)
//     - balance       (double)
//     - pin           (int)
//
//   Public methods:
//     - constructor: takes accountNumber, ownerName, initialBalance, pin
//     - getAccountNumber() — returns account number (read-only)
//     - getOwnerName()     — returns owner name     (read-only)
//     - getBalance()       — returns balance         (read-only)
//       NOTE: no setBalance() — balance should only change
//             through controlled deposit/withdraw methods
//
//     - deposit(double amount)
//         validate: amount must be > 0
//         if valid: add to balance, print success message
//         if not:   print error message
//
//     - withdraw(double amount, int enteredPin)
//         validate: enteredPin must match stored pin
//         validate: amount must be > 0
//         validate: balance must be sufficient
//         if all valid: subtract from balance, print success
//         if pin wrong: print "Incorrect PIN"
//         if insufficient: print "Insufficient funds"
//
//     - changePin(int oldPin, int newPin)
//         validate old pin, then update to newPin
//
// -------------------------------------------------------------
// TASK 2: In main()
// -------------------------------------------------------------
//   - Create a BankAccount
//   - Try depositing a negative amount — should fail gracefully
//   - Deposit a valid amount
//   - Try withdrawing with wrong pin — should fail
//   - Withdraw with correct pin
//   - Print balance at each step
//
// -------------------------------------------------------------
// TASK 3: Build a class "Student" with validation in setters
// -------------------------------------------------------------
//   Private members:
//     - name  (string)
//     - age   (int)      — must be between 5 and 100
//     - grade (double)   — must be between 0.0 and 10.0
//
//   Public methods:
//     - constructor with all three members
//     - getters for all three
//     - setAge(int a)       — validate range before setting
//     - setGrade(double g)  — validate range before setting
//     - display()           — prints all info
//
// -------------------------------------------------------------
// THINK ABOUT:
//   Why is direct access to "balance" dangerous?
//   What is the difference between a getter and a setter?
//   When should you NOT provide a setter for a member?
// -------------------------------------------------------------
