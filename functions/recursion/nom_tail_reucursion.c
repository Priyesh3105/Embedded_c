#include<stdio.h>
void fun(int n){
    if(n == 0){
        return;
    }
    else{
        fun(n-10);
    }
    printf("%d\n", n);
}

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    fun(num);
    return 0;
}