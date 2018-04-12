#include	"general.h"
#include	"list.h"

/* Initialize: initialize the list to be empty				*/
void Initialize(List_type *list_ptr)
{
	int i;

	for (i = 0; i < MAXLIST; i++)
		list_ptr->entry[i] = NULL;
}
