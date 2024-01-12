#include <stdio.h>

int binary_search(int arr[], int l, int r, int s)
{
    if(l<=r)
    {
        int mid = l + (r-1)/2;

        //check s at mid
        if(arr[mid] == s)
        {
            return mid;
        }
        else if(arr[mid] < s)
        {
            return binary_search(arr, mid + 1, r, s);
        }
        else
        {
            return binary_search(arr, l, mid - 1, s);
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 23, 45, 53, 76, 78, 86};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 79;

    int ans = binary_search(arr, 0, n-1, key);
     if(ans == -1)
     {
        printf("Element is not present in array");
     }
     else
     {
        printf("%d is present at index %d", key, ans);
     }
}