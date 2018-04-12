#include	<string.h>			
#include	"general.h"		
#include	"calls.h"	

/* ReadCommand: read a command line and save it in ^:{command}.	*/
int ReadCommand(char command[])
{
	int c, n;

	do {						/* Read a valid command line. */
		n = 0;					/* number of characters read*/
		Prompt();
		while ((c = getchar()) != '\n')
			if (strchr(" ,\t", c) != NULL)
				 ;				/* Skip white space characters.	*/
			else if (strchr("?+-*/=", c) == NULL)
				break;			/* non-command character	*/
			else
				command[n++] = c;
		if (c == '!')
			Help();
		Geteol(c);				/* Skip characters until new line.	*/
	} while (c != '\n');
	command[n] = '\0';			/* Add end of string marker. */
	return n;
}

/* Geteol: get characters until the end of line.     		*/
void Geteol(int c)
{
	while (c != '\n')
		c = getchar();
}
