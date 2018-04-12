 
#include "general.h"
#include "hash.h"

/* linked list version */
Node_type *SequentialSearch(List_type list, Key_type target)
{
    while (list != NULL) {
        if (list->info.key == target)
            return list;
        else
            list = list->next;
    }

    return NULL;
}
