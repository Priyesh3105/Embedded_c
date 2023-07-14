#include<stdio.h>

int main(){
    int exponent, base;
    int power,expo;
    printf("please enter the base: ");
    scanf("%d", &base);
        printf("please enter the exponent: ");
    scanf("%d", &exponent);

    expo = exponent;
    power = 1;
    if(exponent>0){
        while (expo!=0)
        {
            power = power * base;
            expo--;
        }
        printf("%d is answer of %d to the power %d.", power, base,exponent);
    } 
    return 0;
}