#include <stdio.h>
#include <stdlib.h>

//dynamic memory allocation using malloc()

int main(){
    int i, n;
    printf("enter the number of interger: \n");
    scanf("%d", &n);
    int *ptr = (int*)malloc(n*sizeof(int));

    if(ptr == NULL){
        printf("Memory is not available.");
        exit(1);
    }
    for ( i = 0; i < n; i++)
    {
        printf("enter the interger: ");
        scanf("%d", ptr + i);
    }
    for ( i = 0; i < n; i++)
        printf("%d ", *(ptr+i));

    free(ptr); // Free the dynamically allocated memory
    return 0;
}