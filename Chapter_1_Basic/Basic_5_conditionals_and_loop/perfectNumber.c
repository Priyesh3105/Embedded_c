#include<stdio.h>

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);

    int i, rem, sum=0;
    for(i=1; i<num; i++){
        rem = num % i;
        if(rem == 0){
            sum = sum + i;
        }
    }

    if(sum == num){
        printf("%d is a perfect number.", num);
    }
    else{
        printf("%d is not a perfect number", num);
    }
    return 0;
}