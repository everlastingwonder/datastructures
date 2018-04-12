#include	"general.h"
#include	"list.h"
#include	"calls.h"

/* DeleteLast: delete the last entry of a list				*/
void DeleteLast(List_type *list_ptr, int *w)
{
	int t;

	if (Empty(list_ptr))
		Error("Cannot delete last: list is empty");
	else {
		if (IsLast(list_ptr, *w) && Size(list_ptr) > 0)
			Preceding(list_ptr, w);
		Finish(list_ptr, &t);
		Delete(list_ptr, &t);
		if (Empty(list_ptr))
			Start(list_ptr, w);
	}
}
