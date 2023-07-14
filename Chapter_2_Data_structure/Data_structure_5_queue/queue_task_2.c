#include<stdio.h>
#include<stdlib.h>
 
struct circularQueue
{
    int size;
    int front;
    int rear;
    int* arr;
};
 
 
int isEmpty(struct circularQueue *q){
    if(q->rear==q->front){
        return 1;
    }
    return 0;
}
 
int isFull(struct circularQueue *q){
    if((q->rear+1)%q->size == q->front){
        return 1;
    }
    return 0;
}
 
void enqueue(struct circularQueue *q, int val){
    if(isFull(q)){
        printf("Queue is full\n");
    }
    else{
        q->rear = (q->rear +1)%q->size;
        q->arr[q->rear] = val; 
        printf("Enqued: %d\n", val);
    }
}
 
int dequeue(struct circularQueue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("Queue is empty\n");
    }
    else{
        q->front = (q->front +1)%q->size;
        a = q->arr[q->front]; 
    }
    return a;
}
 
 
int main(){
    struct circularQueue q;
    q.size = 4;
    q.front = q.rear = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));
    
    // Enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1); 
    printf("Dequeued %d\n", dequeue(&q)); 
    enqueue(&q, 45);
    enqueue(&q, 45);
    printf("Dequeued %d\n", dequeue(&q));
    printf("Dequeued %d\n", dequeue(&q));
    enqueue(&q, 45);
 
    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }
 
    return 0;
}