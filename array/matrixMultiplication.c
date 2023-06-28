#include<stdio.h>
#define MAX 50

int main(){
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows, acols, brows, bcols, sum=0;


    printf("enter the number of rows an cols for matrix a: ");
    scanf("%d %d", &arows, &acols);

    for(int i=0; i<arows; i++){
        for(int j=0; j<acols; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the number of rows an cols for matrix b: ");
    scanf("%d %d", &brows, &bcols);

    if (brows != acols)
    {
        printf("sorry we can not multiply these matrix");
    }
    else{
        for(int i=0; i<brows; i++){
            for(int j=0; j<bcols; j++){
                scanf("%d", &b[i][j]);
            }
        }
    }

    printf("\n");

    for(int i=0; i<arows; i++){
        for (int j=0; j<bcols; j++){
            for (int k=0; k<brows; k++){
                sum += a[i][k] * b[k][j];
            }
            product[i][j]= sum;
            sum =0;
        }
        
    }

    printf("\nso here is the multiplication two dimensinol array.\n");
    for(int i=0; i<arows; i++){
        for(int j=0; j<bcols; j++){
            printf("%d ", product[i][j]);
        }
    printf("\n");
    }
    return 0;    
}