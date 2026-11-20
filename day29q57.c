#include <stdio.h>

int main() {
    int n, sum = 0;
    int arr[n], i;

    printf("Enter how many numbers you want to store in array: ");
    scanf("%d", &n);

    printf("Enter %d number to store in array: ", n);
    for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
    sum = sum + arr[i];
    }
    printf("Sum of array elements are %d",sum);
    return 0;
}