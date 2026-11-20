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

    for(i=n-1; i>=0; i--){
    printf("%d ", arr[i]);
    }

    return 0;
}