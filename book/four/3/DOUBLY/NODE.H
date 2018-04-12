typedef char Item_type;

typedef struct node_tag {
	Item_type info;
	struct node_tag *next;
	struct node_tag *prev;
} Node_type;
