#include <stdio.h>

int main() {
    int n;
    int arr[n], i, search, found = 0;

    printf("Enter how many numbers you want to store in array: ");
    scanf("%d", &n);

    printf("Enter %d number to store in array: ", n);
    for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }

    printf("Enter number you want to search: ");
    scanf("%d", &search);

    for(i=0; i<n; i++){
        if(search == arr[i]){
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }
        if (found == 0){
        printf("-1");
        }

    return 0;
}