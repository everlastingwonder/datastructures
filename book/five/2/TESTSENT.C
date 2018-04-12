 
#include "general.h"
#include <time.h>
#include <sys/types.h>
#include <sys/timeb.h>
#include "array.h"

#define START   0
#define END     1

void Test(int (*)(List_type, Key_type, int *), int, List_type);
int Time(int);
void Fill(List_type *, int);
int SequentialSearch(List_type, Key_type, int *);
int SentinelSearch(List_type, Key_type, int *);

/* test the contiguous version of sequential search */
main(int argc, char *argv[])
{
    List_type list;
    int n;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s n\n", argv[0]);
        exit(1);
    }
 
    n = atoi(argv[1]);
    if (n < 1 || n > MAX-1) {
        fprintf(stderr, "n must be between 1 and %d\n", MAX-1);
        exit(1);
    }

    Fill(&list, n);
 
    printf("Testing SequentialSearch\n");
    Test(SequentialSearch, n, list);
    printf("\nTesting SentinelSearch\n");
    Test(SentinelSearch, n, list);

    return 0;
}

 
/* Fill: fill the list with integers    */
void Fill(List_type *list, int n)
{
    int i;
    Key_type value;

    value = 1;
    for (i = 0; i < n; i++) {
        list->entry[i].key = value; /* fill with odd numbers */
        value += 2;
    }
    list->count = n;
}

 
/* Test: time the search function for successful and unsuccessful searches */
void Test(int (*f)(List_type, Key_type, int *), int n, List_type list)
{
    int i, loc, cmp;
    Key_type target;
    long sum;

    /* successful search */
    sum = 0;
    target = 1;
    Time(START);
    for (i = 0; i < n; i++) {
        if ((loc = (*f)(list, target, &cmp)) == -1)
            printf("Error: %d not found\n", target);
        sum += cmp;
        target += 2;
    }
    printf("Elapsed time: %d ms\n", Time(END));
    printf("Successful search: %.2f comparisons\n", (float)sum / n);
 

    /* unsuccessful search */
    sum = 0;
    target = 0;
    Time(START);
    for (i = 0; i < n; i++) {
        if ((loc = (*f)(list, target, &cmp)) != -1)
            printf("Error: %d found\n", target);
        sum += cmp;
        target += 2;
    }
    printf("Elapsed time: %d ms\n", Time(END));
    printf("Unsuccessful search: %.2f comparisons\n", (float)sum / n);
}

 
/* Time: SYSTEM DEPENDENT - works under IBM C/2 (MS-DOS) and BSD4.3 UNIX    */
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

 
/* SequentialSearch: modified to count comparisons  */
int SequentialSearch(List_type list, Key_type target, int *cmp)
{
    int location = 0;

    *cmp = 0;
    while (location <= list.count-1) {
        *cmp += 1;
        if (list.entry[location].key == target)
            return location;
        else
            location++;
    }
    return -1;
}

 
/* SentinelSearch: sentinel version */
int SentinelSearch(List_type list, Key_type target, int *cmp)
{
    int location = 0;

    list.entry[list.count].key = target;    /* set the sentinel */
    *cmp = 1;   /* we always make at least 1 comparison */
 
    /* increment location until target is found */
    while (list.entry[location].key != target) {
        *cmp += 1;
        location++;
    }
 
    if (location < list.count)
        return location;
    else
        return -1;
}
