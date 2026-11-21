
#include <stdio.h>

int main()
{
    int arr[100], n, num, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &num);

    i = n - 1;

    while(i >= 0 && arr[i] > num)
    {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = num;

    printf("Array after insertion: ");
    for(j = 0; j < n + 1; j++)
        printf("%d ", arr[j]);

    return 0;
}
