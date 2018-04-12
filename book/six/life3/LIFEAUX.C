 
#include "general.h"
#include "lifedef.h"
#include "global.h"

int Hash(int, int);

static Node_type *availnode = NULL;
static Cell_type *availcell = NULL;

/* NewNode: return a node   */
Node_type *NewNode(void)
{
    Node_type *p;

    if (availnode == NULL)
        return (Node_type *)malloc(sizeof(Node_type));
 
    else {
        p = availnode;
        availnode = p->next;
        p->next = NULL;
        return p;
    }
}
 
/* DisposeNode: add a node to the available list    */
void DisposeNode(Node_type *p)
{
    if (p != NULL) {
        p->next = availnode;
        p->entry = NULL;
        availnode = p;
    }
}
 
/* NewCell: return a cell   */
Cell_type *NewCell(void)
{
    Cell_type *p;

    if (availcell == NULL)
        return (Cell_type *)malloc(sizeof(Cell_type));
 
    else {
        p = availcell;
        availcell = p->next;
        p->next = NULL;
        return p;
    }
}
 
/* DisposeCell: dispose of a cell   */
void DisposeCell(int x, int y)
{
    int location;
    Cell_type *p, *q;

    location = Hash(x, y);
    p = H[location];
    q = NULL;
 
    while (p != NULL && (p->row != x || p->col != y)) {
        q = p;
        p = p->next;
    }
    if (p == NULL)
        fprintf(stderr, "Error: not a valid cell\n");
 
    else {
        if (q == NULL)
            H[location] = p->next;
        else
            q->next = p->next;
        p->next = availcell;
        availcell = p;
    }
}
