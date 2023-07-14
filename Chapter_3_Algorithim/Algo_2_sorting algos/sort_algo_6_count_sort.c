#include <stdio.h>
#include <limits.h>
#include <stdlib.h>


void print(int *arr, int n)
{
    printf("array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int maximum(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
void count_sort(int * arr, int n)
{
    int i, j;
    // get the maximum number
    int max = maximum(arr, n);
    // creating a count array
    int *count = (int *)malloc((max + 1) * sizeof(int));
    // initializing count array with zero
    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }
    // increment the count array with 1 to corresponding index
    for (i = 0; i < n; i++)
    {
        count[arr[i]] = count[arr[i]] + 1;
    }
    print(count, max+1);

    i = 0;
    j = 0;

    while (i <= max)
    {
        if (count[i] > 0)
        {
            arr[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int arr[] = {5, 6, 7, 5, 8, 4, 7, 3, 7, 9, 0, 1, 0,2 ,4};
    int n = 15;

    print(arr, n);
    printf("count sort running...\n");
    count_sort(arr, n);
    print(arr, n);
    return 0;
}