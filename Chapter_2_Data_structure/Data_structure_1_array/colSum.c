#include<stdio.h>

int main(){
    int arr[5][5]={
                {12,10,34,65,34},
                {25,45,76,84,56},
                {68,85,65,68,65},
                {93,84,58,96,49},
                {61,34,65,76,89},
            };
    int sum=0;
    for(int j=0; j<5; j++){
        for(int i=0; i<5; i++){
            sum += arr[i][j];
        }
        printf("%d ", sum);
        sum=0;
    }
}