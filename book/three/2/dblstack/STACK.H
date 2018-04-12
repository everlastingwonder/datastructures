 #define MAXSTACK    10 
 typedef char Item_type; 
 typedef struct stack_tag { 
 	int topA; 
 	int topB; 
 	Item_type entry[MAXSTACK]; 
 } DoubleStack_type; 
 void Initialize(DoubleStack_type *); 
 void PopA(Item_type *, DoubleStack_type *); 
 void PopB(Item_type *, DoubleStack_type *); 
 void PushA(Item_type, DoubleStack_type *); 
 void PushB(Item_type, DoubleStack_type *); 
