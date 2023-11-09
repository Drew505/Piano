#include <iostream>
#include <windows.h>

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
	
	Beep(262,500); // Do/Middle-C (also known as C4)
	Beep(294,500); // Re/D4
	Beep(330,500); // Mi/E4
	Beep(349,500); // Fa/F4
	Beep(392,500); // So/G4
	Beep(440,500); // La/A4
	Beep(494,500); // Ti/B4


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

