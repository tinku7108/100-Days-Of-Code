#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers a&b : ");
    scanf("%d %d", &a, &b);
    printf("Before swapping %d and %d\n", a, b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping %d and %d\n", a, b);
    return 0;
}