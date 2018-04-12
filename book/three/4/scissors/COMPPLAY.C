#include	<limits.h>
#include	"general.h"
#include	"defs.h"
#include	"calls.h"

/* ComputerPlay: computer selects a random play				*/
Play_type ComputerPlay(void)
{
	printf("The computer chooses ");
	switch((int) (1 + 3 * (rand() / (float) INT_MAX))) {
	case 1:
		printf("scissors.\n");
		return SCISSORS;
	case 2:
		printf("paper.\n");
		return PAPER;
	case 3:
		printf("rock.\n");
		return ROCK;
	default:
		Error("Invalid value for the switch.");
	}
}
