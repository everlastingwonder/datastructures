#include	"general.h"
#include	"list.h"

/* IsLast: return non-zero if w is last entry of the list	*/
Boolean_type IsLast(List_type *list_ptr, int w)
{
	int i;

	for (i = w + 1; i < MAXLIST; i++)
		if (list_ptr->entry[i])
			break;
	if (i >= MAXLIST)
		return TRUE;
	else
		return FALSE;
}
