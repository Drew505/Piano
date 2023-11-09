#include <stdio.h>
#include <windows.h>

enum notes
{
	Do = 262,
    Re = 294,
    Mi = 330,
    Fa = 349,
    So = 392,
    La = 440,
    Ti = 494
};

enum duration
{
	quadruple = 4,
	doublenote = 2,
	full = 1,
	half = 1/2,
	quarter = 1/4,
	eigth = 1/8
};

class Notes { // declaring the frequency of notes
public:

    void playNote(notes note, duration time){
    	
    	DWORD i = time * 60000/120;
        Beep(note, i);
    }
};

int main(int argc, char** argv) {

	// DEBUG
	printf("argc: \t%i\n", argc);
	printf("argv:");
	for(int i=0; i<argc; i++){
		printf("\t%s\n", argv[i]);
	}
	
	Notes note1;
	note1.playNote(So,half);//should play note Do for 500ms
	note1.playNote(Re,doublenote);//should play note Re for 1000ms

	// For later we will need to define a way to play notes simultaneously
	// C-Major Do-Mi-So, e.g. becomes Chord("Do", "Mi", "So", 500);
	
	return 0;
}
