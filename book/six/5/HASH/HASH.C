 
#include <stdlib.h>
#include "hash.h"

/* Hash: calculate the hash value of s.   */
int Hash(Key_type s)
{
    int h = 0;

    while (*s)      /* Loop through all the characters in s.  */
        h += *s++;  /* Add the value of each to h.            */

    return abs(h % HASHSIZE);
}
