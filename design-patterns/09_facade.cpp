// =============================================================
// DESIGN PATTERN 9: Facade
// =============================================================
//
// WHAT IS FACADE?
//   Provides a simplified interface to a complex subsystem.
//   Hides the complexity behind a single easy-to-use class.
//
// WHEN TO USE:
//   - Simplifying complex library/framework usage
//   - Home theatre system (one remote controls TV, sound, lights)
//   - Computer startup (one button starts CPU, memory, disk)
//
// -------------------------------------------------------------
// TASK: Build a Home Theatre Facade
// -------------------------------------------------------------
//
// Step 1: Create subsystem classes (complex internals):
//   - TV        — turnOn(), turnOff(), setInput(string)
//   - SoundBar  — turnOn(), turnOff(), setVolume(int)
//   - Lights    — dim(int percent), turnOn(), turnOff()
//   - StreamingService — login(string user), play(string movie)
//
//   Each method just prints what it's doing.
//
// Step 2: Create "HomeTheatreFacade" class
//   - members: TV*, SoundBar*, Lights*, StreamingService*
//   - constructor creates all subsystem objects
//   - destructor deletes all
//
//   - watchMovie(string movie, string user)
//       calls: lights->dim(30), tv->turnOn(), tv->setInput("HDMI"),
//              soundbar->turnOn(), soundbar->setVolume(50),
//              streaming->login(user), streaming->play(movie)
//
//   - endMovie()
//       calls: tv->turnOff(), soundbar->turnOff(), lights->turnOn()
//
// Step 3: In main()
//   - Create HomeTheatreFacade
//   - Call watchMovie("Inception", "Debayan")
//   - Call endMovie()
//
// -------------------------------------------------------------
// THINK ABOUT:
//   How does Facade differ from Adapter?
//   Does Facade prevent direct access to subsystems?
//   When would you NOT want to use a Facade?
// -------------------------------------------------------------
