#include<stdio.h>
#include<stdlib.h>

//insert at first

struct Node
{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr){
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr -> data);
        ptr = ptr -> next;
    }    
}

struct Node* insertAtFirst(struct Node *head, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> next = head;
    ptr -> data = data;
    return ptr;
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

    printf("\n\nlinked list before insertion\n");
    linkedListTraversal(head);
    head = insertAtFirst(head, 0);
    printf("\n\nlinked list after insertion\n");
    linkedListTraversal(head);
    return 0;
}