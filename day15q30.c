#include <stdio.h>

int main() {
    int n;
    int reverse_n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Before Reversing = %d\n", n);

    //find last digit
    while(n>0){
    int digit = n % 10;
    n = n/10;
    reverse_n = reverse_n * 10 + digit;
    }

    printf("After Reversing = %d\n", reverse_n);

    return 0;
}