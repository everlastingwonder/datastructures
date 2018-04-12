 
#include "general.h"
#include <string.h>
#include "hash1.h"

int Hash(Key_type);

/* Retrieve: retrieve an item using open addressing and quadratic probing   */
int Retrieve(Hashtable_type H, Item_type r)
{
    int c = 0;      /* count to be sure that table is not full  */
    int i = 1;      /* increment used for quadratic probing     */
    int p;          /* position currently probed in H         */

    p = Hash(r.key);
 
    while (H[p].key != NULL &&          /* is the location empty?       */
            strcmp(r.key, H[p].key) &&  /* has target key been found?   */
            c <= HASHSIZE/2) {          /* has overflow occurred?       */
        c++;
        p += i;
        i += 2;             /* prepare increment for the next iteration */
        if (p >= HASHSIZE)
            p %= HASHSIZE;
    }
 
    if (strcmp(r.key, H[p].key) == 0)
        return p;
    else
        return -1;
}
