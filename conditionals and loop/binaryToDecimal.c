#include<stdio.h>

int main(){
    int binary,deci =0,rem,weight =1;
    printf("enter the binary number: ");
    scanf("%d", &binary);

    int bi = binary;
    while (bi != 0)
    {
        rem = bi%10;
        deci = deci + rem * weight;
        bi = bi / 10;
        weight = weight * 2;
    }

    printf("the decimal transformation of %d is %d.", binary, deci);
    return 0;
    
}