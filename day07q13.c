#include <stdio.h>

int main() {
    int n;
    printf("Enter a year: ");
    scanf("%d", &n);
    int leap = (n%400==0) || (n%4==0 && n%100 !=0);
    printf("Leap year: %d", leap);
    return 0;
}