#include <stdio.h>
#include <stdlib.h>

/*-------------------------------------------------------------------------------------*/
/*-----------------------queue implimentation using linked list-----------------=------*/
/*-------------------------------------------------------------------------------------*/

struct node *front = NULL; // declaring nodes as global variable
struct node *rear = NULL;

struct node
{
    int data;
    struct node *next;
};

/*-------------enqueue() to add data in queue---------------*/

void enqueue(int data)
{
    struct node *newP = (struct node *)malloc(sizeof(struct node));

    if (newP == NULL)
    {
        printf("Queue is full...");
    }
    else
    {
        newP->data = data;
        newP->next = NULL;
        if (front == NULL)
        {
            front = rear = newP;
            printf("Enqueued front: %d\n", rear->data);
        }
        else
        {
            rear->next = newP;
            rear = newP;
            printf("Enqueued: %d\n", rear->data);
        }
    }
}

/*-------------dequeue() to add data in queue---------------*/

void dequeue()
{
    struct node *temp = NULL;
    temp = front;
    if (temp == NULL)
    {
        printf("queue is empty...\n");
    }
    else
    {
        printf("Dequeued: %d\n", temp->data);
        front = front->next;
        free(temp);
        temp = NULL;
    }
}

/*--------------traverseQueue() to print the data of queue---------------*/

void traverseQueue()
{
    struct node *temp = NULL;
    temp = front;
    if (temp == NULL)
    {
        printf("Queue is empty...\n");
    }
    else
    {
        printf("elements are: \n");
        while (temp != NULL)
        {
            printf("Traversed element: %d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    traverseQueue();
    enqueue(12);
    enqueue(23);
    enqueue(43);
    traverseQueue();
    dequeue();
    dequeue();
    traverseQueue();
    dequeue();
    dequeue();
    traverseQueue();
    enqueue(51);
    return 0;
}