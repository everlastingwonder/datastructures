#define	MAXQUEUE	5	/* use a small value for testing	*/

typedef enum action_tag { ARRIVE, DEPART } Action_type;

typedef struct plane_tag {
	int id;				/* identification number of airplane*/
	int tm;				/* time of arrival in queue			*/
} Plane_type;

typedef Plane_type Item_type;

typedef struct queue_tag {
	int count;			/* number of airplanes in the queue	*/
	int front;			/* front of the queue				*/
	int rear;			/* rear of the queue				*/
	Item_type entry[MAXQUEUE];
} Queue_type;
