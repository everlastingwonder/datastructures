#include	"general.h"
#include	"list.h"

/* IsFirst: non-zero if w is the first entry of the list	*/
Boolean_type IsFirst(List_type *list_ptr, int w)
{
	int i;

	for (i = w - 1; i >= 0 && !list_ptr->entry[i]; i--)
		;
	if (i >= 0)				/* there is an entry before w	*/
		return FALSE;
	else
		return TRUE;		/* first entry in the list		*/
}
