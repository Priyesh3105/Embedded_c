#include<stdio.h>

int main(){
    int x, y, sum, carry;
    printf("please enter the first number: ");
    scanf("%d", &x);
    printf("please enter the second number: ");
    scanf("%d", &y);

    while (y!=0)
    {
        sum = x ^ y;
        carry = (x&y)<<1;
        x = sum;
        y = carry;
    }
    
    printf("%d is the addition of two numbers", x);
    return 0;
}