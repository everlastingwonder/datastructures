 
#include "general.h"
#include "lifedef.h"

/* the value of count will be the number of elements in the
   list, NOT the index of the last element */
void Add(List_type *list, Coord_type c)
{
     if (list->count == MAXLIST)
          Error("list overflow");
     else
          list->entry[list->count++] = c;
}
