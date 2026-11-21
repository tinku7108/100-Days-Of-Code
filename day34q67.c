
#include <stdio.h>

int main()
{
    int arr[100], n, num, i, j, pos;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number you want to insert at what position: ");
    scanf("%d %d", &num, &pos);

    for(i = n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];

    arr[pos] = num;
    

    printf("New array is : ");
    for(j=0; j<=n; j++){
        printf("%d ", arr[j]);
    }

    return 0;
}
