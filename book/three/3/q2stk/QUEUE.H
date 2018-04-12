#define MAXQUEUE    3

typedef struct queue_tag {
	int count;
	int front;
	int rear;
	Item_type entry[MAXQUEUE];
} Queue_type;

void AddQueue(Item_type, Queue_type *);
void DeleteQueue(Item_type *, Queue_type *);
void Error(char *);
void QueueInitialize(Queue_type *);
int  QueueSize(Queue_type *);
void QueueToStack(Stack_type *, Queue_type *);
Boolean_type QueueEmpty(Queue_type *);
Boolean_type QueueFull(Queue_type *);
