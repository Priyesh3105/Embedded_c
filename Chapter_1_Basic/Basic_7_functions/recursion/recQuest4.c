#include<stdio.h>

void fun(int n){
    static int d=1;
    printf("%d",n);
    printf("%d",n);
    d++;
    if(n>1) fun(n-1);
    printf("%d",d);
}

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    fun(num);
    return 0;
}