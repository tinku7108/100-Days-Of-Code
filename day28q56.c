#include <stdio.h>

int main() {
    int n;
    int arr[n], i;

    printf("Enter how many numbers you want to store in array: ");
    scanf("%d", &n);

    printf("Enter %d number to store in array: ", n);
    for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }

    printf("Stored numbers in array are: ");
    for(i=0; i<n; i++){
    printf("%d ", arr[i]);
    }
    return 0;
}