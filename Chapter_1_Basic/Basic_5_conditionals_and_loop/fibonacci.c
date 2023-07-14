#include<stdio.h>

int main(){
    int x;
    printf("please enter the number: ");
    scanf("%d", &x);
   
    int a=0, b=1, result= 0;
    for(int i=1; i<=x; i++){
        printf("%d\n", a);
        result = a+b;
        a=b;
        b= result;
    }

    return 0;
}