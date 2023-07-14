#include <stdio.h>
#include <stdlib.h>

//insert at node

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

struct node * insertAtNode(struct node *head, int data, struct node *prevNode){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    
    ptr->next = prevNode->next;
    prevNode->next = ptr;
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

    head = insertAtNode(head, 101, third);

    printf("circular linkedlist after insertion\n");
    traverseList(head);
    return 0;
}