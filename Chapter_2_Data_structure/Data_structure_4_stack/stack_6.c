#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int stack_arr[MAX];
int top = -1;

/*-------------decimal to binary in stack------------*/

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

void dec_to_bi(int num){
    while (num != 0)
    {
        push(num%2);
        num = num/2;      
    }
    while (top != -1)
    {
        printf("%d", pop());
    }   
}

int main(){
    int num;
    printf("enter the decimal number: ");
    scanf("%d", &num);

    dec_to_bi(num);
    return 0;
}