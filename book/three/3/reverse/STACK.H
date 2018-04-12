#define MAXSTACK    10

typedef int Item_type;

typedef struct stack_tag {
	int top;
	Item_type entry[MAXSTACK];
} Stack_type;

Boolean_type StackEmpty(Stack_type *);
Boolean_type StackFull(Stack_type *);
void Error(char *);
void StackInitialize(Stack_type *);
void Push(Item_type, Stack_type *);
void Pop(Item_type *, Stack_type *);
int  StackSize(Stack_type *);
