// =============================================================
// MINI ASSIGNMENT: Aggregation
// =============================================================
//
// WHAT IS AGGREGATION?
//   A HAS-A relationship where the child object CAN exist
//   independently of the parent. The parent holds a POINTER
//   to the child, not the object itself.
//   Example: A Playlist HAS Songs, but a Song can exist
//            without any Playlist.
//
// KEY DIFFERENCE from Composition:
//   Composition  = parent owns child (child dies with parent)
//   Aggregation  = parent references child (child lives on)
//
// -------------------------------------------------------------
// TASK: Build a "Playlist" that contains "Song" objects
// -------------------------------------------------------------
//
// Step 1: Create a class "Song"
//   - members: title (string), artist (string), duration (int) in seconds
//   - constructor taking title, artist, duration
//   - method: play() — prints "Playing: <title> by <artist> (<duration>s)"
//   - method: getTitle() — returns title
//   - destructor — prints "Song '<title>' deleted"
//
// Step 2: Create a class "Playlist"
//   - members: name (string), songs (vector<Song*>)
//     NOTE: store POINTERS — Playlist does NOT own the Song objects
//   - constructor taking name
//   - method: addSong(Song* s) — adds to vector
//   - method: play() — prints "Playlist: <name>" then calls
//             play() on each song
//   - method: removeSong(string title) — removes song by title
//   - destructor — prints "Playlist '<name>' deleted"
//             NOTE: do NOT delete the songs here
//
// Step 3: In main()
//   - Create 4 Song objects on the heap
//   - Create 2 Playlists
//   - Add songs to both playlists (same song can be in both)
//   - Play both playlists
//   - Delete one Playlist — songs should still exist
//   - Play the remaining songs directly
//   - Then delete all songs
//
// -------------------------------------------------------------
// THINK ABOUT:
//   Why can the same Song be in multiple Playlists?
//   What would happen if Playlist deleted the songs in its destructor?
// -------------------------------------------------------------
