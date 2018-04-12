 
#include "general.h"
#include <string.h>
#include "hash1.h"

int Hash(Key_type);

/* Insert: insert an item using open addressing and linear probing  */
void Insert(Hashtable_type H, Item_type r)
{
    int c = 0;      /* count to be sure that table is not full  */
    int p;          /* position currently probed in H         */

    p = Hash(r.key);
 
    while (H[p].key != NULL &&          /* is the location empty?       */
            strcmp(r.key, H[p].key) &&  /* has target key been found?   */
            c < HASHSIZE) {             /* has overflow occurred?       */
        c++;
        p++;
        if (p >= HASHSIZE)
            p %= HASHSIZE;
    }
 
    if (H[p].key == NULL)
        H[p] = r;                               /* insert the new item  */
    else if (strcmp(r.key, H[p].key) == 0)
        Error("Error: duplicate key");  /* the same key cannot appear twice */
    else
        Error("Error: table overflow"); /* counter has reached its limit    */
}
