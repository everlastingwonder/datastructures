 
#include "general.h"
#include "hash.h"

int Hash(Key_type);
Node_type *SequentialSearch(List_type, Key_type);

 /* Retrieve: retrieve an item from a hash table using chaining. */
Node_type *Retrieve(Hashtable_type H, Key_type target)
{
    return SequentialSearch(H[Hash(target)], target);
}
