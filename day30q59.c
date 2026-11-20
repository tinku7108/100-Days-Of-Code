#include <stdio.h>

int main() {
    int n, sum = 0;
    int arr[n], i;
    int count_even = 0,count_odd = 0; 

    printf("Enter how many numbers you want to store in array: ");
    scanf("%d", &n);

    printf("Enter %d number to store in array: ", n);
    for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
        if(arr[i]%2 == 0){
            count_even++;
        }

        else{
            count_odd++;
        }
    }
    printf("Even = %d\n", count_even);
    printf("Odd = %d\n", count_odd);
    return 0;
}