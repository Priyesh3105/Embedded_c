#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack_arr[MAX];
int top = -1;


/*-------push()-------*/
void push(int data){
    if(top == MAX-1){
        printf("stack overflow...\n");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;    
}

/*-------pop()-------*/
int pop(){
    int value;
    if(top == -1){
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
    if(top == -1){
        printf("stack underflow...");
        exit(1);
    }
    for(i=top; i>=0; i--)
        printf("%d ", stack_arr[i]);
    printf("\n");

}

int main(){
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(5);

    print();
    data = pop();
    printf("the poped element is: %d\n", data);

    return 0;
}