#include <stdio.h>
#include <stdlib.h>

//delete at index

struct node{
    int data;
    struct node *next;
};

void traverseList(struct node *head){
    struct node *p;
    p = head;

    do
    {
        printf("element is %d\n",p->data);
        p = p->next;
    } while (p != head);
    
}

struct node* deleteAtIndex(struct node* head, int index) {

    struct node* ptr = head->next;
    struct node* qtr = head;

    for (int  i = 0; i < index-1; i++)
    {
        ptr = ptr->next;
        qtr = qtr->next;
    }
    

    qtr->next = ptr->next;
    free(ptr);

    return head;
}


int main(){
    struct node * head = (struct node *)malloc(sizeof(struct node));
    struct node * second = (struct node *)malloc(sizeof(struct node));
    struct node * third = (struct node *)malloc(sizeof(struct node));
    struct node * fourth = (struct node *)malloc(sizeof(struct node));
    struct node * fifth = (struct node *)malloc(sizeof(struct node));

    //initializing the circular linked list
    head->data = 11;
    head->next = second;

    //linking second node
    second->data = 21;
    second->next = third;

    //linking third node
    third->data = 51;
    third->next = fourth;

    //linking fourth node
    fourth->data = 108;
    fourth->next = fifth;

    //linking fifth node
    fifth->data = 501;
    fifth->next = head;


    printf("circular linkedlist before deletion\n");
    traverseList(head);

    head = deleteAtIndex(head,3);

    printf("circular linkedlist after deletion\n");
    traverseList(head);
    
    return 0;
}