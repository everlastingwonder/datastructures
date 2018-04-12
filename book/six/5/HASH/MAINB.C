 
#include "general.h"
#include <string.h>
#include "hashopen.h"

void Insert(Hashtable_type, Item_type);
int Retrieve(Hashtable_type, Item_type);

int main(void)
{
    Hashtable_type H;
    Item_type new;
    int p;

    for (p = 0; p < HASHSIZE; p++)
        H[p].key = NULL;

    new.key = (char *)malloc(5);
    strcpy(new.key, "good");

    Insert(H, new);

    if ((p = Retrieve(H, new)) != -1)
        printf("%s found at %d\n", H[p].key, p);
    else
        printf("%s not found\n", new.key);

    strcpy(new.key, "bad");
    if ((p = Retrieve(H, new)) != -1)
        printf("%s found at %d\n", H[p].key, p);
    else
        printf("%s not found\n", new.key);

    return 0;
}
