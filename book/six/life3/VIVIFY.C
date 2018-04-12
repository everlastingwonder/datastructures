 
#include "general.h"
#include "lifedef.h"

 /* Vivify: vivify cells that satisfy conditions to become alive.    */
void Vivify(Node_type *live)
{
    Cell_type *c;

    while (live != NULL) {
        c = live->entry;
 
        if (c->state == DEAD && c->nbrs == 3)
            c->state = ALIVE;
        else
            live->entry = NULL;
        live = live->next;
    }
}
