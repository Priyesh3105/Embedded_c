#include<stdio.h>

int main(){
    int arr[3][2][4]={11,22,33,44,55,66,77,88,99,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<4; k++){
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}