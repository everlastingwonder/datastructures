#define MAXSTACK    10

typedef char Item_type;

typedef struct stack_tag {
	int top;
	Item_type entry[MAXSTACK];
} Stack_type;

Boolean_type Empty(Stack_type *);
Boolean_type Full(Stack_type *);
void Error(char *);
void Initialize(Stack_type *);
void Push(Item_type, Stack_type *);
void Pop(Item_type *, Stack_type *);
int  Size(Stack_type *);
