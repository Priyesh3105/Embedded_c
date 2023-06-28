#include<stdio.h>

int main(){
    int rows, n=1;
    printf("please enter the number of rows: ");
    scanf("%d", &rows);

    for(int i=0; i<rows; i++){
        for(int j=0; j<i; j++){
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
    return 0;
}