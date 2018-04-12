 
#include "general.h"
#include "lifedef.h"

Node_type *Insert(Node_type *list, Cell_type *p)
{
    Node_type *new = (Node_type *)malloc(sizeof(Node_type));

    new->entry = p;
    new->next = list;

    return new;
}
