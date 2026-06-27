// =============================================================
// MINI ASSIGNMENT: Association
// =============================================================
//
// WHAT IS ASSOCIATION?
//   A USES-A or KNOWS-A relationship between two classes.
//   Both objects exist independently and neither owns the other.
//   They just interact with each other.
//   Example: A Player plays for a Team.
//            A Team has Players.
//            Neither owns the other — they just know each other.
//
// Types:
//   One-to-One   : One player has one jersey number
//   One-to-Many  : One team has many players
//   Many-to-Many : Players can move between teams
//
// -------------------------------------------------------------
// TASK: Build a Player-Team association
// -------------------------------------------------------------
//
// Step 1: Forward declare class Team (needed because Player
//         references Team and Team references Player)
//   Just write:  class Team;
//   before the Player class
//
// Step 2: Create a class "Player"
//   - members: name (string), position (string), team (Team*)
//   - constructor taking name and position, team=nullptr
//   - method: joinTeam(Team* t) — sets team pointer
//   - method: getName() — returns name
//   - method: getPosition() — returns position
//   - method: showInfo() — prints name, position, and team name
//             use team->getName() if team is not nullptr
//
// Step 3: Create a class "Team"
//   - members: teamName (string), players (vector<Player*>)
//   - constructor taking teamName
//   - method: addPlayer(Player* p) — adds player, also calls p->joinTeam(this)
//   - method: getName() — returns teamName
//   - method: showRoster() — prints teamName and all player names
//
// Step 4: In main()
//   - Create 4 Player objects
//   - Create 2 Team objects
//   - Add players to teams using addPlayer()
//   - Call showRoster() on each team
//   - Call showInfo() on each player
//
// -------------------------------------------------------------
// THINK ABOUT:
//   What is the difference between association and aggregation?
//   Here both Player and Team reference each other — bidirectional
//   Why do we need a forward declaration for Team?
// -------------------------------------------------------------
