#include<stdio.h>

int main(){
    int row, col;
    printf("enter the number of rows: ");
    scanf("%d", &row);
    printf("enter the number of cols: ");
    scanf("%d", &col);

    int arr[row][col];
    for(int i=0; i<row; i++){
        printf("\n\nenter the data in row no. %d : \n\n", i+1);
        for(int j=0; j<col; j++){
            printf("enter the data in col no. %d : \n", j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nso here is this two dimensinol array.\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
    printf("\n");
    }
}