#include<stdio.h>

//traversing an array using using pointers airthmatic properties

int main(){
    int a[] = {1,2,3,4,5,6};
    int *p = &a[2];
    printf("%d\n",p);
    printf("%d\n",*p);
    p = p+2;
    printf("%d\n",p);
    printf("%d\n",*p);
}