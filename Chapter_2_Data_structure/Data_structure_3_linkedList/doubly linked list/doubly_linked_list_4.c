#include<stdio.h>
#include<stdlib.h>

// add data at position

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


struct node * addAtEnd(struct node * head, int data){
    struct node * temp , * ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    ptr = head;
    while (ptr->next!=NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;    
    temp->prev = ptr;
    
    return head;
}

struct node * addAtPos(struct node * head,int pos, int data ){

    struct node * newP = NULL;
    struct node * temp = head;
    struct node * temp2 = NULL;
    newP = addToEmpty(newP, data);

    while (pos > 2) 
    {
        //put pos == 0 for bfoe the position
        //put pos != 1 for after the position
        //put pos > 2 for at the position
        temp = temp->next;
        pos--;
    }

    if (temp->next == NULL)
    {
        newP->prev = temp;
        temp->next = newP;
    }
    else
    {
        temp2 = temp->next;
        newP->prev = temp;
        temp->next = newP;
        newP->next = temp2;
        temp2->prev = newP;
    }
    
    return head;    
}



int main(){
    struct node *head = NULL;
    
    
    int n;
    printf("enter the number of data: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        if (i==0){
            head = addToEmpty(head, i+1);           
        }
        else{
            head = addAtEnd(head, i+1);
        }
        
    }

    printf("list before insertion: \n");
    linkedListTraversal(head);

    head = addAtPos(head, 3, 999999);

    printf("list after insertion: \n");
    linkedListTraversal(head);
    return 0;
}