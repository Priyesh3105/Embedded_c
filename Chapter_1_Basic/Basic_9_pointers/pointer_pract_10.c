#include<stdio.h>

//sum of an array using array name as pointer

int main(){
    int a[] = {15,25,75,36,75,46,36,37,95,85};
    int sum =0, *p;
    for(p=a; p<=a+9; p++){
        sum += *p;
    }
    printf("sum of the array is: %d", sum);
}