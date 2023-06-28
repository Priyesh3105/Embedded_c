#include<stdio.h>

int fact(int n){
    if(n==1)
        return 1;
    else
        return n * fact(n - 1 );
}

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    printf("factorial of the %d is %d.", num , fact(num));
    return 0;
}