// =============================================================
// DESIGN PATTERN 2: Factory
// =============================================================
//
// WHAT IS FACTORY?
//   A creational pattern that provides an interface for creating
//   objects without specifying the exact class. The factory
//   decides which class to instantiate based on input.
//
// WHEN TO USE:
//   - When you don't know ahead of time what class to instantiate
//   - When you want to centralise object creation logic
//   - Notification system, payment methods, vehicle creation
//
// -------------------------------------------------------------
// TASK: Build a Notification system using Factory pattern
// -------------------------------------------------------------
//
// Step 1: Create an interface "INotification"
//   - pure virtual: send(string message)
//   - pure virtual: getType()
//   - virtual destructor
//
// Step 2: Create three concrete classes:
//   - EmailNotification  — send() prints "Email: <message>"
//   - SMSNotification    — send() prints "SMS: <message>"
//   - PushNotification   — send() prints "Push: <message>"
//   Each implements getType() returning its type as string
//
// Step 3: Create "NotificationFactory" class
//   - static method: createNotification(string type)
//       if type == "EMAIL" return new EmailNotification
//       if type == "SMS"   return new SMSNotification
//       if type == "PUSH"  return new PushNotification
//       else return nullptr
//
// Step 4: In main()
//   - Use the factory to create one of each type
//   - Call send("Hello World") on each
//   - Print getType() for each
//   - Delete all objects
//
// -------------------------------------------------------------
// THINK ABOUT:
//   Why is Factory better than just writing:
//     if(type=="EMAIL") new EmailNotification() ?
//   What is the difference between Factory and Abstract Factory?
//   How would you add a new notification type (e.g. WhatsApp)?
// -------------------------------------------------------------
