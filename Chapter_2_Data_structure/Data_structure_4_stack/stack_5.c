#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int stack_arr[MAX];
int top = -1;

/*-------------prime factor using stack------------*/

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

void prime_fact(int num){
    int i=2;
    while (num != 1)
    {
        while (num%i == 0)
        {
            push(i);
            num = num/i;
        }
        i++;        
    }
    while (top != -1)
    {
        printf("%d\n", pop());
    }   
}

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);

    prime_fact(num);
    return 0;
}