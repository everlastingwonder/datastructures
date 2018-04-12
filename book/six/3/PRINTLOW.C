 
#include "general.h"
#include "lower.h"  /* definitions for Triangle */

extern int A[]; /* access table initialized at the beginning of program */

/* PrintLower: display a lower triangular table */
void PrintLower(Triangle_type T)
{
    int i, j;

    for (i = 0; i < T.n; i++) {
 
        for (j = A[i]; j <= A[i] + i; j++)  /* print the row    */
            printf("%5d", T.entry[j]);
 
        for (j = i + 1; j < T.n; j++)   /* print the zeros above diagonal   */
            printf("%5d", 0);
        printf("\n");
    }
}
