#include <iostream>
#include <windows.h>

class Notes{ // declaring the frequency of notes
public:
    int noteDo = 262;
    int noteRe = 294;
    int noteMi = 330;
    int noteFa = 349;
    int noteSo = 392;
    int noteLa = 440;
    int noteTi = 494;

    //BPM TO MILISECONDS = 60,000/BPM

    int getDuration(int bpm){
        return 60000/bpm;
    }

    void playNote(int note, int duration){
        Beep(note, duration);
    }
};

int main(int argc, char** argv) {
	// HINT: C++ knows that when you declare a variable as char* that you are in fact using a string
	
	// DEBUG
	printf("argc: \t%i\n", argc);
	printf("argv:");
	for(int i=0; i<argc; i++){
		printf("\t%s\n", argv[i]);
	}
	
	// HINT: define a variable that determines the whole note duration in milliseconds. This will define program-wide
	// how long a note is, so if you decrease this duration, each note will be shorter and the music will be at a higher tempo.
	
//	Beep(262,500); // Do/Middle-C (also known as C4)
//	Beep(294,500); // Re/D4
//	Beep(330,500); // Mi/E4
//	Beep(349,500); // Fa/F4
//	Beep(392,500); // So/G4
//	Beep(440,500); // La/A4
//	Beep(494,500); // Ti/B4
Notes note1;
note1.playNote(262,note1.getDuration(120));//should play note Do for 500ms
note1.playNote(note1.noteRe,note1.getDuration(60));//should play note Re for 1000ms

	// For later we will need to define a way to play notes simultaneously
	// C-Major Do-Mi-So, e.g. becomes Chord("Do", "Mi", "So", 500);
	
	return 0;
}

/*
Assignment 1st Nov 2023
-----------------------
1. Get this code running on Windows
2. Get this code running on Mac if possible. There may not be a mac equivalent of Beep.
3. Extend the functionality with a new method that takes the parameters 'note' and 'duration'
	-- note: "Do", "Re"...
	-- duration: "crotchet", "quaver", "semi-quaver"...
	-- Note("Ti", "crochet");
4. Create a GitHib project and push the code
*/

