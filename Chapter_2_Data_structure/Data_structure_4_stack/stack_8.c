#include<stdio.h>
#include<stdlib.h>

/*--------reverse the stack using linked list---------*/

struct node{
    int data;
    struct node *next;
};

/*---------isEmpty()-----------*/
int isEmpty(struct node **top){
    if (*top == NULL)
        return 1;
    else
        return 0;    
}


/*---------push()---------*/

void push(int data, struct node **top){
    struct node* newNode = NULL;
    newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL)
    {
        printf("stack overflow...\n");
        return;  // Return without exiting the program
    }
    newNode->data = data;
    newNode->next = NULL;

    newNode->next = *top;
    *top = newNode;
}

/*---------pop()---------*/

int pop(struct node **top){
    int val;
    struct node* temp;
    temp = *top;
    if (isEmpty(top))
    {
        printf("stack underflow...\n");
        return 0;  // Return without exiting the program
    }
    *top = temp->next;
    val = temp->data;
    free(temp); 
    temp = NULL;
    return val;
}

/*-----------print()----------*/

void print(struct node **top){
    struct node * ptr;
    ptr = *top;
    if(isEmpty(top)){
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

/*------------------reverseStac()--------------------*/

void reverseStack(struct node ** top){
    struct node * temp1 = NULL;
    struct node * temp2 = NULL;

    //pushing data from original stack to temp1 stack
    while (*top != NULL)
    {
        push(pop(top),&temp1);
    }
    
    //pushing data from temp1 to temp2 stack
    while (temp1 != NULL)
    {
        push(pop(&temp1),&temp2);
    }

    //pushing data from temp2 to original stack
    while (temp2 != NULL)
    {
        push(pop(&temp2),top);
    }
    print(top);
}

int main(){
    struct node * top = NULL;

    while (1)
    {
        int choice, data;
        printf("1: Push\n");
        printf("2: Print\n");
        printf("3: reverse the stack\n");
        printf("4: Quit\n");
        printf("\nPlease enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data: ");
            scanf("%d", &data);
            push(data, &top);
            break;
        case 2:
            print(&top);
            break;
        case 3:
            printf("stack before reverse:\n");
            print(&top);
            printf("reversed stack: \n");
            reverseStack(&top);
            break;
        case 4:
            printf("come again!");
            exit(1);
        
        default:
            printf("please enter correct choice...\n");
        }

        printf("\n");
    }

    return 0;
}
