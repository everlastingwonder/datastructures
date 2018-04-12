 
#include "general.h"
#include "lifedef.h"

/* Vivify: modified to use two pointers when traversing list    */
Node_type *Vivify(Node_type *live)
{
    Node_type *p, *q;
    Cell_type *c;

    p = live;
    q = NULL;
 
    while (p != NULL) {
        c = p->entry;
        if (c->state == DEAD && c->nbrs == 3) {
            c->state = ALIVE;
            q = p;
            p = p->next;
 
        } else {
            p->entry = NULL;
            if (q == NULL) {
                live = p->next;
                free(p);
                p = live;
 
            } else {
                q->next = p->next;
                free(p);
                p = q->next;
            }
        }
    }
    return live;
}
