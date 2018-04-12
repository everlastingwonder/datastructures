 #include  "lifedef.h"		 
 /* CopyMap:  copy newmap into {map.			*/ 
 void CopyMap(Grid_type map, Grid_type newmap) 
 { 
 	int row, col; 
 	for (row = 0; row < MAXROW; row++) 
 		for (col = 0; col < MAXCOL; col++) 
 			map[row][col] = newmap[row][col]; 
 } 
