#include <stdio.h>

int main()
{
    int a = 10;
    int* ptr = &a;
    char* charPtr = (char*)ptr;  // Casting int* to char*

    printf("value of a is: %d\n", a);
    printf("value of ptr is: %d\n", ptr);
    printf("value of charPtr is: %d\n", *charPtr);
    printf("value of charPtr is: %p\n", (void*)charPtr);
    return 0;
}