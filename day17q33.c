#include <stdio.h>

int main() {
    int n, count=0, digit, sum = 0;
    int original;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    //check is it armstrong
    while(n>0){
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }
    
    if(sum == original){
        printf("Armstrong number");
    }
    else{
        printf("Not an Armstrong number");
    }
    
    return 0;
}