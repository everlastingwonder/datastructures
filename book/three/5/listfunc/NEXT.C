#include	"general.h"
#include	"list.h"
#include	"calls.h"

/* Next: position the window at the next entry of list		*/
void Next(List_type *list_ptr, int *w)
{
	int i;
	
	for (i = *w + 1; i < MAXLIST && !list_ptr->entry[i]; i++)
		;
	if (i <= MAXLIST-1 && list_ptr->entry[i])
		*w = i;
	else
		Error("No next entry in the list");
}
