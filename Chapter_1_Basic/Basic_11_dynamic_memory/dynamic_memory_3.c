#include <stdio.h>
#include <stdlib.h>

// dynamic memory reallocation using realloc()

int main() {
    int i, n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int* ptr = (int*)malloc(n * sizeof(int));
    int oldSize = n;

    if (ptr == NULL) {
        printf("Memory is not available.");
        exit(1);
    }
    for (i = 0; i < n; i++) {
        printf("Enter the integer: ");
        scanf("%d", ptr + i);
    }
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));

    printf("\n");

    // taking new size value to realloc() the memory
    printf("Enter the new number of integers: ");
    scanf("%d", &n);

    ptr = (int*)realloc(ptr, n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory is not available.");
        exit(1);
    }

    if (n > oldSize) {
        for (i = oldSize; i < n; i++) {
            printf("Enter the integer: ");
            scanf("%d", ptr + i);
        }
    }

    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));

    free(ptr); // Free the dynamically allocated memory

    return 0;
}
