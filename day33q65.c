
#include <stdio.h>

int main()
{
    int arr[100], n, target;
    int low, high, mid, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &target);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == target)
        {
            printf("Found at index %d", mid);
            return 0;
        }
        else if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("-1");

    return 0;
}
