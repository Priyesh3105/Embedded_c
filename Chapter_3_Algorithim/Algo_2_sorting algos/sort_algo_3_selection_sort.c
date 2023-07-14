#include <stdio.h>

void print(int *arr, int n);

void selection_sort(int *arr, int n)
{
    int indexOfMin, temp, j, count = 0, check = 0, k = 1;
    printf("Selection sort running...\n");
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[indexOfMin])
            {
                indexOfMin = j;
                count++;
            }
        }
        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;

        if (count > check)
        {
            printf("sorting in pass %d -> ", k);
            print(arr, n);
            k++;
            check = count;
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
    selection_sort(arr, n);
    print(arr, n);
    return 0;
}