 
#include "array.h"

#define MAXPOWER 10     /* ceiling of the base 2 log of MAX   */

int power[MAXPOWER+1];  /* contains powers of 2             */

/* BinarySearch: using only addition and subtraction    */
int BinarySearch(List_type list, Key_type target)
{
    int top, bottom, n;

    top = list.count - 1;   /* initialize bounds to encompass entire list   */
    bottom = -1;
    for (n = 0; power[n] < list.count; n++)
        /* empty */;
    n--;
 
    while (n >= 0) {
        if (target > list.entry[bottom+power[n]].key) {
            bottom += power[n];         /* reduce to the top portion    */
            while (n >= 0 && power[n] >= (top - bottom))
                n--;
        } else
            top = bottom + power[n--];  /* reduce to the bottom portion */
    }
 
    if (top == -1)
        return -1;          /* search of an empty list always fails     */
 
    if (target == list.entry[top].key)
        return top;
    else
        return -1;
}
 
/* SetPowers: build the power array using only addition */
void SetPowers(void)
{
    int i;

    power[0] = 1;
    for (i = 1; i <= MAXPOWER; i++)
        power[i] = power[i-1] + power[i-1];
}
