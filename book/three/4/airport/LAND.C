 #include	"general.h"		 
 #include	"simdefs.h"	 
 /* Land: process a plane p that is actually landing.		*/ 
 void Land(Plane_type p, int curtime, int *nland, int *landwait) 
 { 
 	int wait; 
 	wait = curtime - p.tm; 
 	printf("%3d : Plane %3d landed; in queue %d units.", 
 			curtime, p.id, wait); 
 	(*nland)++; 
 	*landwait += wait; 
 } 
