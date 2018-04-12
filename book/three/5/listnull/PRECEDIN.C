#include	"general.h"
#include	"list.h"
#include	"calls.h"

/* Preceding: position window on the preceding entry		*/
void Preceding(List_type *list_ptr, int *w)
{
	int i = *w;

	for (i-- ; i >= 0 && !list_ptr->entry[i]; i--)
		;
	if (i < 0)
		Error("No preceding entry in the list");
	else
		*w = i;
}
