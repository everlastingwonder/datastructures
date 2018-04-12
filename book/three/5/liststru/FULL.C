#include	"general.h"
#include	"list.h"
#include	"calls.h"

/* Full: return non-zero if the list is full			*/
Boolean_type Full(List_type *list_ptr)
{
	return Size(list_ptr) >= MAXLIST-1;
}
