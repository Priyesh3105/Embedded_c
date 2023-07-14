#include<stdio.h>
#include<stdlib.h>

//delete at first

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr){
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr -> data);
        ptr = ptr -> next;
    }    
}

 

struct Node* deleteAtFirst(struct Node *head){
    struct Node *ptr ;
    ptr = head;

    head = head -> next;
    free(ptr);
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
    head -> data = 78;
    head -> next = second;

    //link second and third node
    second -> data = 1278;
    second -> next = third;

    //terminate the last node
    third-> data = 3462;
    third -> next = NULL;

    printf("linked list before insertion\n");
    linkedListTraversal(head);
    head = deleteAtFirst(head);
    printf("\n\nlinked list after deletation\n");
    linkedListTraversal(head);
    return 0;
}