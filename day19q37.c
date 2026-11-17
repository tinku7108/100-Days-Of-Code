#include <stdio.h>

int main() {
    // LCM = product of two numbers / HCF(gcd)
    int a, b, x, y, remainder;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;
    while(b != 0){
        remainder = a % b;
        a = b;
        b = remainder;
    }

    int lcm = x * y / a;
    printf("LCM = %d", lcm);
    return 0;
}