 
#include "general.h"
#include <string.h>
#include "hash1.h"

int Hash(Key_type);

/* Delete: delete an item from a hashtable using open addressing    */
int Delete(Hashtable_type H, Key_type target)
{
    int c = 0;      /* count to be sure that table is not full  */
    int p;          /* position currently probed in H         */

    p = Hash(target);
 
    while (H[p].key != NULL &&          /* is the location empty?       */
            strcmp(" ", H[p].key) &&    /* is it the special key?       */
            strcmp(target, H[p].key) && /* has target key been found?   */
            c < HASHSIZE) {             /* has overflow occurred?       */
        c++;
        p++;
        if (p >= HASHSIZE)
            p %= HASHSIZE;
    }
 
    if (strcmp(H[p].key, target) == 0) {
        strcpy(H[p].key, " ");              /* insert the special key   */
        return TRUE;
    } else
        return FALSE;
}
