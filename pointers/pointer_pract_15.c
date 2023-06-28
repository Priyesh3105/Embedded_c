#include<stdio.h>

//pointer to an array address

int main(){
    int a[5]= {1,2,3,4,5};
    int (*p)[5] = &a;
    printf("%p\n", p);
    printf("%d\n", **p);
    return 0;
}