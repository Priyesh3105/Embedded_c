#include<stdio.h>

//searching min and max of an array using pointers

void minMax(int arr[], int len, int *min, int *max){
    *min = *max = arr[0];
    for(int i=0; i<len; i++){
        if(arr[i]<*min){
            *min = arr[i];
        }
        if (arr[i]>*max)
        {
            *max = arr[i];
        }        
    }
}

int main(){
    int arr[] = {32,54,67,98,90,89,78,56,54,34,12,78,89,67,53,67,89};
    int min, max;
    int len= sizeof(arr)/sizeof(arr[0]);
    minMax(arr, len, &min, &max),
    printf("the minimum & maximum numbers of this array are %d & %d", min, max);
    return 0;    
}