#include	"general.h"
#include	"defs.h"
#include	"calls.h"

/* UserPlay: return the play selected by the user			*/
Play_type UserPlay(void)
{
	for ( ; ; ) {
		printf("Please enter your move (s, p, r): ");
		switch(GetMove()) {
		case 's': 
		case 'S':
			printf("You have selected scissors.\n");
			return SCISSORS;
		case 'p':
		case 'P':
			printf("You have selected paper.\n");
			return PAPER;
		case 'r':
		case 'R':
			printf("You have selected rock.\n");
			return ROCK;
		}
	}
}

/* GetMove: get character indicating user's move			*/
int GetMove(void)
{
	int c;

	while ((c = getchar()) == '\n')
		;					/* ignore new line character	*/
	return c;
}
