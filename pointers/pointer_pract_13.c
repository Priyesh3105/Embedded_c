#include<stdio.h>

//printing rowsum using pointer

int main(){
    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int *p;

    printf("row mazor: \n");
    for(p=&a[0][0]; p<=&a[2][2]; p++)
    printf("%d ",*p);

    printf("\nmatrix format: \n");
    for(p=&a[0][0]; p<=&a[2][2]; p++)
    {
        printf("%d ",*p);
        if(p==&a[0][2] || p==&a[1][2] || p==&a[2][2])
        printf("\n");
    }
    return 0;
}