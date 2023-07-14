#include<stdio.h>

typedef union 
{
    int a;
    char b;
    float c;
}data;


int main(){
    data arr[10];
    arr[0].a=10;
    arr[2].c=10.789;
    arr[1].b='a';

    return 0;
}