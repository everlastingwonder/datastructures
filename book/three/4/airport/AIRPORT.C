 
#include        "general.h"
#include        "simdefs.h"
#include        "calls.h"

 /* simulation of an airport                                                                     */
void main(void)
{
 
        Queue_type landing, takeoff;
        Queue_type *pl = &landing;
        Queue_type *pt = &takeoff;
        Plane_type plane;
        int curtime; /* current time; one unit = time for takeoff or landing */
        int endtime;    /* total number of time units to run    */
        double expectarrive;/* number of planes arriving in one unit    */
        double expectdepart;/* number of planes newly ready takeoff     */
 
        int i;                  /* loop control variable                                */
        int idletime;   /* number of units when runway is idle  */
        int landwait;   /* total waiting time for planes landed */
        int nland;              /* number of planes landed                              */
        int nplanes;    /* number of planes processed so far    */
        int nrefuse;    /* number of planes refused of airport  */
        int ntakeoff;   /* number of planes taken off                   */
        int pri;                /* pseudo-random integer                                */
        int takeoffwait;/* total waiting time for takeoff               */

        Initialize(pl);
        Initialize(pt);
        nplanes = nland = ntakeoff = nrefuse = 0;
        landwait = takeoffwait = idletime = 0;
        Start(&endtime, &expectarrive, &expectdepart);
 
        for (curtime = 1; curtime <= endtime; curtime++) {
                pri = RandomNumber(expectarrive);
                for (i = 1; i <= pri; i++) {/* Add to landing queue.    */
                        NewPlane(&plane, &nplanes, curtime, ARRIVE);
                        if (Full(pl))
                                Refuse(plane, &nrefuse, ARRIVE);
                        else
                                AddQueue(plane, pl);
                }
 
                pri = RandomNumber(expectdepart);
                for (i = 1; i <= pri; i++) {/* Add to takeoff queue.    */
                        NewPlane(&plane, &nplanes, curtime, DEPART);
                        if (Full(pt))
                                Refuse(plane, &nrefuse, DEPART);
                        else
                                AddQueue(plane, pt);
                }
 
                if (!Empty(pl)) {                       /* Bring plane to land. */
                        DeleteQueue(&plane, pl);
                        Land(plane, curtime, &nland, &landwait);
                } else if (!Empty(pt)) {        /* Allow plane take off.        */
                        DeleteQueue(&plane, pt);
                        Fly(plane, curtime, &ntakeoff, &takeoffwait);
                } else
                        Idle(curtime, &idletime);
        }
        Conclude(nplanes, nland, ntakeoff, nrefuse, landwait,
                         takeoffwait, idletime, endtime, pt, pl);
}
