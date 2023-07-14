#include<stdio.h>

int main(){
    int rows, cols;
    printf("enter the number of rows: ");
    scanf("%d", &rows);
    printf("enter the number of cols: ");
    scanf("%d", &cols);
    for(int i =1; i<=rows; i++){
        for(int j=1; j<=cols; j++){
            if(i == 1 || j == 1 || i == rows || j == cols)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
}