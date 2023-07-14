#include<stdio.h>

//using putchar() function

int main(){
    int ch;
    for(ch = 0; ch <= 127; ch++)
    putchar(ch);

    printf("\n");

    int c;
    for(c = 'A'; c <= 'Z'; c++)
    putchar(c);
    return 0;
}