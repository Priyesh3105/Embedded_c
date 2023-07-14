#include <stdio.h>

typedef int IntegerArray[5];

void printArray(IntegerArray arr) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    IntegerArray a={1,2,3,4,5}, b = {6,7,8,9,0}, c = {1,7,3,9,5};
    
    printf("Array elements: \n");
    printArray(a);
    printArray(b);
    printArray(c);
    
    return 0;
}
