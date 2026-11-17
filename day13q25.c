#include <stdio.h>

int main() {
    //Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
    int a, b;
    char n;
    printf("Enter calculation(2 + 3): ");
    scanf("%d %c %d", &a, &n, &b);
    switch(n){
        case '+':
        printf("Sum = %d", a+b);
        break;

        case '-':
        printf("Difference = %d", a-b);
        break;

        case '/':
        printf("Quotient = %d", a/b);
        break;

        case '*':
        printf("Product = %d", a*b);
        break;

        case '%':
        printf("Remainder = %d", a%b);
        break;

        default:
        printf("Invalid Input");
        break;
        }

    return 0;
}