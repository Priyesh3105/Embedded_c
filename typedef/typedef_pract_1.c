#include<stdio.h>
#include<string.h>

//simple typedef declearation

int main(){
    typedef unsigned int play;
    play a, b;
    a= 20;
    b= 30;
    printf("%u %u", a, b);
    return 0;
}