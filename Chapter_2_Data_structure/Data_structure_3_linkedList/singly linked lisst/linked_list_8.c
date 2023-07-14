#include<stdio.h>
#include<stdlib.h>

//delete at end

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
 

struct Node* deleteAtEnd(struct Node *head){

    struct Node *p = head;
    struct Node *q = head -> next;

    while (q->next != NULL)
    {
        p = p -> next;
        q = q -> next;
    }
    
    p -> next = NULL;
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
    head = deleteAtEnd(head);
    printf("\n\nlinked list after deletation\n");
    linkedListTraversal(head);
    return 0;
}