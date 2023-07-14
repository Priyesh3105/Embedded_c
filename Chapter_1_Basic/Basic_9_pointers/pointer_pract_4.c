#include<stdio.h>

//pring address of a variable using pointer 

int main(){
    int i =0;
    int *p = &i;
    printf("here is the address of var i: %p", p);
}