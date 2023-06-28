#include<stdio.h>

int main(){
    int arr[10], i;

    for(i=0; i<10; i++){
        printf("enter the number for index %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n Array elements arec as follows:\n"); 
    for(i=0; i<10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}