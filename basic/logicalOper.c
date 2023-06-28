#include<stdio.h>

int main(){
    int a=7;
    int b=8;

    if(a<b && a!=5 && a==7 && a>4){
        printf("you are getting %d , beacuse this satisfy the if condition using logical &&\n ", a+b);
    }
    else{
        printf("OOPS this is wrong ");
    }

    if(a>b || a==5 || a!=7 || a>4){
        printf("you are getting %d , beacuse this satisfy the if condition using logical ||\n ", a-b);
    }
    else{
        printf("OOPS this is wrong ");
    }
}