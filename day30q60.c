#include <stdio.h>

int main() {
    int n;
    int arr[n], i;
    int count_pos = 0, count_neg = 0, count_zero = 0; 

    printf("Enter how many numbers you want to store in array: ");
    scanf("%d", &n);

    printf("Enter %d number to store in array: ", n);
    for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
        if(arr[i] > 0){
            count_pos++;
        }

        else if(arr[i] < 0){
            count_neg++;
        }

        else{
            count_zero++;
        }
    }
    printf("Positive = %d\n", count_pos);
    printf("Negative = %d\n", count_neg);
    printf("Zero = %d\n", count_zero);

    return 0;
}