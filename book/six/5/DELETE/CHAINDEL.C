 
#include "general.h"
#include <string.h>
#include "hash.h"

int Hash(Key_type);

/* Delete: delete an item from a hashtable using chaining   */
int Delete(Hashtable_type H, Key_type target)
{
    Node_type *p, *q;

    p = H[Hash(target)];
    q = p;
    while (p != NULL && strcmp(p->info.key, target) != 0) {
        q = p;
        p = p->next;
    }
 
    if (!p)
        return FALSE;
    else {  /* found it */
        if (q == p)
            H[Hash(target)] = p->next;
        else
            q->next = p->next;
        free(p);
        return TRUE;
 
    }
}
