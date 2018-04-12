#include	"general.h"
#include	"list.h"
#include	"calls.h"

/* DeleteFirst: delete the first entry of a list			*/
void DeleteFirst(List_type *list_ptr, int *w)
{
	int t;

	if (Empty(list_ptr))
		Error("Cannot delete first: list is empty");
	else {
		if (IsLast(list_ptr, *w) && Size(list_ptr) > 1)
			Preceding(list_ptr, w);
		Start(list_ptr, &t);
		Delete(list_ptr, &t);
		if (Empty(list_ptr))
			Start(list_ptr, w);
	}
}
