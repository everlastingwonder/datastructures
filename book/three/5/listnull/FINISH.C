#include	"list.h"

/* Finish: position window to last entry of the list		*/
void Finish(List_type *list_ptr, int *w)
{
	int i;

	for (i = MAXLIST-1; i >= 0 && !list_ptr->entry[i]; i--)
		;
	*w = i;
}
