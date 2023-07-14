#include<stdio.h>
#include<stdlib.h>

// add data at beg

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr){
    if (ptr == NULL)
    {
        printf("list is empty!\n");
    }
    
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr -> data);
        ptr = ptr -> next;
    }    
}

struct node * addToEmpty(struct node * head, int data){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}

struct node * addAtBeg(struct node * head, int data){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}



int main(){
    struct node *head = NULL;
    
    
    int n;
    printf("enter the number of data: ");
    scanf("%d",&n);

    printf("list before insertion: \n");
    linkedListTraversal(head);

    for(int i=1; i<=n; i++){
        if (i==1){
            head = addToEmpty(head, i*12 + i);           
        }
        else{
            head = addAtBeg(head, i*i + 12);
        }
        
    }

    printf("list after insertion: \n");
    linkedListTraversal(head);
    return 0;
}