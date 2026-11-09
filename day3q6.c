#include <stdio.h>

int main() {
    int a, b, temp;
    a=5, b=6;
    temp = a;
    a = b;
    b = temp;
    printf(" Value of a and after swap are %d and %d", a, b);
    return 0;
}