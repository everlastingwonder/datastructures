#include	"general.h"

/* Instructions: print instructions about the game			*/
void Instructions(void)
{
	printf("Scissors, Rock, and Paper\n\n");
	printf("To play, select the move of either scissors, "
			"rock, or paper.\n");
	printf("Your opponent selects, at exact the same time, "
			"one of the three\n");
	printf("possible moves. If both players select the same "
			"move then a tie results.\n");
	printf("A player selecting scissors will beat one with "
			"paper, paper beats rock,\n");
	printf("and rock beats scissors.\n\n");
}
