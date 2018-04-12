#include	"list.h"
#include	"calls.h"

/* Next: position window on the next entry, if there is one	*/
void Next(List_type *list_ptr, int *w)
{
	if (*w < list_ptr->count-1)
		(*w)++;
	else
		Error("No next entry in the list");
}
