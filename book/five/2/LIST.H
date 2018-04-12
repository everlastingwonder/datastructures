#define MAX 1000

typedef int Key_type;

typedef struct item_tag {
	Key_type key;
} Item_type;

typedef struct node_tag {
	Item_type info;
	struct node_tag *next;
} Node_type;

typedef struct list_tag {
	Node_type *head;
} List_type;
