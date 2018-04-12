typedef char Item_type;

typedef struct node_tag {
	Item_type info;
	struct node_tag *next;
} Node_type;

typedef struct deque_tag {
	Node_type *rear;
} Deque_type;
