#include<stdio.h>
#define N 5

//printing array to print reverse order of an array

int main(){
    printf("enter the %d elements for array.\n", N);
    int a[N], *p;
    for(p = a; p<=a+N-1; p++)
        scanf("%d", p);

    printf("here is the reverse order of array.\n");
    for(p=a+N-1; p>=a; p--)
    printf("%d ", *p);
    return 0;
}