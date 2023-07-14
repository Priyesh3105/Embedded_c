#include<stdio.h>

//printing sum of array using array name as pointer

int add(int b[], int len){
    int sum=0,i;
    for(i=0; i<len; i++)
    sum += b[i];
    return sum;
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,0,9,9,0};
    int len = sizeof(a)/sizeof(a[0]);
    printf("%d",add(a, len));
    return 0;
}