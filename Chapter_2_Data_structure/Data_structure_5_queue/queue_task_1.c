#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

/*--------------------queue implimentation using array------------------------*/

struct queue
{
    int items[MAX_SIZE];
    int front;
    int rear;
};

/*---------isEmpty()----------*/
int isEmpty(struct queue *q)
{
    if (q->rear == q->front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/*---------isFull()----------*/
int isFull(struct queue *q)
{
    if (q->rear == MAX_SIZE - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/*----------enqueue() to add element at rear------------*/
void enqueue(struct queue *q, int data)
{
    if (isFull(q))
    {
        printf("Queue is full...\n");
        return;
    }
    q->items[++(q->rear)] = data;
    printf("Enqueued: %d\n", data);
}

/*----------dequeue() to add element at rear------------*/

void dequeue(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty...\n");
        return;
    }
    int val = 0;
    val = q->items[++(q->front)];
    printf("Dequeued: %d\n", val);
}

int main()
{
    struct queue q;
    q.front = -1;
    q.rear = -1;

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    return 0;
}