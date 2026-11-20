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

    int max = arr[0];
    for(i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Maximum = %d\n", max);

    int min = arr[0];
    for(i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Minimum = %d\n", min);
    return 0;
}