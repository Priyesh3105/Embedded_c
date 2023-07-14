#include<stdio.h>

//arirthmatic properties of pointer

int main(){
    int a[] = {1,2,3,4,5,6};
    int *p = &a[2];
    printf("%d\n",*(p++));
    printf("%d\n",*p);
    printf("%d\n",*(--p));
    return 0;
}