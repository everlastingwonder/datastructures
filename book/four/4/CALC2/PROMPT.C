#include	"general.h"		/*\delete*/

/* Prompt: prompt the user for command line					*/
void Prompt(void)
{
	int c;

	printf("Enter a string of commands or ! for help.\n");
	while ((c = getchar()) == '\n')
		;			/* discard leftover newlines, if any	*/
	ungetc(c, stdin);
}
