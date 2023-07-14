#include<stdio.h>

void fun(int n){
    int i = 0;
    if(n>1)
        fun(n-1);
    for(i=0; i<n; i++)
        printf(" * ");
}

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    fun(num);
    return 0;
}