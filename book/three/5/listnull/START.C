#include	"general.h"
#include	"list.h"
#include	"calls.h"

/* Start: position the window at the first entry of list	*/
void Start(List_type *list_ptr, int *w)
{
	int i;

	if (Empty(list_ptr))
		*w = -1;
	else {
		for (i = 0; i < MAXLIST && !list_ptr->entry[i]; i++)
			;
		*w = i;
	}
}
