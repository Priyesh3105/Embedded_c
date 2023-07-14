#include <stdio.h>

// Dangling pointer

int* fun() {
    int num = 10;
    int* ptr = &num;
    printf("Memory location of ptr inside the function: %p\n", (void*)&ptr);
    return ptr;
}

int main() {
    int* ptr = NULL;
    ptr = fun();

    
    printf("Memory location of ptr after the function ends: %p\n", (void*)&ptr);

    return 0;
}
