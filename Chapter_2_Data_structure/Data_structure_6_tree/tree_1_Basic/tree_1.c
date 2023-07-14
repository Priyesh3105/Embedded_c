#include <stdio.h>
#include <stdlib.h>

void printArrayRep(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] != -1)
            printf("%d ", arr[i]);
        else
            printf("X ");
    }
    printf("\n");
}

int main()
{
    // Example binary tree:
    //                  1
    //                / | \
    //               2  3  4
    //                  |
    //                  5
    //                 / \
    //                6   7

    int height = 2;  // Height of the binary tree
    int arraySize = (1 << (height + 1)) - 1;  // Calculate array size using bit shifting

    int *treeArray = (int *)malloc(arraySize * sizeof(int));  // Dynamically allocate memory for the array

    // Initialize the array with tree elements
    treeArray[0] = 1;
    treeArray[1] = 2;
    treeArray[2] = 3;
    treeArray[3] = 4;
    treeArray[4] = -1;
    treeArray[5] = 5;
    treeArray[6] = 6;
    treeArray[7] = 7;

    // Print the array representation
    printf("Array representation of the binary tree: ");
    printArrayRep(treeArray, arraySize);

    // Free the dynamically allocated memory
    free(treeArray);

    return 0;
}
