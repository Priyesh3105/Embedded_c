#include<stdio.h>

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);

    int q =num, fact=1, rem, result;
    while(q!=0){
        rem =q%10;
        for(int i=1; i<=rem; i++){
            fact= fact*i;
        }
        result= result+fact;
        q=q/10;
        fact=1;
    }

    if (result == num)
        printf("This is a strong number.\n");
    else
        printf("This is not a strong number.\n");

    return 0;
}