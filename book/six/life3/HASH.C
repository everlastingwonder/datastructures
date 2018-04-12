 
#include "lifedef.h"

 #define FACTOR  101     /* Choose a convenient prime.   */

/* Hash: hash function for Life3    */
int Hash(int i, int j)
{
    return (i + FACTOR * j) % HASHSIZE;
}
