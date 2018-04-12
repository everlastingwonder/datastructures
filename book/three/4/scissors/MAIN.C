#include	"general.h"
#include	"defs.h"
#include	"calls.h"

/* main program for Scissors, Paper, and Rock				*/
void main(void)
{
	Randomize();
	Instructions();
	do {
		switch(UserPlay()) {
		case SCISSORS:	
			switch(ComputerPlay()) {
			case SCISSORS:
				printf("Same choice. We tie.\n");
				break;
			case PAPER:
				printf("Scissors cut paper. You win.\n");
				break;
			case ROCK:
				printf("Rock breaks scissors. Computer wins.\n");
				break;
			}
			break;
		case PAPER:
			switch(ComputerPlay()) {
			case SCISSORS:
				printf("Scissors cut paper. Computer wins.\n");
				break;
			case PAPER:
				printf("Same choice. We tie.\n");
				break;
			case ROCK:
				printf("Paper covers rock. You win.\n");
				break;
			}
			break;
		case ROCK:
			switch(ComputerPlay()) {
			case SCISSORS:
				printf("Rock breaks scissors. You win.\n");
				break;
			case PAPER:
				printf("Paper covers rock. Computer wins.\n");
				break;
			case ROCK:
				printf("Same choice. We tie.\n");
				break;
			}
			break;
		}
	} while (Enquire());
}
