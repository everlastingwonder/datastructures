 
#include "general.h"
#include <string.h>
#include "hashopen.h"

void Insert(Hashtable_type, Item_type);
int Delete(Hashtable_type, Key_type);
int Retrieve(Hashtable_type, Item_type);

int main(void)
{
    Hashtable_type H;
    Item_type new, old;
    Item_type a1, a2, a3;
    int p;

    for (p = 0; p < HASHSIZE; p++)
        H[p].key = NULL;

    new.key = (char *)malloc(5);
    old.key = (char *)malloc(5);
    strcpy(new.key, "good");
    strcpy(old.key, "bad");

    Insert(H, new);

    if ((p = Retrieve(H, new)) != -1)
        printf("%s found at %d\n", H[p].key, p);
    else
        printf("%s not found\n", new.key);

    if ((p = Retrieve(H, old)) != -1)
        printf("%s found at %d\n", H[p].key, p);
    else
        printf("%s not found\n", old.key);

    old.key = (char *)malloc(5);
    strcpy(old.key, "good");

    if (Delete(H, old.key) == TRUE)
        printf("%s deleted\n", old.key);
    else
        printf("%s not deleted\n", old.key);

    if ((p = Retrieve(H, old)) != -1)
        printf("%s found at %d\n", H[p].key, p);
    else
        printf("%s not found\n", old.key);

    a1.key = "abc";
    a2.key = "bac";
    a3.key = "cba";
    Insert(H, a1);
    Insert(H, a2);
    Insert(H, a3);

    if ((p = Retrieve(H, a1)) != -1)
        printf("%s found at %d\n", H[p].key, p);
    else
        printf("%s not found\n", a1.key);
    if (Delete(H, a1.key) == TRUE)
        printf("abc deleted\n");
    else
        printf("abc not deleted\n");
    if ((p = Retrieve(H, a2)) != -1)
        printf("%s found at %d\n", H[p].key, p);
    else
        printf("%s not found\n", a2.key);
    if ((p = Retrieve(H, a3)) != -1)
        printf("%s found at %d\n", H[p].key, p);
    else
        printf("%s not found\n", a3.key);

    return 0;
}
