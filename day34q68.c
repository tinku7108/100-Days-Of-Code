
#include <stdio.h>

int main()
{
    int arr[100], n, num, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number you want to delete: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            for(j = i; j < n - 1; j++)
                arr[j] = arr[j + 1];

            n--;
            break;
        }
    }

    printf("Array after deletion: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
