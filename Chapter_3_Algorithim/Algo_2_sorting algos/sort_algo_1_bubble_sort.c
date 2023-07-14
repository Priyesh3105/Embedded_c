#include <stdio.h>

void print(int *arr, int n);

void bubble_sort(int *arr, int n)
{
    int temp;
    int isSorted = 0;

    printf("Bubble sort running...\n");
    for (int i = 0; i < n - 1; i++)
    {
        printf("Pass no: %d ->", i + 1);
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        print(arr, n);
        if (isSorted)
        {
            return;
        }
    }
}

void print(int *arr, int n)
{
    printf("array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {54, 356, 78, 43, 890, 234, 189};
    int n = 7;

    print(arr, n);
    bubble_sort(arr, n);
    print(arr, n);
    return 0;
}