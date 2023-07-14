#include<stdio.h>
#include<stdlib.h>

//insert at Node

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

 

struct Node* insertAtNode(struct Node *head, struct Node *prevNode, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> data = data;

    ptr -> next = prevNode -> next;
    prevNode -> next = ptr;
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
    head = insertAtNode(head, second, 9669);
    printf("\n\nlinked list after insertion\n");
    linkedListTraversal(head);
    return 0;
}
