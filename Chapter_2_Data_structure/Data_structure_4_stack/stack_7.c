#include<stdio.h>
#include<stdlib.h>

/*--------stack using linked list---------*/

struct node{
    int data;
    struct node *next;
}*top = NULL;

/*---------isEmpty()-----------*/
int isEmpty(){
    if (top == NULL)
        return 1;
    else
        return 0;    
}


/*---------peek()-----------*/
void peek(){
    if (isEmpty())
        printf("stack underflow...\n");
    else
        printf("the peek element is: %d\n", top->data);    
}


/*---------push()---------*/

void push(int data){
    struct node* newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL)
    {
        printf("stack overflow...\n");
        return;  // Return without exiting the program
    }

    newNode->data = data;
    newNode->next = top;
    top = newNode; 
}

/*---------pop()---------*/

void pop(){
    struct node* temp;
    temp = top;
    if (isEmpty())
    {
        printf("stack underflow...");
        return;  // Return without exiting the program
    }
    top = temp->next;
    printf("the poped element: %d\n", temp->data);
    free(temp); 
    temp = NULL;
}

/*-----------print()----------*/

void print(){
    struct node * ptr;
    ptr = top;
    if(isEmpty()){
        printf("stack underflow...\n");
        return;  // Return without exiting the program
    }
    else{
        printf("the stack elements: ");
    while (ptr)
    {
        printf("%d, ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n\n");
    }
}

int main(){
    while (1)
    {
        int choice, data;
        printf("1: Push\n");
        printf("2: Print\n");
        printf("3: Pop\n");
        printf("4: Peek\n");
        printf("5: Quit\n");
        printf("\nPlease enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            print();
            break;
        case 3:
            pop();
            break;
        case 4:
            peek();
            break;
        case 5:
            printf("come again!");
            exit(1);
        
        default:
            printf("please enter correct choice...\n");
        }
    }
}