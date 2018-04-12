#include	"general.h"
#include	"list.h"
#include	"calls.h"

/* Empty: return non-zero if the list is empty			*/
Boolean_type Empty(List_type *list_ptr)
{
	return Size(list_ptr) == 0;
}
