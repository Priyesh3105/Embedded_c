#include <stdio.h>
#include <stdarg.h>

double average(int num, ...){
    va_list valist;
    double sum = 0;
    int i;

    va_start(valist, num);

    for(i=0; i< num; i++){
        sum += va_arg(valist, int);
    }

    va_end( valist);
     return sum/num;
}

int main(){
    printf("Average of 1, 2 ,3 ,4 ,5 is %f\n", average(1,2,3,4,5));
    printf("Average of 12,54,67,89,3,567,563,4,57,54,544 is %f\n", average(12,54,67,89,3,567,563,4,57,54,544));
    printf("%f", average(54,54,56,6567,345,342,4,356,6567,674,56,243,42,54,325,54,5,356,56,4,6,456,46,5,5,67));
}