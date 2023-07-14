#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_arr[MAX];
int first = -1;

/*------inserting data in stack from first------*/

/*-------isEmpty()-------*/
int isEmpty(){
    if(first == -1){
        return 1;
    }
    return 0;      
}

/*-------isFull()-------*/
int isFull(){
    if(first == MAX-1){
        return 1;
    }
    return 0;      
}

/*-------peek()-------*/
int peek(){
    int i;
    if(isEmpty()){
        printf("stack underflow...");
        exit(1);
    }
    return stack_arr[0];
}

/*-------push()-------*/

void push(int data){
    if(isFull()){
        printf("stack overflow...");
        exit(1);
    }
    int i;
    first +=1;
    for(i=first; i>0; i--)
        stack_arr[i] = stack_arr[i-1];
    stack_arr[0] = data;
}

/*-------pop()-------*/

int pop(){
    if(isEmpty()){
        printf("stack underflow...");
        exit(1);
    }
    int value = 0, i;
    value = stack_arr[0];
    for(i=0; i<first; i++)
        stack_arr[i] = stack_arr[i+1];
    first -=1;
        
    return value;
}

/*-------print()-------*/

void print(){
    if(isEmpty()){
        printf("stack underflow...");
        exit(1);
    }
    for(int i=0; i<=first; i++)
        printf("%d ", stack_arr[i]);
    printf("\n");
}

int main(){
    int choice, data;
    while (1)
    {
        printf("\n\n");
        printf("1: Push\n");
        printf("2: Pop\n");
        printf("3: Print the top element\n");
        printf("4: Print all elements of the stack\n");
        printf("5: Quit\n");

        printf("\n\nPlease enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("please enter your data: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            data = pop();
            printf("The poped data is: %d\n", data);
            break;
        case 3:
            data = peek();
            printf("The top data is: %d\n", data);
            break;
        case 4:
            printf("The stack data is \n");
            print();
            break;
        case 5:
            printf("Thank you for being here\n  come again!  \n");
            exit(1);
        
        default:
            printf("Enter a correct choice...");
        }
    }

    return 0;
}