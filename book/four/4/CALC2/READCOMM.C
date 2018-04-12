#include	<string.h>		/*\delete*/
#include	"general.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* ReadCommand: read a command line and save it command		*/
int ReadCommand(char command[], Stack_type *sp)
{
	int c, count, n;

	do {						/* read a valid command line*/
		n = 0;					/* number of characters read*/
		count = Size(sp);		/* number of polynomials 	*/
		Prompt();
/*\progbreak*/
		while ((c = getchar()) != '\n')
			if (strchr(" ,\t", c) != NULL)
				;				/* skip white space chars	*/
			else if (strchr("?+-*/=", c) == NULL)
				break;			/* non-command character	*/
/*\progbreak*/
			else {
				command[n++] = (char) c;
				if (c == '?')	/* adding a polynomial		*/
					count++;	
				else if (strchr("+-*/", c) != NULL)
					count--;	/* removing a polynomial	*/
				if (count <= 0) {
					printf("Illegal sequence of commands.\n");
					break;
				}
			}
/*\progbreak*/
		if (c == '!')
			Help();
		Geteol(c);				/* skip characters until nl	*/
	} while (c != '\n');
/*\progbreak*/
	command[n] = '\0';		
	return n;
}

/* Geteol: get characters until the end of line     		*/
void Geteol(int c)
{
	while (c != '\n')
		c = getchar();
}
