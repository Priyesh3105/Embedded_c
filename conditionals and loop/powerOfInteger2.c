#include<stdio.h>

int main(){
    int exponent, base, expo;
    double power;
    printf("please enter the base: ");
    scanf("%d", &base);
        printf("please enter the exponent: ");
    scanf("%d", &exponent);

    expo = exponent;
    power = 1.0;
    if(exponent<0){
        while (expo!=0)
        {
            power = power * (1.0/base);
            expo++;
        }
        printf("%lf is answer of %d to the power %d.", power, base,exponent);
    }
    else{
        while (expo!=0)
        {
            power = power * base;
            expo--;
        }
        printf("%lf is answer of %d to the power %d.", power, base,exponent);
    }  
    return 0;
}