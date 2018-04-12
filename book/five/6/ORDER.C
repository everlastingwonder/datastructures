 
#include "general.h"
#include <math.h>
#include <time.h>
#include <sys/types.h>
#include <sys/timeb.h>

#define START   0
#define END     1

void Test(long);
int Time(int);
long Factorial(int);

/* test how long it take to perform different number of additions */
void main(void)
{
    int runs, n;
    long value;     /* number of additions to calculate */

    /* execute for n = 5, 10, 15, 20    */
    for (runs = 1; runs < 5; runs++) {
        n = runs * 5;
        printf("Running test with n = %d\n", n);
 
        printf("n lg n - ");
        value = (long) (n * log((double)n) / log((double)2));
        Test(value);
 
        printf("n ^ 2 - ");
        value = n * n;
        Test(value);
 
        printf("2 ^ n - ");
        value = (long)pow((double)2, (double)n);
        Test(value);
 
        printf("n ^ 5 - ");
        value = (long)pow((double)n, (double)5);
        Test(value);
 
        printf("n! - ");
        value = Factorial(n);
        Test(value);
    }
}
 
/* Test: time how long it takes to perform n additions    */
void Test(long n)
{
    long i, result;

    printf("%ld iterations\n", n);
    Time(START);
    for (i = 0; i < n; i++)
        result = i + i;

    printf("Elapsed time: %d ms\n", Time(END));
}

/* Time: SYSTEM DEPENDENT - works under IBM C/2 (MSDOS) and BSD4.3 UNIX     */
/* return the time (in milliseconds) between invocations with START and END */
int Time(int flag)
{
    static struct timeb time1;
    struct timeb time2;
    int sec;
    unsigned short mil;

    if (flag == START) {
        ftime(&time1);
        return 0;
 
    } else {
        ftime(&time2);
        if (time2.millitm < time1.millitm) {
            time2.time--;
            mil = time2.millitm + 1000 - time1.millitm;
 
        } else
            mil = time2.millitm - time1.millitm;
        sec = (int)time2.time - (int)time1.time;
        return sec * 1000 + (int)mil;
    }
}

 
/* Factorial: calculate n!  */
long Factorial(int n)
{
    int i;
    long p = 1;

    for (i = 2; i <= n; i++)
        p = p * i;

    return p;
}
