#include	"general.h"
#include	"list.h"

/* Finish: position window to last entry of the list		*/
void Finish(List_type *list_ptr, int *w)
{
	*w = list_ptr->count - 1;
}
