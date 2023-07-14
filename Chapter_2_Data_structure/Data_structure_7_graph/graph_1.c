#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

int isEmpty(struct queue *q)
{
    if (q->front == q->rear)
        return 1;
    return 0;
}

int isFull(struct queue *q)
{
    if (q->rear == q->size - 1)
        return 1;
    return 0;
}

void enqueue(struct queue *q, int data)
{
    if (isFull(q))
    {
        printf("Queue is full...\n");
    }
    else
    {
        q->arr[q->rear] = data;
        q->rear++;
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue is empty...\n");
    }
    else
    {
        a = q->arr[q->front];
        q->front++;
    }
    return a;
}

int main()
{
    struct queue q;
    q.size = 400;
    q.front = 0;
    q.rear = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    // adecency matrix rep of graph;
    int node;
    int i = 1;
    int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    int a[7][7] = {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0},
        {1, 0, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}
    };

    // BSF implimentation
    printf("%d ", i);
    visited[i] = 1;
    enqueue(&q, i);
    while (!isEmpty(&q))
    {
        node = dequeue(&q);
        for (int j = 0; j < 7; j++)
        {
            if (a[node][j] == 1 && visited[j] == 0)
            {
                printf("%d ", j);
                visited[j] = 1;
                enqueue(&q, j);
            }
        }
    }
    return 0;
}