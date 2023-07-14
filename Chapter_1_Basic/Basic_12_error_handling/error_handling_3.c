#include <stdio.h>
#include <stdlib.h>

int main() {
    int divident = 20;
    int divisor ;
    int quotient;

    printf("enter the value of divisor: ");
    scanf("%d", &divisor);

    if(divisor == 0){
        fprintf(stderr ,"Division by zero! Exiting...\n");
        exit(EXIT_FAILURE);
    }

    quotient = divident / divisor;
    fprintf(stderr ,"Value of quotient : %d\n", quotient);

    exit(EXIT_SUCCESS);
}