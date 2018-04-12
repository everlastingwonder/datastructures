 
#include "general.h"
#include "lifedef.h"

void Kill(Node_type *die)
{
    Cell_type *c;

    while (die != NULL) {
        c = die->entry;
        if (c->state == ALIVE && c->nbrs != 3 && c->nbrs != 2)
            c->state = DEAD;
        else
            die->entry = NULL;
        die = die->next;
    }
}
