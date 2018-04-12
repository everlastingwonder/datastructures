 
#include "general.h"
#include "list.h"

#define EQ(a,b) ((a) == (b))

 /* SequentialSearch: linked list version    */
Node_type *SequentialSearch(List_type list, Key_type target)
{
    Node_type *location;

    for (location = list.head; location != NULL; location = location->next)
        if (EQ(location->info.key, target))
            return location;
    return NULL;
}
