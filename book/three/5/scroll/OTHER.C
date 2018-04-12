#include	"general.h"
#include	"scroll.h"

/* Size: return current number of items in the scroll		*/
int Size(Scroll_type *scroll_ptr)
{
	int count = 1;
	int i;

	if (scroll_ptr->rear <= -1)
		return 0;
	for (i = scroll_ptr->front; i != scroll_ptr->rear; i = (i + 1) % MAXSCROLL)
		count++;
	return count;
}

/* Empty: return non-zero if the scroll is empty			*/
Boolean_type Empty(Scroll_type *scroll_ptr)
{
	return scroll_ptr->rear <= -1;
}

/* Full: return non-zero if the scroll if full				*/
Boolean_type Full(Scroll_type *scroll_ptr)
{
	if ((scroll_ptr->rear == scroll_ptr->front - 1 && 
		 scroll_ptr->rear > -1) ||
		(scroll_ptr->rear == MAXSCROLL - 1 && 
		 scroll_ptr->front == 0))
		return TRUE;
	else
		return FALSE;
}

/* Error: print error message and continue the program		*/
void Error(char *s)
{
	fprintf(stderr, "%s\n", s);
}
