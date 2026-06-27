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

#include<iostream>
#include<vector>
#include<string>

using namespace std;


class Song {
private:
    string title;
    string artist;
    int duration;
public:
    Song(string title, string artist, int duration)
        : title(title), artist(artist), duration(duration) {}

    void play() {
        cout << "Playing: " << title << " by " << artist << " (" << duration << "s)" << endl;
    }
    string getTitle() { return title; }
    ~Song() { cout << "Song '" << title << "' deleted" << endl; }
};


class Playlist{
private:
	string name;
	vector<Song*>songs;



public:
	Playlist(string name):name(name){}
	void addSong(Song* s){
		songs.push_back(s);
	}
	void play() {
	    cout << "Playlist: " << name << endl;
	    for (Song* s : songs)
	        s->play();
	}

};


int main(){


	Song* s1 = new Song("Blinding Lights", "Weeknd", 200);
    Song* s2 = new Song("Shape of You", "Ed Sheeran", 234);
    Song* s3 = new Song("Levitating", "Dua Lipa", 203);
    Song* s4 = new Song("Stay", "Justin Bieber", 141);

    Playlist p1("Favourites");
    Playlist p2("Workout");



    p1.addSong(s1);
    p1.addSong(s2);
    p1.addSong(s3);

    p2.addSong(s2);   // same song in both playlists
    p2.addSong(s4);

    p1.play();
    p2.play();

    s2->play();
    delete s1;
    delete s2;
    delete s3;
    delete s4; 






}




















