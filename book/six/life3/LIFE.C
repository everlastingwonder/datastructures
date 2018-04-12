 
#include "general.h"
#include "calls.h"
 #include "lifedef.h"
 #include "calls.h"
 Hashtable_type  H;  /* holds all living cells and dead cells with living neighbors      */
Node_type   *live, *nextlive;   /* headers for the four         */
Node_type   *die, *nextdie;     /* indirect linked lists        */

void main(void)
{
    Initialize();
    do {
        Vivify(live);
        Kill(die);
        WriteMap();
        AddNeighbors();
        SubtractNeighbors();
        live = nextlive;
        die = nextdie;
        nextlive = NULL;
        nextdie = NULL;
    } while (Enquire());
}
