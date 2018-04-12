 
#include "general.h"
#include "lower.h"  /* definitions for Triangle */

extern int A[]; /* access table initialized at the beginning of program */

/* ReadLower: read the entries of a lower triangular table  */
void ReadLower(Triangle_type *T)
{
    int i, j;

    do {
        printf("How may rows? ");
        scanf("%d", &T->n);
    } while (T->n > MAXROW || T->n < 1);
 
    for (i = 0; i < T->n; i++) {        /* read each row    */
        printf("\nrow %2d: ", i);
        for (j = A[i]; j <= A[i] + i; j++)
            scanf("%d", &T->entry[j]);
    }
}
