 
#include "general.h"
#include <string.h>
#include "hash.h"

void Insert(Hashtable_type, Node_type *);
Node_type *Retrieve(Hashtable_type, Key_type);
int Delete(Hashtable_type, Key_type);

int main(void)
{
    Hashtable_type H;
    Node_type new, second;
    Node_type *p;
    int i;

    for (i = 0; i < HASHSIZE; i++)
        H[i] = NULL;

    new.info.key = (char *)malloc(5);
    second.info.key = (char *)malloc(5);
    strcpy(new.info.key, "good");
    strcpy(second.info.key, "good");

    Insert(H, &new);

    if ((p = Retrieve(H, new.info.key)) != NULL)
        printf("%s found\n", p->info.key);
    else
        printf("%s not found\n", new.info.key);

    if (Delete(H, new.info.key) == TRUE)
        printf("%s deleted\n", new.info.key);
    else
        printf("%s not deleted\n", new.info.key);

    if ((p = Retrieve(H, second.info.key)) != NULL)
        printf("%s found\n", p->info.key);
    else
        printf("%s not found\n", second.info.key);

    return 0;
}
