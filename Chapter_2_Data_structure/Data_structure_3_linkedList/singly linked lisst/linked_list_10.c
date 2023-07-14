#include<stdio.h>
#include<stdlib.h>

//countOfNodes

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr){
    if (ptr == NULL)
        printf("linked list is empty: ");
        
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr -> data);
        ptr = ptr -> next;
    }    
}

 

void countOfNodes(struct Node *head){

    if (head == NULL)
        printf("linked list is empty: ");
    struct Node *p = head;
    int count = 0;
    while (p != NULL)
    {
        p = p -> next;
        count++; 
    }
    printf("%d",count);   
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;

    //memory allocation
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    //link first and second node
    head -> data = 78;
    head -> next = second;

    //link second and third node
    second -> data = 1278;
    second -> next = third;

    //terminate the last node
    third-> data = 3462;
    third -> next = NULL;

    printf("linked list before deletation\n");
    linkedListTraversal(head);
    printf("\n\ncountOfNodes in linked list \n");
    countOfNodes(NULL);
    return 0;
}