#include    <stdio.h>
#include    <stdlib.h>
#include    "queue.h"

void Error(char *);

/* AddQueue: add Item x to the queue                        */
void AddQueue(Item x, Queue *qp)
{
    if (qp->count >= MAXQUEUE)
        Error("Queue is full");
    else {
        qp->count++;
        qp->rear = (qp->rear + 1) % MAXQUEUE;
        qp->entry[qp->rear] = x;
    }
}

/* DeleteQueue: delete and return Item in front of queue    */
Item DeleteQueue(Queue *qp)
{
    Item x;

    if (qp->count <= 0)
        Error("Queue is empty");
    else {
        qp->count--;
        x = qp->entry[qp->front];
        qp->front = (qp->front + 1) % MAXQUEUE;
    }
    return x;
}
