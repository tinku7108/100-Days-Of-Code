#include <stdio.h>

int main() {
    int n, reverse = 0;
    int digit, original;
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit ;
        n = n / 10;
    }
 
    if(reverse == original){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
    return 0;
}