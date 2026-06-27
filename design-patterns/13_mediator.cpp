// =============================================================
// DESIGN PATTERN 13: Mediator
// =============================================================
//
// WHAT IS MEDIATOR?
//   Defines an object that encapsulates how a set of objects interact.
//   Promotes loose coupling by preventing objects from referring to
//   each other explicitly — they talk through the mediator.
//
// WHEN TO USE:
//   - Chat room (users don't know each other, only the chat room)
//   - Air traffic control (planes don't talk to each other, only ATC)
//   - UI forms (button enables textbox when checkbox is clicked)
//
// -------------------------------------------------------------
// TASK: Build a Chat Room using Mediator pattern
// -------------------------------------------------------------
//
// Step 1: Forward declare "ChatRoom"
//
// Step 2: Create "User" class
//   - members: name (string), chatRoom (ChatRoom*)
//   - constructor takes name and ChatRoom*
//   - send(string message) — calls chatRoom->broadcast(this, message)
//   - receive(string from, string message)
//       prints "<name> received from <from>: <message>"
//   - getName() — returns name
//
// Step 3: Create "ChatRoom" class (the mediator)
//   - member: users (vector<User*>)
//   - join(User* user) — adds user to the room, prints "<name> joined"
//   - leave(User* user) — removes user from the room
//   - broadcast(User* sender, string message)
//       sends message to ALL users EXCEPT the sender
//
// Step 4: In main()
//   - Create a ChatRoom
//   - Create 3 users — all join the chat room
//   - User 1 sends a message — users 2 and 3 should receive it
//   - User 2 sends a message — users 1 and 3 should receive it
//   - User 3 leaves
//   - User 1 sends again — only user 2 should receive it
//
// -------------------------------------------------------------
// THINK ABOUT:
//   How does Mediator reduce coupling between objects?
//   What is the difference between Mediator and Observer?
//   What is the risk of the Mediator becoming too complex?
// -------------------------------------------------------------
