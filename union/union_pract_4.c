#include<stdio.h>

//general question

struct {
    short s[5];
    union{
        float a;
        long b;
    }u;    
}t;

int main(){
    printf("%d\n",sizeof(t));
}