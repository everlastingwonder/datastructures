 
#include "general.h"
#include <string.h>
 #include "hashopen.h"
 
int Hash(Key_type);
 
/* Insert: insert an item into a hash table using open addressing.  */
void Insert(Hashtable_type H, Item_type r)
{
    int c = 0;      /* count to be sure that table is not full  */
    int i = 1;      /* increment used for quadratic probing     */
    int p;          /* position currently probed in H         */

    p = Hash(r.key);
 
    while (H[p].key != NULL &&          /* Is the location empty?       */
            strcmp(r.key, H[p].key) &&  /* Has target key been found?   */
            c <= HASHSIZE/2) {          /* Has overflow occurred?       */
        c++;
        p += i;
        i += 2;             /* Prepare increment for the next iteration.    */
 
        if (p >= HASHSIZE)
            p %= HASHSIZE;
    }
 
    if (H[p].key == NULL)
        H[p] = r;                                   /* Insert the new item. */
 
    else if (strcmp(r.key, H[p].key) == 0)
        Error("duplicate key");     /* The same key cannot appear twice.    */
    else
        Error("table overflow");    /* Counter has reached its limit.       */
}
