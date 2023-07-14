#include <stdio.h>
#include <stdlib.h>

// NULL pointer

int main()
{
    int *ptr = NULL;
    char v = (char *)(int)ptr;
    printf("%d\n", ptr);
    printf("*****\n******\n**%c**\n**%c**\n**%c**\n%c%c%c%c%c\n**%c**\n**%c**\n*****\n*****\n", v, v, v, v, v, v, v, v, v, v);
    ptr = (int *)malloc(2 * sizeof(int));
    if (ptr == NULL)
        printf("Memory could not allocated.");
    else
        printf("Memory allocated successfully.");

    return 0;
}