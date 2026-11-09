#include <stdio.h>

int main() {
    int a, b;
    a=7, b=8;
    printf("Before swapping %d and %d", a, b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping %d and %d", a, b);
    return 0;
}