#define MAXQUEUE    3

typedef char Item_type;

typedef struct queue_tag {
	int count;
	int front;
	int rear;
	Item_type entry[MAXQUEUE];
} Queue_type;

void AddQueue(Item_type, Queue_type *);
void DeleteQueue(Item_type *, Queue_type *);
void EmptyQueue(Queue_type *);
void Error(char *);
void Initialize(Queue_type *);
void Service(Item_type);
int  Size(Queue_type *);
Boolean_type Empty(Queue_type *);
Boolean_type Full(Queue_type *);
