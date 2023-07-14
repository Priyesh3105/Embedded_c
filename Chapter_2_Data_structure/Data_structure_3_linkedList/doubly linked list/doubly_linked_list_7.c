#include<stdio.h>
#include<stdlib.h>

// dellAtPos

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

struct node * dellAtPos(struct node * head,int pos){

    struct node * newP = NULL;
    struct node * temp = head;
    struct node * temp2 = NULL;

    while (pos > 2) 
    {
        //put pos == 0 for bfoe the position
        //put pos != 1 for after the position
        //put pos > 2 for at the position
        temp = temp->next;
        pos--;
    }

    temp2 = temp->prev;
    temp2->next = temp->next;
    temp->next->prev = temp2;
    free(temp);
    temp = NULL;
        
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

    printf("list before deletion: \n");
    linkedListTraversal(head);

    head = dellAtPos(head, 4);

    printf("list after deletion: \n");
    linkedListTraversal(head);
    return 0;
}