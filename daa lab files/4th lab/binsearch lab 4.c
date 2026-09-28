#include <stdio.h>

int binsearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        if (target < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int n, target;

    printf("number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("target element: ");
    scanf("%d", &target);

    int result = binsearch(arr, n, target);

    if (result != -1)
    {
        printf("element found at %d \n", result);
    }
    else
    {
        printf("element not found\n");
    }

    return 0;
}
