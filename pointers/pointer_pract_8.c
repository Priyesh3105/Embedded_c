#include<stdio.h>

//different properties of pointer 

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,0,0,0,9};
    int *p=&a[3], *q=&a[11];

    printf("%d\n", *(p+3));
    printf("%d\n", *(q-3));
    printf("%d\n", q-p);
    printf("%d\n", q<p);
    printf("%d\n", *p<*q);
    return 0;
}