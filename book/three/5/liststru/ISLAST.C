#include	"general.h"
#include	"list.h"

/* IsLast: non-zero if w is the last element of the list		*/
Boolean_type IsLast(List_type *list_ptr, int w)
{
	return w == list_ptr->count-1;
}
