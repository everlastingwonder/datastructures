 #include	"general.h"		 
 /* Idle:  updates variables for idle runway.				*/ 
 void Idle(int curtime, int *idletime) 
 { 
 	printf("%3d : Runway is idle.", curtime); 
 	(*idletime)++; 
 } 
