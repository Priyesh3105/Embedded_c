#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack_arr[MAX];
int top = -1;


/*-------isFull()-------*/
int isFull(){
    if(top == MAX-1){
        return 1;
    }
    return 0;      
}

/*-------isEmpty()-------*/
int isEmpty(){
    if(top == -1){
        return 1;
    }
    return 0;      
}

/*-------push()-------*/
void push(int data){
    if(isFull()){
        printf("stack overflow...\n");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;    
}

/*-------pop()-------*/
int pop(){
    int value;
    if(isEmpty()){
        printf("stack underflow...\n");
        exit(1);
    }
    value = stack_arr[top];
    top = top - 1;
    return value;
}

/*-------print()-------*/
void print(){
    int i;
    if(isEmpty()){
        printf("stack underflow...");
        exit(1);
    }
    for(i=top; i>=0; i--)
        printf("%d ", stack_arr[i]);
    printf("\n");

}

/*-------peek()-------*/
int peek(){
    int i;
    if(isEmpty()){
        printf("stack underflow...");
        exit(1);
    }
    return stack_arr[top];
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