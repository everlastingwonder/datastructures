 /* Simulation of Conway's game of Life on a	bounded	grid 	*/ 
 /* Version 1												*/ 
 #include	"general.h"	 /*	common include files and definitions*/ 
 #include	"lifedef.h"	 /*	Life's defines and typedefs		*/ 
 #include	"calls.h"	 /*	Life's function declarations	*/ 
 void main(void) 
 { 
 	int  row, col; 
 	Grid_type map;					/* current generation	*/ 
 	Grid_type newmap;				/* next	generation		*/ 
 	Initialize(map); 
 	WriteMap(map); 
 	do { 
 		for	(row= 0; row <	MAXROW;	row++) 
 			for (col = 0; col < MAXCOL; col++) 
 				switch(NeighborCount(row,col, map)) { 
 				case 0: 
 				case 1: 
 					newmap[row][col]= DEAD; 
 					break; 
 				case 2: 
 					newmap[row][col]= map[row][col]; 
 					break; 
 				case 3: 
 					newmap[row][col]= ALIVE; 
 					break; 
 				case 4: 
 				case 5: 
 				case 6: 
 				case 7: 
 				case 8: 
 					newmap[row][col]= DEAD; 
 					break; 
 				} 
 		CopyMap(map, newmap); 
 		WriteMap(map); 
 	} while (Enquire()); 
 } 
