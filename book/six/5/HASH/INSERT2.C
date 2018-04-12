 
#include "general.h"
#include "hash.h"

int Hash(Key_type);

 /* Insert: insert an item into a hash table using chaining. */
void Insert(Hashtable_type H, Node_type *node)
{
    int h;                      /* index in hash table  */

    h = Hash(node->info.key);   /* Find the index.                      */
    node->next = H[h];          /* Insert node at the head of the list. */
    H[h] = node;                /* Set the hash table to point to node. */
}
