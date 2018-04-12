#define MAXSTACK    3

typedef char Item_type;

typedef struct stack_tag {
	int top;
	Item_type entry[MAXSTACK];
} Stack_type;

typedef struct deque_tag {
	Stack_type front;
	Stack_type rear;
} Deque_type;
