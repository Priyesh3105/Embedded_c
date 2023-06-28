#include<stdio.h>
int fun();
int var =10;

int main(){
    int var = 01;
    printf("%d is a local variable declared in main function \n", var);
    fun();
    return 0;
}

int fun(){
    printf("%d is a global variable declared outside main function.", var);
}