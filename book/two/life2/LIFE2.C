 
/* Simulation of Conway's game of Life on a bounded grid        */
/* Version 2.                                                   */

#include "general.h"
#include "lifedef.h"    /* Life's defines and typedefs  */
#include "calls.h"      /* Life's function declarations */

void main(void)
{
    Grid_type map;                          /* current generation    */
    Gridcount_type numbernbrs;              /* number of neighbors   */
    List_type live, nextlive;
    List_type die, nextdie;

    Initialize(&live, &die, &nextlive, &nextdie, map, numbernbrs);
    WriteMap(map);
    do {
        Vivify(&live, map, numbernbrs);
        Kill(&die, map, numbernbrs);
        WriteMap(map);
        AddNeighbors(&live, &nextlive, &nextdie, numbernbrs, map);
        SubtractNeighbors(&die, &nextlive, &nextdie, numbernbrs, map);
        Copy(&live, &nextlive);
        Copy(&die, &nextdie);
    } while (Enquire());
}
