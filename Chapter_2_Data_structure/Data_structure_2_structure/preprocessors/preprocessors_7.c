#include<stdio.h>

#define tokenpaster(n) printf("token" #n" = %d", token##n)

int main(void){
    int token93473 = 91;
    tokenpaster(93473);
    return 0;
}