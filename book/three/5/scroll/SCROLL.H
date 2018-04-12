#define MAXSCROLL	3

typedef char Item_type;

typedef struct queue_tag {
	int front;
	int rear;
	Item_type entry[MAXSCROLL];
} Scroll_type;

enum position { FRONT, REAR };
