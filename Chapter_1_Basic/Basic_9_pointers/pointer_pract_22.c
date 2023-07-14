#include <stdio.h>
#include <string.h>

//void pointer

int main(){
    int n = 65;
    void *ptr = &n;
    printf("this the the int value of void pointer to n: %d\n", *(int*)ptr);
    printf("this the the char value of void pointer to n: %c\n", *(char*)ptr);
    printf("this the the memory address of void pointer to n: %p\n", ptr);
    return 0;
}