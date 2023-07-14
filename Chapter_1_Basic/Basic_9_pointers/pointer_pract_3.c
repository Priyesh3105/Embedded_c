#include<stdio.h>

//findmid() function using pointers

int *findMid(int arr[], int n){
    return &arr[n/2];
}

int main(){
    int arr[] ={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *mid= findMid(arr, n);
    printf("%d is the mid of the array,", *mid);
    return 0;
}