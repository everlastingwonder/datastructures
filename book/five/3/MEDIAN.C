 
#include "general.h"
#include "array.h"

/* FindMedian: assumes that List2 contains at least as many entries
as List1, and returns the median of the two ordered lists combined. */
Key_type FindMedian(List_type List1, List_type List2)
{
    int reduce;     /* removed from both ends at each iteration */
    int mid1, bottom1, top1;
    int mid2, bottom2, top2;
    Key_type a, b, c;   /* used to check values in short lists  */

    if (List1.count <= 0 || List1.count > List2.count) {
        fprintf(stderr, "Bad arguments to FindMedian");
        return NULL;
    }
 
    bottom1 = bottom2 = 0;
    top1 = List1.count - 1;
    top2 = List2.count - 1;
 
    /* Invariant: median is either between bottom1 and top1 in List1 or
 between bottom2 and top2 in List2, inclusive; median is the median
 of the combined lists from bottom1 to top1 and bottom2 to top2.    */

    while (top1 > bottom1) {    /* while List1 has at least two entries   */
        mid1 = (bottom1 + top1) / 2;
        mid2 = (bottom2 + top2) / 2;
        reduce = (top1 - bottom1 + 1) / 2;
        if (List1.entry[mid1].key < List2.entry[mid2].key) {
            top2 -= reduce;
            bottom1 += reduce;  /* Reduce each list by the same amount. */
 
        } else {                /* List1.entry[mid1] > List2.entry[mid2] */
            bottom2 += reduce;
            top1 -= reduce;     /* Reduce each list by the same amount. */
        }
    }

 
    /* The preceding loop terminates with List1 of length exactly 1.    */
    if (top1 != bottom1) {
        fprintf(stderr, "bad terminating condition in FindMedian");
        return NULL;
    }
 
    a = List1.entry[top1].key;
    if (bottom2 == top2) {
    /* List2 has only one element; median is the smaller  */
        b = List2.entry[top2].key;
        if (a <= b)
            return a;
        else
            return b;
 
    } else {
    /* List2 has more than one element; find entry to left of median  */
        mid2 = (bottom2 + top2 - 1)/2;  /* one left of true median if odd   */
        b = List2.entry[mid2].key;  /* at or to the left of median in List2 */
        c = List2.entry[mid2+1].key;/* at median or right median in List2 */
        if (a <= b)
            return b;
        else if (a <= c)
            return a;
        else
            return c;
    }
}
