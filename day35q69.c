
#include <stdio.h>

int main()
{
    int arr[100], n, i, max2;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0];
    for(i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Maximum = %d\n", max);

    max2 = arr[0];
    for(i=0; i<n; i++){
        if(arr[i] < max && arr[i] > max2){
            max2 = arr[i];
        }
    }

    printf("Second max = %d\n", max2);

    return 0;
}
