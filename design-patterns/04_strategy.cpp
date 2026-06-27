// =============================================================
// DESIGN PATTERN 4: Strategy
// =============================================================
//
// WHAT IS STRATEGY?
//   Defines a family of algorithms, encapsulates each one, and
//   makes them interchangeable. The algorithm can be swapped
//   at runtime without changing the class that uses it.
//
// WHEN TO USE:
//   - Multiple sorting algorithms (bubble, quick, merge)
//   - Multiple payment methods (card, UPI, wallet)
//   - Multiple shipping cost calculations
//   - Multiple discount strategies
//
// -------------------------------------------------------------
// TASK: Build a Payment system using Strategy pattern
// -------------------------------------------------------------
//
// Step 1: Create an interface "IPaymentStrategy"
//   - pure virtual: pay(double amount)
//   - pure virtual: getMethodName()
//   - virtual destructor
//
// Step 2: Create three concrete strategies:
//   - CreditCardPayment
//       members: cardNumber (string), cvv (string)
//       pay() prints "Paid <amount> using Credit Card ending <last4digits>"
//
//   - UPIPayment
//       members: upiId (string)
//       pay() prints "Paid <amount> using UPI: <upiId>"
//
//   - WalletPayment
//       members: walletBalance (double)
//       pay() — check if balance is sufficient
//               if yes: deduct and print "Paid <amount> from Wallet"
//               if no:  print "Insufficient wallet balance"
//
// Step 3: Create "ShoppingCart" class
//   - members: items (vector<pair<string,double>>),
//              paymentStrategy (IPaymentStrategy*)
//   - addItem(string name, double price) — adds to items
//   - setPaymentStrategy(IPaymentStrategy* strategy)
//   - checkout() — calculates total, calls strategy->pay(total)
//   - showItems() — prints all items and total
//
// Step 4: In main()
//   - Create a ShoppingCart and add 3 items
//   - Show items
//   - Pay using CreditCard
//   - Change strategy to UPI (setPaymentStrategy)
//   - Pay again — same cart, different payment method
//
// -------------------------------------------------------------
// THINK ABOUT:
//   How is Strategy different from simple if-else for payment type?
//   What is the Open/Closed principle and how does Strategy follow it?
//   How would you add a new payment method without changing ShoppingCart?
// -------------------------------------------------------------
