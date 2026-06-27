// =============================================================
// DESIGN PATTERN 6: State
// =============================================================
//
// WHAT IS STATE?
//   Allows an object to change its behaviour when its internal
//   state changes. The object will appear to change its class.
//   Instead of giant if-else chains, each state is a separate class.
//
// WHEN TO USE:
//   - Vending machine (idle, has money, item selected, dispensing)
//   - Traffic light (red, yellow, green)
//   - ATM (idle, card inserted, PIN entered, transaction)
//   - Elevator (moving up, moving down, idle, door open)
//
// -------------------------------------------------------------
// TASK: Build a Traffic Light system using State pattern
// -------------------------------------------------------------
//
// Step 1: Forward declare "TrafficLight"
//
// Step 2: Create an interface "ITrafficLightState"
//   - pure virtual: handle(TrafficLight* light)
//   - pure virtual: getColor()
//   - virtual destructor
//
// Step 3: Create three state classes:
//   - RedState
//       handle() — prints "RED: Stop! Switching to Green..."
//                  changes light's state to GreenState
//       getColor() — returns "RED"
//
//   - GreenState
//       handle() — prints "GREEN: Go! Switching to Yellow..."
//                  changes light's state to YellowState
//       getColor() — returns "GREEN"
//
//   - YellowState
//       handle() — prints "YELLOW: Slow down! Switching to Red..."
//                  changes light's state to RedState
//       getColor() — returns "YELLOW"
//
// Step 4: Create "TrafficLight" class
//   - member: currentState (ITrafficLightState*)
//   - constructor: starts in RedState
//   - setState(ITrafficLightState* state) — updates currentState
//   - change() — calls currentState->handle(this)
//   - getColor() — returns currentState->getColor()
//   - destructor — deletes currentState
//
// Step 5: In main()
//   - Create a TrafficLight
//   - Call change() 6 times
//   - Print getColor() after each change
//   - Observe: Red → Green → Yellow → Red → Green → Yellow
//
// -------------------------------------------------------------
// THINK ABOUT:
//   How does State pattern eliminate large if-else chains?
//   What is the difference between State and Strategy pattern?
//   Who is responsible for state transitions — the state or the context?
// -------------------------------------------------------------
