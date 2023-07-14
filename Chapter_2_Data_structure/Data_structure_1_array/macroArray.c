#include<stdio.h>
#define N 10

int main(){
    int arr[N], i;

    for(i=0; i<N; i++){
        printf("enter the number for index %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n Array elements arec as follows:\n"); 
    for(i=0; i<N; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}