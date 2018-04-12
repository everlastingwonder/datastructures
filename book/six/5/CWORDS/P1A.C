 
#include "general.h"

#define MAX     32          /* number of keywords   */
#define LIMIT   50          /* maximum value to try */

typedef int vector_type[MAX];

/* hash keywords to different values    */
void main(void)
{
    vector_type x, y, z, p;
    int a, b, s;
    int dup, i, j;
    char *temp = (char *)malloc(20);
    FILE *fp;

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
 
    for (a = 1; a <= LIMIT; a++)
        for (b = 1; b <= LIMIT; b++) {
            dup = 0;
            i = 0;
 
            do {
                s = a * x[i] + (b * y[i] + z[i]) % a;
                j = 0;
 
                while (!dup && j < i) {
                    dup = (s == p[j]);
                    j++;
                }
                p[i] = s;
                i++;
            } while (!dup && i < MAX);
 
            if (!dup)
                printf("Perfect hash for a=%d, b=%d\n", a, b);
        }
}
