 
#include "general.h"

#define MAX     32      /* number of keywords   */
#define LIMIT   200     /* maximum value to try */

typedef int vector_type[MAX];

#define A   10
#define B   2

/* find smallest hashsize, keeping values unique    */
void main(void)
{
    vector_type x, y, z;
    int dup, s, i;
    int key[LIMIT];
    char *temp = (char *)malloc(20);
    FILE *fp;
    int hashsize;

    fp = fopen("keywords", "r");
    for (i = 0; i < MAX; i++) {
        fscanf(fp, "%s", temp);
        x[i] = *temp;
        y[i] = *(temp+1);
 
        if (strlen(temp) < 4)
            z[i] = ' ';
        else
            z[i] = *(temp+3);
    }
 
    hashsize = MAX - 1;
    do {
        for (i = 0; i <= hashsize; i++)
            key[i] = 0;
        dup = 0;
 
        for (i = 0; i < MAX; i++) {
            s = (A * x[i] + (B * y[i] + z[i]) % A) % hashsize;
            if (!key[s])
                key[s] = 1;
            else
                dup = 1;
        }
 
        if (!dup)
            printf("smallest perfect size is %d\n", hashsize);
        hashsize++;
    } while (dup && hashsize < LIMIT);
}
