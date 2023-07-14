#include<stdio.h>
#include<stdlib.h>

//reverce an entire list

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr){
    if(ptr == NULL)
    printf("list is empty!");

    while (ptr != NULL)
    {
        printf("element: %d\n", ptr -> data);
        ptr = ptr -> next;
    }    
}

 

struct Node* reverse(struct Node *head){
    struct Node *nextPtr = NULL;
    struct Node *prevPtr = NULL;
    
    while (head != NULL)
    {
        nextPtr = head->next;
        head->next = prevPtr;
        prevPtr = head;
        head = nextPtr;
    }
    head = prevPtr;    
    return head;   
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
    head -> data = 0;
    head -> next = second;

    //link second and third node
    second -> data = 1;
    second -> next = third;

    //terminate the last node
    third-> data = 2;
    third -> next = NULL;

    printf("linked list before reverse\n");
    linkedListTraversal(head);
    head = reverse(head);
    printf("\n\nlinked list after reverse\n");
    linkedListTraversal(head);
    return 0;
}