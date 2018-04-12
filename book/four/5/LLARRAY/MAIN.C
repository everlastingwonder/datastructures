 #include	"general.h"		 
 #include	"list.h"	 
 #include	"calls.h" 
 char info[MAX]; 
 void main(void) 
 { 
 	int next[MAX]; 
 	int avail, head, lastnode; 
 	Initialize(&head, &avail, &lastnode); 
 	InsertNode('a', &head, &avail, &lastnode, next); 
 	InsertNode('b', &head, &avail, &lastnode, next); 
 	InsertNode('c', &head, &avail, &lastnode, next); 
 	InsertNode('d', &head, &avail, &lastnode, next); 
 	InsertNode('e', &head, &avail, &lastnode, next); 
 	printf("Expecting abcde, received:"); 
 	Traverse(0, next, Visit); 
 	FreeNode(&head, &avail, next, 4); 
 	printf(" abcd, received:"); 
 	Traverse(0, next, Visit); 
 	FreeNode(&head, &avail, next, 1); 
 	printf(" acd, received:"); 
 	Traverse(0, next, Visit); 
 	InsertNode('f', &head, &avail, &lastnode, next); 
 	printf(" acdf, received:"); 
 	Traverse(0, next, Visit); 
 } 
