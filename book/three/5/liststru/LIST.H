#define	MAXLIST	6

typedef char Item_type;

typedef struct list_tag {
	int count;
	Item_type entry[MAXLIST];
} List_type;
