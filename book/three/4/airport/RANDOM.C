 
#include        <limits.h>
#include        <math.h>
#include        "general.h"

 /* RandomNumber: generate a pseudorandom integer according
to the Poisson distribution.                                    */
int RandomNumber(double expectedvalue)
{
        int n = 0;                      /* counter of iterations                                        */
        double em;                      /*  e^{-v} , where  v  is the expected value    */
        double x;                       /* pseudorandom number                                          */

        em = exp(-expectedvalue);
        x = rand() / (double) INT_MAX;
        while (x > em) {
                n++;
                x *= rand() / (double) INT_MAX;
        }
        return n;
}
