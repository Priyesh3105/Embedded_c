#include<stdio.h>
#define MAX 5

/*-------stack using array-------*/

int stack_arr[MAX];
int top = -1;


/*-------push()-------*/
void push(int data){
    if(top == MAX-1){
        printf("stack overflow...");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;    
}


int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    return 0;
}