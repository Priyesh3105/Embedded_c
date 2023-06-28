#include<stdio.h>
void fun(int n){
    if(n == 0){
        return;
    }
    else{
        printf("%d\n", n);
    }
    return fun(n-1);
}

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    fun(num);
    return 0;
}