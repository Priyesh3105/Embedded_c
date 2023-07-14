#include <stdio.h>
#include <stdlib.h>

//insert at index

struct node{
    int data;
    struct node *next;
};

void traverseList(struct node *head){
    struct node *p;
    p = head;

    if(p->next==head){
        printf("circualer linked list is empty!");
    }
    else
    {
        do
        {
            printf("element is %d\n",p->data);
            p = p->next;
        } while (p != head);
        
    }
    
}

struct node * insertAtIndex(struct node *head, int data, int index){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    struct node * p;
    p = head;
    for (int i = 1; i < index; i++)
    {
        p = p->next;
    }
    
    ptr->next = p->next;
    p->next = ptr;
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


    printf("circular linkedlist before insertion\n");
    traverseList(head);

    head = insertAtIndex(head, 101, 3);

    printf("circular linkedlist after insertion\n");
    traverseList(head);
    return 0;
}