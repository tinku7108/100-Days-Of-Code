
#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], merge[200];
    int n, m, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    printf("Enter elements of first array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &m);

    printf("Enter elements of second array: ");
    for(i = 0; i < m; i++)
        scanf("%d", &arr2[i]);

    for(i = 0; i < n; i++)
        merge[i] = arr1[i];

    for(j = 0; j < m; j++)
        merge[i + j] = arr2[j];

    printf("Merged array: ");
    for(i = 0; i < n + m; i++)
        printf("%d ", merge[i]);

    return 0;
}
