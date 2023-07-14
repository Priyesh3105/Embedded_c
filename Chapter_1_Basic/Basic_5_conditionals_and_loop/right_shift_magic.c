#include<stdio.h>

int main(){
    int i = 1024;
    int counter = 0;
    for(; i; i >>= 1){
         printf("Hello World!\n");
         counter++;
    }
    
    printf("so the total count is: %d", counter);
    return 0;
}