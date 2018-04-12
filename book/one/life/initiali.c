 #include	"general.h"		 
 #include	"lifedef.h"	 
 /* Initialize:  initialize grid {map.					*/ 
 void Initialize(Grid_type map) 
 { 
 	int row, col;				/* coordinates of a cell	*/ 
 	printf("This program is a simulation of the game of Life."); 
 	for (row =	0; row < MAXROW; row++) 
 		for (col = 0; col < MAXCOL; col++) 
 			map[row][col] = DEAD; 
 	printf("On each line give a pair of coordinates for a living cell."); 
 	printf("Terminate the list with the the special pair -1 -1"); 
 	scanf("%d %d", &row, &col); 
 	while (row != -1 || col != -1) { 
 		if (row >= 0 && row < MAXROW && col >= 0 && col < MAXCOL) 
 			map[row][col] = ALIVE; 
 		else 
 			printf("Values are not within range."); 
 		scanf("%d %d", &row, &col); 
 	} 
 } 
