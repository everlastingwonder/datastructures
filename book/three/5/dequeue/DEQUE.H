#define MAXDEQUE	3

typedef char Item_type;

typedef struct deque_tag {
	int front;
	int rear;
	Item_type entry[MAXDEQUE];
} Deque_type;

enum position { FRONT, REAR };
