#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers a&b : ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf(" Value of a and b after swapping are %d and %d", a, b);
    return 0;
}