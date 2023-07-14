#include<stdio.h>

int main(){
    int a[]={34,56,54,32,67,89,90,32,21};
    printf("Array elements arec as follows: "); 
    for(int i=0; i<9; i++){
        printf("%d ", a[i]);
    }
   
    printf("\nreverce of the above array: ");
    for(int i=8; i>=0; i--){
        printf("%d ", a[i]);
    }

}