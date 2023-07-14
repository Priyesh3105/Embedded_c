#include<stdio.h>
#include<stdlib.h>

//delete entire list

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

 

struct Node* deleteList(struct Node *head){
    struct Node *ptr ;
    ptr = head;
    
    while (ptr != NULL)
    {
        ptr = ptr -> next;
        free(head);
        head = ptr;
    }
    
    

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

    printf("linked list before deletion\n");
    linkedListTraversal(head);
    head = deleteList(head);
    printf("\n\nlinked list after deletion\n");
    linkedListTraversal(head);
    return 0;
}