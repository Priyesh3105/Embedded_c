#include<stdio.h>

int func(int num){
    int count = 2;
    while(num){
        count++;
        num >>= 2;
    }
    return count;
}

int main(){
    int result = func(435);
    printf("Result: %d\n", result);
    return 0;
}