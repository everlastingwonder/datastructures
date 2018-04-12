 
#include "general.h"
#include "lower.h"  /* definitions for Triangle */

extern int A[]; /* access table initialized at the beginning of program */

/* TestTriangle: test the triangle rule */
void TestTriangle(Triangle_type T)
{
    Boolean_type okay = TRUE;
    int a, b, c;
    int ab, ac, bc;

    a = 0;
    while (okay && a < T.n) {
        c = 0;
 
        while (okay && c <= a) {    /* test with all other possible cities  */
            b = 0;
            ac = T.entry[A[a]+c];
 
            while (okay && b < T.n) {   /* test with intermediate cities    */
                if (b < a)
                    ab = T.entry[A[a]+b];
                else
                    ab = T.entry[A[b]+a];
 
                if (b < c)
                    bc = T.entry[A[b]+c];
                else
                    bc = T.entry[A[c]+b];
                okay = (ac <= ab + bc); /* test triangle rule   */
                b++;
            }
            c++;
        }
        a++;
    }

 
    if (okay)
        printf("Triangle rule holds.\n");
    else
        printf("Triangle rule fails for %d %d with intermediate %d\n",
                a-1, c-1, b-1);
}
