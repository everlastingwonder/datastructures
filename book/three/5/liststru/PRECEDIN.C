#include	"list.h"
#include	"calls.h"

/* Preceding: position window on the preceding entry		*/
void Preceding(List_type *list_ptr, int *w)
{
	if (*w > 0)
		(*w)--;
	else
		Error("No preceding entry in the list");
}
