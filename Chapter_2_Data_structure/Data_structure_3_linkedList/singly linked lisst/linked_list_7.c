#include<stdio.h>
#include<stdlib.h>

//delete at idex

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

 

struct Node* deleteAtIndex(struct Node *head, int index){

    struct Node *p = head;
    struct Node *q = head -> next;
    int i =0;
    while (i != (index-1))
    {
        p = p -> next;
        q = q -> next;
        i++;
    }
    
    p -> next = q ->next;
    free(q);
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

    printf("linked list before deletation\n");
    linkedListTraversal(head);
    head = deleteAtIndex(head, 1);
    printf("\n\nlinked list after deletation\n");
    linkedListTraversal(head);
    return 0;
}