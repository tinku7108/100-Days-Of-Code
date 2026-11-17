#include <stdio.h>

int main() {
    int n, i;
    printf("How many numberes you want to store? : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n);
    for (i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for (i=0; i<n; i++){
        printf("%d ", arr[i]);;
    }

    return 0;
}