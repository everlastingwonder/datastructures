 
#include "general.h"
#include <string.h>
#include "hash1.h"

int Hash(Key_type);

/* Delete: delete an item from a hashtable using linear probing */
int Delete(Hashtable_type H, Key_type target)
{
    int c = 0;      /* count to be sure that table is not full  */
    int p;          /* position currently probed in H         */
    int ht;         /* hash value of the target                 */
    int lastempty;  /* last empty spot in the table             */

    ht = p = Hash(target);
 
    while (H[p].key != NULL &&          /* is the location empty?       */
            strcmp(target, H[p].key) && /* has target key been found?   */
            c < HASHSIZE) {             /* has overflow occurred?       */
        c++;
        p++;
        if (p >= HASHSIZE)
            p %= HASHSIZE;
    }
 
    if (strcmp(H[p].key, target) != 0)
        return FALSE;
 
    else {
        H[p].key = NULL;        /* delete it    */
        lastempty = p++;
        if (p >= HASHSIZE)
            p %= HASHSIZE;
 
        while (H[p].key != NULL) {
            if (Hash(H[p].key) <= ht) {
                H[lastempty].key = H[p].key;
                H[p].key = NULL;
                lastempty = p;
            }
 
            if (++p >= HASHSIZE)
                p %= HASHSIZE;
        }
        return TRUE;
    }
}
