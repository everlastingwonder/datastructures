 #include	"general.h"		 
 #include	"lifedef.h"	 
 /* WriteMap:  write grid {map.		*/ 
 void WriteMap(Grid_type map) 
 { 
 	int row, col; 
 	printf(""); 
 	for (row = 0; row < MAXROW; row++)	{ 
 		for (col = 0; col < MAXCOL; col++) 
 			if (map[row][col] == ALIVE) 
 					printf("*"); 
 			else 
 					printf("-"); 
 		printf(""); 
 	} 
 } 
