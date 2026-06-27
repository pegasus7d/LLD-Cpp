// =============================================================
// DESIGN PATTERN 8: Adapter
// =============================================================
//
// WHAT IS ADAPTER?
//   Converts the interface of a class into another interface
//   that clients expect. Lets incompatible interfaces work together.
//   Like a power plug adapter — same electricity, different socket.
//
// WHEN TO USE:
//   - Integrating third-party libraries with different interfaces
//   - Legacy code integration
//   - Payment gateway integration
//
// -------------------------------------------------------------
// TASK: Build a Payment gateway adapter
// -------------------------------------------------------------
//
// Step 1: Create the "IPaymentProcessor" interface (what your app expects)
//   - pure virtual: processPayment(double amount)
//   - pure virtual: refundPayment(double amount)
//
// Step 2: Create "LegacyPaymentGateway" (existing class with different interface)
//   - method: makePayment(int amountInPaise) — prints "Legacy: paid <amount> paise"
//   - method: reversePayment(int amountInPaise) — prints "Legacy: refunded <amount> paise"
//   NOTE: Legacy uses paise (int), your app uses rupees (double)
//
// Step 3: Create "PaymentGatewayAdapter" that implements IPaymentProcessor
//   - member: LegacyPaymentGateway* legacy
//   - constructor takes LegacyPaymentGateway*
//   - processPayment(double amount) — converts rupees to paise, calls legacy->makePayment()
//   - refundPayment(double amount)  — converts rupees to paise, calls legacy->reversePayment()
//   NOTE: 1 rupee = 100 paise
//
// Step 4: In main()
//   - Create a LegacyPaymentGateway
//   - Wrap it in a PaymentGatewayAdapter
//   - Use it as IPaymentProcessor*
//   - Call processPayment(150.50) — should convert to 15050 paise internally
//   - Call refundPayment(50.0)
//
// -------------------------------------------------------------
// THINK ABOUT:
//   What is the difference between Adapter and Facade?
//   When would you use a class adapter vs object adapter?
//   How does Adapter follow the Open/Closed principle?
// -------------------------------------------------------------
